#ifndef RE_QUANTIZE_H
#define RE_QUANTIZE_H

#include "context.h"

void prepare_middle_quant_table(jpeg_ctx_t *ctx);
void re_quantize(jpeg_ctx_t *ctx, int yuv_index, short mb[]);

#endif

