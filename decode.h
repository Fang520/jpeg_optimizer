#ifndef DECODE_H
#define DECODE_H

#include "jpeg_optimizer.h"

int build_dec_vlc(jpeg_ctx_t *ctx);
int open_dec_bitstream(jpeg_ctx_t *ctx, const uint8_t *buf, int len);
int close_dec_bitstream(jpeg_ctx_t *ctx);
int decode_dc(jpeg_ctx_t *ctx, int yuv_index, short mb[]);
int decode_ac(jpeg_ctx_t *ctx, int yuv_index, short mb[]);

#endif