#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "build_opt_header.h"
#include "std_huffman_table.h"
#include "std_quant_table.h"
#include "log.h"

const uint8_t fixed_app0[] = { 0xff, 0xd8, 0xff, 0xe0, 0, 0x10, 0x4a, 0x46, 0x49, 0x46, 0, 0x1, 0x1, 0x1, 0, 0x60, 0, 0x60, 0, 0 };
const uint8_t fixed_sos[] = { 0xff, 0xda, 0, 0xc, 0x3, 0x1, 0, 0x2, 0x11, 0x3, 0x11, 0, 0x3f, 0 };
const uint8_t fixed_sof0[] = { 0xff, 0xc0, 0, 0x11, 0x8, 0, 0, 0, 0, 0x3, 0x1, 0x22, 0, 0x2, 0x11, 0, 0x3, 0x11, 0 };
const uint8_t fixed_dqt_head[] = { 0xff, 0xdb, 0, 0x43, 0 };

int build_opt_header(jpeg_ctx_t *ctx, uint8_t output[], int output_len)
{
	uint8_t *p;

	if (output_len < (ctx->app1_len + ctx->app1_xmp_len + 554))
	{
		log("JO: output buffer size is too short, %d\n", output_len);
		return -1;
	}

	p = output;

	memcpy(p, fixed_app0, sizeof(fixed_app0));
	p += sizeof(fixed_app0);

	if (ctx->app1_len > 0)
	{
		memcpy(p, ctx->app1_data, ctx->app1_len);
		p += ctx->app1_len;
	}

	if (ctx->app1_xmp_len > 0)
	{
		memcpy(p, ctx->app1_xmp_data, ctx->app1_xmp_len);
		p += ctx->app1_xmp_len;
	}

	memcpy(p, fixed_dqt_head, sizeof(fixed_dqt_head));
	p += sizeof(fixed_dqt_head);
	memcpy(p, std_quant_table[ctx->qscale], 64);
	p += 64;

	memcpy(p, fixed_sof0, sizeof(fixed_sof0));
	p[5] = (ctx->height >> 8) & 0xff;
	p[6] = ctx->height & 0xff;
	p[7] = (ctx->width >> 8) & 0xff;
	p[8] = ctx->width & 0xff;
	p[11] = ctx->rate_h[0] << 4 | (ctx->rate_v[0] & 0x0f);
	p[14] = ctx->rate_h[1] << 4 | (ctx->rate_v[1] & 0x0f);
	p[17] = ctx->rate_h[2] << 4 | (ctx->rate_v[2] & 0x0f);
	p += sizeof(fixed_sof0);

	*p++ = 0xff;
	*p++ = 0xc4;
	*p++ = 0;
	*p++ = 0x1f;
	*p++ = 0; // id0 dc lum
	memcpy(p, std_huffman_bits_dc_luminance, sizeof(std_huffman_bits_dc_luminance));
	p += sizeof(std_huffman_bits_dc_luminance);
	memcpy(p, std_huffman_val_dc, sizeof(std_huffman_val_dc));
	p += sizeof(std_huffman_val_dc);

	*p++ = 0xff;
	*p++ = 0xc4;
	*p++ = 0;
	*p++ = 0x1f;
	*p++ = 0x01; // id 1 dc chr
	memcpy(p, std_huffman_bits_dc_chrominance, sizeof(std_huffman_bits_dc_chrominance));
	p += sizeof(std_huffman_bits_dc_chrominance);
	memcpy(p, std_huffman_val_dc, sizeof(std_huffman_val_dc));
	p += sizeof(std_huffman_val_dc);

	*p++ = 0xff;
	*p++ = 0xc4;
	*p++ = 0;
	*p++ = 0xb5;
	*p++ = 0x10; // id 0 ac lum
	memcpy(p, std_huffman_bits_ac_luminance, sizeof(std_huffman_bits_ac_luminance));
	p += sizeof(std_huffman_bits_ac_luminance);
	memcpy(p, std_huffman_val_ac_luminance, sizeof(std_huffman_val_ac_luminance));
	p += sizeof(std_huffman_val_ac_luminance);

	*p++ = 0xff;
	*p++ = 0xc4;
	*p++ = 0;
	*p++ = 0xb5;
	*p++ = 0x11; // id 1 ac chr
	memcpy(p, std_huffman_bits_ac_chrominance, sizeof(std_huffman_bits_ac_chrominance));
	p += sizeof(std_huffman_bits_ac_chrominance);
	memcpy(p, std_huffman_val_ac_chrominance, sizeof(std_huffman_val_ac_chrominance));
	p += sizeof(std_huffman_val_ac_chrominance);

	memcpy(p, fixed_sos, sizeof(fixed_sos));
	p += sizeof(fixed_sos);

	return p - output;
}

