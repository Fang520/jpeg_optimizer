#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>
#include "huffman_fast_dec.h"

#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) > (b) ? (b) : (a))

typedef struct {
	uint8_t bits;
	uint16_t symbol;
	uint32_t code;
} VLCcode;

static void ff_mjpeg_build_huffman_codes(uint8_t *huff_size, uint16_t *huff_code,
	const uint8_t *bits_table,
	const uint8_t *val_table)
{
	int i, j, k, nb, code, sym;

	code = 0;
	k = 0;
	for (i = 0; i < 16; i++) {
		nb = bits_table[i];
		for (j = 0; j<nb; j++) {
			sym = val_table[k++];
			huff_size[sym] = i + 1;
			huff_code[sym] = code;
			code++;
		}
		code <<= 1;
	}
}

static int alloc_table(VLC *vlc, int size)
{
	int index;
	index = vlc->table_size;
	vlc->table_size += size;
	if (vlc->table_size > vlc->table_allocated) {
		vlc->table_allocated += (1 << vlc->bits);
		vlc->table = realloc(vlc->table, vlc->table_allocated * sizeof(VLC_TYPE)* 2);
		if (!vlc->table)
			return -1;
	}
	return index;
}

static void ff_free_vlc(VLC *vlc)
{
	free(&vlc->table);
}

static int build_table(VLC *vlc, int table_nb_bits, int nb_codes, VLCcode *codes)
{
	int table_size, table_index, index, code_prefix, symbol, subtable_bits;
	int i, j, k, n, nb, inc;
	uint32_t code;
	VLC_TYPE(*table)[2];

	table_size = 1 << table_nb_bits;
	if (table_nb_bits > 30)
		return -1;
	table_index = alloc_table(vlc, table_size);
	printf("new table index=%d size=%d\n", table_index, table_size);
	if (table_index < 0)
		return -1;
	table = &vlc->table[table_index];

	for (i = 0; i < table_size; i++) {
		table[i][1] = 0; //bits
		table[i][0] = -1; //codes
	}

	for (i = 0; i < nb_codes; i++) {
		n = codes[i].bits;
		code = codes[i].code;
		symbol = codes[i].symbol;
		printf("i=%d n=%d code=0x%x\n", i, n, code);
		if (n <= table_nb_bits) {
			j = code >> (32 - table_nb_bits);
			nb = 1 << (table_nb_bits - n);
			inc = 1;
			for (k = 0; k < nb; k++) {
				printf("%4x: code=%d n=%d\n", j, i, n);
				if (table[j][1] /*bits*/ != 0) {
					printf("incorrect codes\n");
					return -1;
				}
				table[j][1] = n; //bits
				table[j][0] = symbol;
				j += inc;
			}
		}
		else {
			n -= table_nb_bits;
			code_prefix = code >> (32 - table_nb_bits);
			subtable_bits = n;
			codes[i].bits = n;
			codes[i].code = code << table_nb_bits;
			for (k = i + 1; k < nb_codes; k++) {
				n = codes[k].bits - table_nb_bits;
				if (n <= 0)
					break;
				code = codes[k].code;
				if (code >> (32 - table_nb_bits) != code_prefix)
					break;
				codes[k].bits = n;
				codes[k].code = code << table_nb_bits;
				subtable_bits = MAX(subtable_bits, n);
			}
			subtable_bits = MIN(subtable_bits, table_nb_bits);
			j = code_prefix;
			table[j][1] = -subtable_bits;
			printf("%4x: n=%d (subtable)\n", j, codes[i].bits + table_nb_bits);
			index = build_table(vlc, subtable_bits, k - i, codes + i);
			if (index < 0)
				return -1;
			/* note: realloc has been done, so reload tables */
			table = &vlc->table[table_index];
			table[j][0] = index; //code
			i = k - 1;
		}
	}
	return table_index;
}

static int compare_vlcspec(const void *a, const void *b)
{
	const VLCcode *sa = a, *sb = b;
	return (sa->code >> 1) - (sb->code >> 1);
}

