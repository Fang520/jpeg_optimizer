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
#include "jpeg_optimizer.h"

static int build_dec_vlc(jpeg_ctx_t *ctx)
{
	int ret;
	ret = build_vlc(&ctx->dec_vlcs[0][0], ctx->dht_dc[0].len, ctx->dht_dc[0].val, 12, 0);
	if (ret != 0)
		return -1;
	ret = build_vlc(&ctx->dec_vlcs[0][1], ctx->dht_dc[1].len, ctx->dht_dc[1].val, 12, 0);
	if (ret != 0)
		return -1;
	ret = build_vlc(&ctx->dec_vlcs[1][0], ctx->dht_ac[0].len, ctx->dht_ac[0].val, 251, 1);
	if (ret != 0)
		return -1;
	ret = build_vlc(&ctx->dec_vlcs[1][1], ctx->dht_ac[1].len, ctx->dht_ac[1].val, 251, 1);
	if (ret != 0)
		return -1;
	return 0;
}

static int build_enc_vlc(jpeg_ctx_t *ctx)
{
	make_canonical_huffman_codes(ctx->dht_dc_hash[0].size, ctx->dht_dc_hash[0].code, ctx->dht_dc[0].len, ctx->dht_dc[0].val);
	make_canonical_huffman_codes(ctx->dht_dc_hash[1].size, ctx->dht_dc_hash[1].code, ctx->dht_dc[1].len, ctx->dht_dc[1].val);
	make_canonical_huffman_codes(ctx->dht_ac_hash[0].size, ctx->dht_ac_hash[0].code, ctx->dht_ac[0].len, ctx->dht_ac[0].val);
	make_canonical_huffman_codes(ctx->dht_ac_hash[1].size, ctx->dht_ac_hash[1].code, ctx->dht_ac[1].len, ctx->dht_ac[1].val);
	return 0;
}

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

static int init_dec_bit_stream(jpeg_ctx_t *ctx, const uint8_t *buf, int len)
{
	uint8_t *src, *dst, *x;

	ctx->in_buf = (uint8_t*)malloc(len);
	if (!ctx->in_buf)
		return -1;

	src = buf;
	dst = ctx->in_buf;

	while (src - buf < len)
	{
		x = *src++;
		*dst++ = x;
		if (x == 0xff) 
		{
			while (src - buf < len && x == 0xff)
				x = *src++;
			if (x == 0)
				continue;
			else if (x >= 0xd0 && x <= 0xd7)
				dst--;
			else
				break;
		}
	}

	init_get_bits(&ctx->dec_bit_ctx, ctx->in_buf, (dst - ctx->in_buf) * 8);

	return 0;
}

static int init_enc_bit_stream(jpeg_ctx_t *ctx, uint8_t *buf, int len)
{
	init_put_bits(&ctx->enc_bit_ctx, buf, len * 8);
}


static int decode_dc(jpeg_ctx_t *ctx, int yuv_index, uint16_t mb[])
{
	return 0;
}

static int decode_ac(jpeg_ctx_t *ctx, int yuv_index, uint16_t mb[])
{
	return 0;
}

static int encode_dc(jpeg_ctx_t *ctx, int yuv_index, uint16_t mb[])
{
	return 0;
}

static int encode_ac(jpeg_ctx_t *ctx, int yuv_index, uint16_t mb[])
{
	return 0;
}

static int re_quantize(jpeg_ctx_t *ctx, uint16_t mb[])
{

}

/* 0=ok -1=err 1=end*/
static int process_mb(jpeg_ctx_t *ctx, int yuv_index)
{
	uint16_t mb[64];
	decode_dc(ctx, yuv_index, mb);
	decode_ac(ctx, yuv_index, mb);
	re_quantize(ctx, mb);
	encode_dc(ctx, yuv_index, mb);
	encode_dc(ctx, yuv_index, mb);
}

/* 0=ok -1=err 1=end*/
static int process_mcu(jpeg_ctx_t *ctx)
{
	int i, j, ret;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < ctx->rate_h[i] * ctx->rate_v[i]; j++)
		{
			ret = process_mb(ctx, i ? 1 : 0);
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

static int add_tailer(jpeg_ctx_t *ctx)
{
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
	ctx->qscale = qscale;

	ret = parse_header(ctx, input, input_len);
	if (ret < 0)
	{
		free_ctx(ctx);
		return -1;
	}
	
	ret = init_dec_bit_stream(ctx, input + ret, input_len - ret);
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
	
	ret = init_enc_bit_stream(ctx, output + ret, *output_len - ret);
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

	ret = add_tailer(ctx);
	if (ret != 0)
	{
		free_ctx(ctx);
		return -1;
	}

	*output_len = ctx->out_pos - output;
	free_ctx(ctx);
	return 0;
}