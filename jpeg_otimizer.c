#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "parse_header.h"
#include "build_opt_header.h"
#include "canonical_huffman.h"
#include "huffman_fast_dec.h"
#include "std_huffman_table.h"
#include "std_quant_table.h"
#include "bitstream.h"
#include "encode.h"
#include "decode.h"
#include "jpeg_optimizer.h"

static void free_ctx(jpeg_ctx_t *ctx)
{
	if (ctx->app1_data)
		free(ctx->app1_data);
	if (ctx->dec_vlcs[0][0].table)
		free(ctx->dec_vlcs[0][0].table);
	if (ctx->dec_vlcs[0][1].table)
		free(ctx->dec_vlcs[0][1].table);
	if (ctx->dec_vlcs[1][0].table)
		free(ctx->dec_vlcs[1][0].table);
	if (ctx->dec_vlcs[1][1].table)
		free(ctx->dec_vlcs[1][1].table);
	if (ctx->in_buf)
		free(ctx->in_buf);
	free(ctx);
}

static int re_quantize(jpeg_ctx_t *ctx, uint16_t mb[])
{

}

/* 0=ok -1=err 1=end*/
static int process_mb(jpeg_ctx_t *ctx, int yuv_index)
{
	uint16_t mb[64];
	memset(mb, 0, sizeof(mb));
	if (decode_dc(ctx, yuv_index, mb) < 0) return -1;
	if (decode_ac(ctx, yuv_index, mb) < 0) return -1;
	//re_quantize(ctx, mb);
	//encode_dc(ctx, yuv_index, mb);
	//encode_dc(ctx, yuv_index, mb);
}

/* 0=ok -1=err 1=end*/
static int process_mcu(jpeg_ctx_t *ctx)
{
	int i, j, ret;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < ctx->rate_h[i] * ctx->rate_v[i]; j++)
		{
			printf("---mb, index=%d\n", i);
			ret = process_mb(ctx, i);
			if (ret == 1)
				return 0;
			else if (ret == -1)
				return -1;
		}
	}
	return 0;
}

static int process_body(jpeg_ctx_t *ctx)
{
	int ret;
	for (;;)
	{
		ret = process_mcu(ctx);
		if (ret == 1)
			break;
		else if (ret == -1)
			return -1;

		ctx->mcu_number++;
		if (ctx->dri)
		{
			if (ctx->mcu_number % ctx->dri == 0)
			{
				ctx->in_pos += 2;
			}
		}
	}
	return 0;
}

int optimize_jpeg(const uint8_t *input, int input_len, uint8_t *output, int *output_len, int qscale)
{
	jpeg_ctx_t *ctx;
	int ret;

	if (qscale < 0 || qscale >= 30)
		return -1;

	ctx = (jpeg_ctx_t *)malloc(sizeof(jpeg_ctx_t));
	if (!ctx)
		return -1;
	memset(ctx, 0, sizeof(jpeg_ctx_t));
	ctx->qscale = qscale;

	ret = parse_header(ctx, input, input_len);
	if (ret <= 0)
	{
		free_ctx(ctx);
		return -1;
	}
	
	ret = open_dec_bitstream(ctx, input + ret, input_len - ret);
	if (ret < 0)
	{
		free_ctx(ctx);
		return -1;
	}

	ret = build_opt_header(ctx, output, *output_len);
	if (ret < 0)
	{
		free_ctx(ctx);
		return -1;
	}
	
	ret = open_enc_bitstream(ctx, output + ret, *output_len - ret);
	if (ret < 0)
	{
		free_ctx(ctx);
		return -1;
	}

	ret = build_enc_vlc(ctx);
	if (ret != 0)
	{
		free_ctx(ctx);
		return -1;
	}
	
	ret = build_dec_vlc(ctx);
	if (ret != 0)
	{
		free_ctx(ctx);
		return -1;
	}

	ret = process_body(ctx);
	if (ret != 0)
	{
		free_ctx(ctx);
		return -1;
	}

	ret = close_enc_bitstream(ctx);
	if (ret != 0)
	{
		free_ctx(ctx);
		return -1;
	}

	ret = close_dec_bitstream(ctx);
	if (ret != 0)
	{
		free_ctx(ctx);
		return -1;
	}

	*output_len = ctx->out_pos - output;
	free_ctx(ctx);
	return 0;
}