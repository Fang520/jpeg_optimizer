#ifndef HUFFMAN_FAST_DEC_H
#define HUFFMAN_FAST_DEC_H

#include <stdint.h>
#include "bitstream.h"

#define VLC_TYPE int16_t

typedef struct VLC {
	int bits;
	VLC_TYPE(*table)[2]; ///< code, bits
	int table_size, table_allocated;
} VLC;

int build_vlc(VLC *vlc, const uint8_t *bits_table, const uint8_t *val_table, int nb_codes, int is_ac);
int get_vlc(GetBitContext *s, int16_t(*table)[2], int bits, int max_depth);

#endif