#include "canonical_huffman.h"

void make_canonical_huffman_codes(uint8_t *huff_size, uint16_t *huff_code, const uint8_t *bits_table, const uint8_t *val_table)
{
	int i, j, k, nb, code, sym;

	code = 0;
	k = 0;
	for (i = 0; i < 16; i++) {
		nb = bits_table[i];
		for (j = 0; j<nb; j++) {
			sym = val_table[k++];
			huff_size[sym] = (uint8_t)(i + 1);
			huff_code[sym] = (uint16_t)code;
			code++;
		}
		code <<= 1;
	}
}