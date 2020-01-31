#ifndef DECODE_H
#define DECODE_H

#include "context.h"

int build_dec_vlc(jpeg_ctx_t *ctx);
int build_std_dec_vlc(jpeg_ctx_t *ctx);
int open_dec_bitstream(jpeg_ctx_t *ctx, const uint8_t *buf, int len);
void close_dec_bitstream(jpeg_ctx_t *ctx);
int decode_dc(jpeg_ctx_t *ctx, int yuv_index, short mb[]);
int decode_ac(jpeg_ctx_t *ctx, int yuv_index, short mb[]);
void check_huffman_is_std(jpeg_ctx_t *ctx);

#endif

