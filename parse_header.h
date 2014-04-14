#include <stdint.h>
#include "jpeg_optimizer.h"

#define ERR_SOI					-1
#define ERR_APP0_IDENTIFIER		-2
#define ERR_DQT_PRECISION		-3
#define ERR_SOF0_PRECISION		-4
#define ERR_SOF0_COMPONENTS		-5
#define ERR_SOF_NOTSUPPORT		-6
#define ERR_SOS_COMPONENTS		-7
#define ERR_SOS_NOTFOUND		-8
#define ERR_FORMAT				-9
#define ERR_EOI					-10

int parse_header(jpeg_ctx_t *ctx, const uint8_t *data, int data_len);

