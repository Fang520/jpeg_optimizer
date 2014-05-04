#ifndef ENCODE_H
#define ENCODE_H

#include "jpeg_optimizer.h"

int build_enc_vlc(jpeg_ctx_t *ctx);
int open_enc_bitstream(jpeg_ctx_t *ctx, uint8_t *buf, int len);
int close_enc_bitstream(jpeg_ctx_t *ctx);
int encode_dc(jpeg_ctx_t *ctx, int yuv_index, short mb[]);
int encode_ac(jpeg_ctx_t *ctx, int yuv_index, short mb[]);

#endif

