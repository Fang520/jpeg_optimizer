#ifndef BUILD_OPT_HEADER_H
#define BUILD_OPT_HEADER_H

#include <stdint.h>
#include "jpeg_optimizer.h"

int build_opt_header(jpeg_ctx_t *ctx, uint8_t output[], int output_len);

#endif

