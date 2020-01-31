#ifndef BITSTREAM_H
#define BITSTREAM_H

#include <stdint.h>

typedef struct
{
    uint32_t bit_buf;
    int bit_left;
    uint8_t *buf, *buf_ptr, *buf_end;
    int size_in_bits;
} PutBitContext;

typedef struct
{
    const uint8_t *buffer, *buffer_end;
    int index;
    int size_in_bits;
} GetBitContext;

#endif

