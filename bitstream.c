#include <stdlib.h>
#include <assert.h>
#include "bitstream.h"

#define AV_WB32(p, darg) do {       	\
	unsigned d = (darg);            \
	((uint8_t*)(p))[3] = (d);       \
	((uint8_t*)(p))[2] = (d) >> 8;  \
	((uint8_t*)(p))[1] = (d) >> 16; \
	((uint8_t*)(p))[0] = (d) >> 24; \
} while (0)

void init_put_bits(PutBitContext *s, uint8_t *buffer, int buffer_size)
{
	if (buffer_size < 0) {
		buffer_size = 0;
		buffer = NULL;
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
	if (s->bit_left < 32)
		s->bit_buf <<= s->bit_left;
	while (s->bit_left < 32) {
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

	if (n < bit_left) {
		bit_buf = (bit_buf << n) | value;
		bit_left -= n;
	}
	else {
		bit_buf <<= bit_left;
		bit_buf |= value >> (n - bit_left);
		assert(s->buf_ptr + 3<s->buf_end);
		AV_WB32(s->buf_ptr, bit_buf);
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