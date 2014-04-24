#ifndef JPEG_OPTIMIZER_H
#define JPEG_OPTIMIZER_H

#include <stdint.h>
#include "bitstream.h"
#include "huffman_fast_dec.h"

typedef struct {
	uint8_t len[16];
	uint8_t val[12];
} dht_dc_t;

typedef struct {
	uint8_t len[16];
	uint8_t val[162];
} dht_ac_t;

typedef struct {
	uint8_t size[16];
	uint16_t code[16];
} dht_dc_hash_t;

typedef struct {
	uint8_t size[256];
	uint16_t code[256];
} dht_ac_hash_t;

typedef struct {
	uint8_t *app1_data;
	int app1_len;
	int height;
	int width;
	int qscale;
	dht_dc_t dht_dc[2]; 
	dht_ac_t dht_ac[2];
	dht_dc_hash_t dht_dc_hash[2];
	dht_ac_hash_t dht_ac_hash[2];
	uint8_t dqt[4][64];
	uint8_t rate_h[3];
	uint8_t rate_v[3];
	uint8_t qt_index[3];
	uint8_t ht_dc_index[3];
	uint8_t ht_ac_index[3];
	uint8_t *in_buf, *in_pos, *out_buf, *out_pos;
	PutBitContext putbit_ctx;
	GetBitContext getbit_ctx;
	VLC dec_vlcs[2][2];
	int last_dc[3];
	int new_last_dc[3];
	int zero_num;
} jpeg_ctx_t;

int optimize_jpeg(const uint8_t *input, int input_len, uint8_t *output, int *output_len, int qscale);

#endif