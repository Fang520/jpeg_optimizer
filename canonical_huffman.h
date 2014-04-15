#ifndef CANONICAL_HUFFMAN_H
#define CANONICAL_HUFFMAN_H

#include <stdint.h>

void make_canonical_huffman_codes(uint8_t *huff_size, uint16_t *huff_code, const uint8_t *bits_table, const uint8_t *val_table);

#endif