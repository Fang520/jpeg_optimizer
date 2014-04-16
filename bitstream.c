#include <stdlib.h>
#include <assert.h>
#include "bitstream.h"

static uint32_t bswap32(uint32_t x)
{
	return ((((x) << 8 & 0xff00) | ((x) >> 8 & 0x00ff)) << 16 | ((((x) >> 16) << 8 & 0xff00) | (((x) >> 16) >> 8 & 0x00ff)));
}

void init_put_bits(PutBitContext *s, uint8_t *buffer, int buffer_size)
{
	if (buffer_size < 0)
	{
		buffer_size = 0;
		buffer = ((void *)0);
	}

	s->size_in_bits = 8 * buffer_size;
	s->buf = buffer;
	s->buf_end = s->buf + buffer_size;
	s->buf_ptr = s->buf;
	s->bit_left = 32;
	s->bit_buf = 0;
}

int put_bits_count(PutBitContext *s)
{
	return (s->buf_ptr - s->buf) * 8 + 32 - s->bit_left;
}

void flush_put_bits(PutBitContext *s)
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

void put_bits(PutBitContext *s, int n, unsigned int value)
{
	unsigned int bit_buf;
	int bit_left;

	assert(n <= 31 && value < (1U << n));

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

void put_sbits(PutBitContext *pb, int n, int32_t value)
{
	assert(n >= 0 && n <= 31);

	put_bits(pb, n, value & ((1 << n) - 1));
}

void put_bits32(PutBitContext *s, uint32_t value)
{
	int lo = value & 0xffff;
	int hi = value >> 16;
	put_bits(s, 16, hi);
	put_bits(s, 16, lo);
}

void init_get_bits(GetBitContext *s, const uint8_t *buffer, int bit_size)
{
	int buffer_size = (bit_size + 7) >> 3;
	if (buffer_size < 0 || bit_size < 0) 
	{
		buffer_size = bit_size = 0;
		buffer = ((void *)0);
	}
	s->buffer = buffer;
	s->size_in_bits = bit_size;
	s->buffer_end = buffer + buffer_size;
	s->index = 0;
}

int get_bit(GetBitContext *s, int n)
{
	register int sign;
	register int32_t cache;
	unsigned int re_index = s->index;
	int re_cache = 0;
	re_cache = bswap32((uint32_t)(((const uint8_t *)(s)->buffer) + (re_index >> 3))) << (re_index & 0x07);
	cache = (uint32_t)re_cache;
	sign = (~cache) >> 31;
	re_index += n;
	s->index = re_index;
	return ((((uint32_t)(sign ^ cache)) >> (32 - (n))) ^ sign) - sign;
}