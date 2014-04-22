#ifndef BITSTREAM_H
#define BITSTREAM_H

#include <stdint.h>

typedef struct {
	uint32_t bit_buf;
	int bit_left;
	uint8_t *buf, *buf_ptr, *buf_end;
	int size_in_bits;
} PutBitContext;

typedef struct {
	const uint8_t *buffer, *buffer_end;
	int index;
	int size_in_bits;
} GetBitContext;

void init_put_bits(PutBitContext *s, uint8_t *buffer, int buffer_size);
int put_bits_count(PutBitContext *s);
void flush_put_bits(PutBitContext *s);
void put_bits(PutBitContext *s, int n, unsigned int value);
void put_sbits(PutBitContext *pb, int n, int32_t value);
void put_bits32(PutBitContext *s, uint32_t value);

void init_get_bits(GetBitContext *s, const uint8_t *buffer, int bit_size);
int get_xbits(GetBitContext *s, int n);
int get_bits(GetBitContext *s, int n);

#endif
