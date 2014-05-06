#ifndef PUTBITS_INLINE_H
#define PUTBITS_INLINE_H

#include "bitstream.h"

#ifdef _WIN32
#define INLINE __forceinline
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

static void INLINE init_put_bits(PutBitContext *s, uint8_t *buffer, int buffer_size)
{
	if (buffer_size < 0)
	{
		buffer_size = 0;
		buffer = 0;
	}

	s->size_in_bits = 8 * buffer_size;
	s->buf = buffer;
	s->buf_end = s->buf + buffer_size;
	s->buf_ptr = s->buf;
	s->bit_left = 32;
	s->bit_buf = 0;
}

static int INLINE put_bits_count(PutBitContext *s)
{
	return (s->buf_ptr - s->buf) * 8 + 32 - s->bit_left;
}

static void INLINE flush_put_bits(PutBitContext *s)
{
	s->bit_buf <<= s->bit_left;
	while (s->bit_left < 32)
	{
		*s->buf_ptr++ = s->bit_buf >> 24;
		s->bit_buf <<= 8;
		s->bit_left += 8;
	}
	s->bit_left = 32;
	s->bit_buf = 0;
}

static void INLINE put_bits(PutBitContext *s, int n, unsigned int value)
{
	unsigned int bit_buf;
	int bit_left;

	bit_buf = s->bit_buf;
	bit_left = s->bit_left;

	if (n < bit_left)
	{
		bit_buf = (bit_buf << n) | value;
		bit_left -= n;
	}
	else
	{
		bit_buf <<= bit_left;
		bit_buf |= value >> (n - bit_left);
		*(uint32_t *)s->buf_ptr = bswap32(bit_buf);
		s->buf_ptr += 4;
		bit_left += 32 - n;
		bit_buf = value;
	}
	s->bit_buf = bit_buf;
	s->bit_left = bit_left;
}

static void INLINE put_sbits(PutBitContext *pb, int n, int32_t value)
{
	put_bits(pb, n, value & ((1 << n) - 1));
}

static void INLINE put_bits32(PutBitContext *s, uint32_t value)
{
	int lo = value & 0xffff;
	int hi = value >> 16;
	put_bits(s, 16, hi);
	put_bits(s, 16, lo);
}

#endif