static int ff_init_vlc_sparse(VLC *vlc, int nb_bits, int nb_codes, const uint8_t *bits, const uint16_t *codes, const uint16_t *symbols)
{
	VLCcode *buf;
	int i, j, ret;

	vlc->bits = nb_bits;
	vlc->table = ((void *)0);
	vlc->table_allocated = 0;
	vlc->table_size = 0;

	buf = malloc((nb_codes + 1) * sizeof(VLCcode));
	j = 0;
	for (i = 0; i < nb_codes; i++)
	{
		buf[j].bits = bits[i];
		if (!(buf[j].bits > nb_bits))
			continue;
		buf[j].code = codes[i];
		buf[j].code <<= 32 - buf[j].bits;
		buf[j].symbol = symbols[i];
		j++;
	};
	qsort(buf, j, sizeof(VLCcode), compare_vlcspec);
	for (i = 0; i < nb_codes; i++)
	{
		buf[j].bits = bits[i];
		if (!(buf[j].bits && buf[j].bits <= nb_bits))
			continue;
		buf[j].code = codes[i];
		buf[j].code <<= 32 - buf[j].bits;
		buf[j].symbol = symbols[i];
		j++;
	};
	nb_codes = j;

	ret = build_table(vlc, nb_bits, nb_codes, buf);

	free(buf);
	if (ret < 0)
	{
		free(&vlc->table);
		vlc->table = ((void *)0);
		return -1;
	}
	return 0;
}

int build_vlc(VLC *vlc, const uint8_t *bits_table, const uint8_t *val_table, int nb_codes, int is_ac)
{
	uint8_t huff_size[256] = { 0 };
	uint16_t huff_code[256];
	uint16_t huff_sym[256];
	int i;

	assert(nb_codes <= 256);

	ff_mjpeg_build_huffman_codes(huff_size, huff_code, bits_table, val_table);

	for (i = 0; i < 256; i++)
		huff_sym[i] = i + 16 * is_ac;

	if (is_ac)
		huff_sym[0] = 16 * 256;

	return ff_init_vlc_sparse(vlc, 9, nb_codes, huff_size, huff_code, huff_sym);
}

static uint32_t bswap32(uint32_t x)
{
	return ((((x) << 8 & 0xff00) | ((x) >> 8 & 0x00ff)) << 16 | ((((x) >> 16) << 8 & 0xff00) | (((x) >> 16) >> 8 & 0x00ff)));
}

int get_vlc(GetBitContext *s, int16_t(*table)[2], int bits, int max_depth)
{
	int code;

	unsigned int re_index = (s)->index;
	unsigned int re_cache = 0;
	unsigned int re_size_plus8 = (s)->size_in_bits_plus8;
	re_cache = bswap32((uint32_t)((s)->buffer + (re_index >> 3))) << (re_index & 7);

	do {
		int n, nb_bits;
		unsigned int index;
		index = (((uint32_t)(re_cache)) >> (32 - (bits)));
		code = table[index][0];
		n = table[index][1];
		if (max_depth > 1 && n < 0) {
			re_index = ((re_size_plus8) >(re_index + (bits)) ? (re_index + (bits)) : (re_size_plus8));
			re_cache = bswap32((uint32_t)((s)->buffer + (re_index >> 3))) << (re_index & 7);
			nb_bits = -n;
			index = (((uint32_t)(re_cache)) >> (32 - (nb_bits))) + code;
			code = table[index][0];
			n = table[index][1];
			if (max_depth >
				2 && n < 0) {
				re_index = ((re_size_plus8) >(re_index + (nb_bits)) ? (re_index + (nb_bits)) : (re_size_plus8));
				re_cache = bswap32((uint32_t)((s)->buffer + (re_index >> 3))) << (re_index & 7);
				nb_bits = -n;
				index = (((uint32_t)(re_cache)) >> (32 - (nb_bits))) + code;
				code = table[index][0];
				n = table[index][
					1];
			}
		}
		do {
			re_cache <<= (n);
			re_index = ((re_size_plus8) > (re_index + (n)) ? (re_index + (n)) : (re_size_plus8));
		} while (0);
	} while (0);

	(s)->index = re_index;
	return code;
}

int get_xbits(GetBitContext *s, int n)
{
	register int sign;
	register int32_t cache;
	unsigned int re_index = (s)->index;
	unsigned int re_cache = 0;
	unsigned int re_size_plus8 = (s)->size_in_bits_plus8;
	re_cache = bswap32((uint32_t)((s)->buffer + (re_index >> 3))) << (re_index & 7);
	cache = ((uint32_t)re_cache);
	sign = ~cache >> 31;
	re_index = ((re_size_plus8) > (re_index + (n)) ? (re_index + (n)) : (re_size_plus8));
	(s)->index = re_index;
	return ((((uint32_t)(sign ^ cache)) >> (32 - (n))) ^ sign) - sign;
}
