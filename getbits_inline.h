#ifndef GETBITS_INLINE_H
#define GETBITS_INLINE_H

#include "bitstream.h"

#ifdef _WIN32
#define INLINE 
#else
#define INLINE inline
#endif

static uint32_t INLINE bswap32(uint32_t x)
{
#ifdef _WIN32
	__asm 
	{
		mov eax, x
		bswap eax
	}
#else
	__asm__("bswap   %0" : "+r" (x));
	return x;
#endif
	//return ((((x) << 8 & 0xff00) | ((x) >> 8 & 0x00ff)) << 16 | ((((x) >> 16) << 8 & 0xff00) | (((x) >> 16) >> 8 & 0x00ff)));
}

static void INLINE init_get_bits(GetBitContext *s, const uint8_t *buffer, int bit_size)
{
	int buffer_size = (bit_size + 7) >> 3;
	if (buffer_size < 0 || bit_size < 0)
	{
		buffer_size = bit_size = 0;
		buffer = 0;
	}
	s->buffer = buffer;
	s->size_in_bits = bit_size;
	s->buffer_end = buffer + buffer_size;
	s->index = 0;
}

static int INLINE get_xbits(GetBitContext *s, int n)
{
	register int sign;
	register int32_t cache;
	unsigned int re_index = (s)->index;
	int re_cache = 0;
	re_cache = bswap32(*(uint32_t*)(((const uint8_t *)(s)->buffer) + (re_index >> 3))) << (re_index & 0x07);
	cache = ((uint32_t)re_cache);
	sign = (~cache) >> 31;
	re_index += n;
	s->index = re_index;
	return ((((uint32_t)(sign ^ cache)) >> (32 - (n))) ^ sign) - sign;
}

static int INLINE get_bits(GetBitContext *s, int n)
{
	register int tmp;
	unsigned int re_index = s->index;
	int re_cache = 0;
	re_cache = bswap32(*(uint32_t*)(((const uint8_t *)(s)->buffer) + (re_index >> 3))) << (re_index & 0x07);
	tmp = (((uint32_t)(re_cache)) >> (32 - (n)));
	re_index += n;
	s->index = re_index;
	return tmp;
}

static int INLINE get_bits_count(GetBitContext *s)
{
	return s->index;
}

static int INLINE get_vlc(GetBitContext *s, int16_t(*table)[2])
{
	int code;

	unsigned int re_index = s->index;
	int re_cache = 0;
	re_cache = bswap32(*(uint32_t*)(((const uint8_t *)(s)->buffer) + (re_index >> 3))) << (re_index & 0x07);

	int n, nb_bits;
	unsigned int index;
	index = (((uint32_t)(re_cache)) >> (32 - 9));
	code = table[index][0];
	n = table[index][1];
	if (n < 0)
	{
		re_index += 9;
		re_cache = bswap32(*(uint32_t*)(((const uint8_t *)(s)->buffer) + (re_index >> 3))) << (re_index & 0x07);
		nb_bits = -n;
		index = (((uint32_t)re_cache) >> (32 - nb_bits)) + code;
		code = table[index][0];
		n = table[index][1];
	}
	re_cache <<= n;
	re_index += n;
	s->index = re_index;
	return code;
}

#endif
