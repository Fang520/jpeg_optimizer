#include <stdint.h>

typedef struct PutBitContext {
	uint32_t bit_buf;
	int bit_left;
	uint8_t *buf, *buf_ptr, *buf_end;
	int size_in_bits;
} PutBitContext;

void init_put_bits(PutBitContext *s, uint8_t *buffer, int buffer_size);
int put_bits_count(PutBitContext *s);
void flush_put_bits(PutBitContext *s);
void put_bits(PutBitContext *s, int n, unsigned int value);
void put_sbits(PutBitContext *pb, int n, int32_t value);
void put_bits32(PutBitContext *s, uint32_t value);
