#include <stdlib.h>
#include <memory.h>
#include "decode.h"
#include "getbits_inline.h"
#include "std_huffman_table.h"
#include "log.h"

int build_dec_vlc(jpeg_ctx_t *ctx)
{
	int ret;

	if (ctx->is_std_vlc[0][0] == 0)
	{
		ret = build_vlc(&ctx->dec_vlcs[0][0], ctx->dht_dc[0].len, ctx->dht_dc[0].val, 12, 0);
		if (ret != 0)
			return -1;
	}
	else
		ctx->dec_vlcs[0][0].table = ctx->std_dec_vlcs[0][0].table;

	if (ctx->is_std_vlc[0][1] == 0)
	{
		ret = build_vlc(&ctx->dec_vlcs[0][1], ctx->dht_dc[1].len, ctx->dht_dc[1].val, 12, 0);
		if (ret != 0)
			return -1;
	}
	else
		ctx->dec_vlcs[0][1].table = ctx->std_dec_vlcs[0][1].table;

	if (ctx->is_std_vlc[1][0] == 0)
	{
		ret = build_vlc(&ctx->dec_vlcs[1][0], ctx->dht_ac[0].len, ctx->dht_ac[0].val, 251, 1);
		if (ret != 0)
			return -1;
	}
	else
		ctx->dec_vlcs[1][0].table = ctx->std_dec_vlcs[1][0].table;

	if (ctx->is_std_vlc[1][1] == 0)
	{
		ret = build_vlc(&ctx->dec_vlcs[1][1], ctx->dht_ac[1].len, ctx->dht_ac[1].val, 251, 1);
		if (ret != 0)
			return -1;
	}
	else
		ctx->dec_vlcs[1][1].table = ctx->std_dec_vlcs[1][1].table;

	return 0;
}

int build_std_dec_vlc(jpeg_ctx_t *ctx)
{
	int ret;

	ret = build_vlc(&ctx->std_dec_vlcs[0][0], std_huffman_bits_dc_luminance, std_huffman_val_dc, 12, 0);
	if (ret != 0)
		return -1;

	ret = build_vlc(&ctx->std_dec_vlcs[0][1], std_huffman_bits_dc_chrominance, std_huffman_val_dc, 12, 0);
	if (ret != 0)
		return -1;

	ret = build_vlc(&ctx->std_dec_vlcs[1][0], std_huffman_bits_ac_luminance, std_huffman_val_ac_luminance, 251, 1);
	if (ret != 0)
		return -1;

	ret = build_vlc(&ctx->std_dec_vlcs[1][1], std_huffman_bits_ac_chrominance, std_huffman_val_ac_chrominance, 251, 1);
	if (ret != 0)
		return -1;

	return 0;
}

void check_huffman_is_std(jpeg_ctx_t *ctx)
{
	const uint8_t *cur_lens, *std_lens;

	cur_lens = ctx->dht_dc[0].len;
	std_lens = std_huffman_bits_dc_luminance;
	if (memcmp(cur_lens, std_lens, 16) == 0)
		ctx->is_std_vlc[0][0] = 1;
	else
		ctx->is_std_vlc[0][0] = 0;

	cur_lens = ctx->dht_dc[1].len;
	std_lens = std_huffman_bits_dc_chrominance;
	if (memcmp(cur_lens, std_lens, 16) == 0)
		ctx->is_std_vlc[0][1] = 1;
	else
		ctx->is_std_vlc[0][1] = 0;

	cur_lens = ctx->dht_ac[0].len;
	std_lens = std_huffman_bits_ac_luminance;
	if (memcmp(cur_lens, std_lens, 16) == 0)
		ctx->is_std_vlc[1][0] = 1;
	else
		ctx->is_std_vlc[1][0] = 0;

	cur_lens = ctx->dht_ac[1].len;
	std_lens = std_huffman_bits_ac_chrominance;
	if (memcmp(cur_lens, std_lens, 16) == 0)
		ctx->is_std_vlc[1][1] = 1;
	else
		ctx->is_std_vlc[1][1] = 0;
}

int open_dec_bitstream(jpeg_ctx_t *ctx, const uint8_t *buf, int len)
{
	const uint8_t *src;
	uint8_t *dst;
	uint8_t x;
	int diff;

	if (!ctx->in_bits_buf)
	{
		ctx->in_bits_buf = (uint8_t*)malloc(len);
		if (!ctx->in_bits_buf)
		{
			log("JO: malloc fail in open_dec_bitstream\n");
			return -1;
		}
		ctx->buf_len = len;
	}
	else
	{
		if (ctx->buf_len < len)
		{
			ctx->in_bits_buf = (uint8_t*)realloc(ctx->in_bits_buf, len);
			if (!ctx->in_bits_buf)
			{
				log("JO: realloc fail in open_dec_bitstream\n");
				return -1;
			}
			ctx->buf_len = len;
		}
	}

	src = buf;
	dst = ctx->in_bits_buf;
	diff = 0;

	while (src - buf < len)
	{
		x = *src++;
		*dst++ = x;
		if (x == 0xff)
		{
			while (src - buf < len && x == 0xff)
				x = *src++;
			if (x == 0)
			{
				diff++;
				continue;
			}
			else
				break;
		}
	}

	init_get_bits(&ctx->getbit_ctx, ctx->in_bits_buf, (dst - ctx->in_bits_buf) * 8);

	ctx->diff_len = diff;

	return 0;
}

void close_dec_bitstream(jpeg_ctx_t *ctx)
{
	int len;
	
	len = get_bits_count(&ctx->getbit_ctx);
	len = (len + 7) >> 3;
	ctx->in_bits_len = len + 2;
}

int decode_dc(jpeg_ctx_t *ctx, int yuv_index, short mb[])
{
	int code, val;

	code = get_vlc(&ctx->getbit_ctx, ctx->dec_vlcs[0][yuv_index ? 1 : 0].table);
	if (code < 0)
	{
		log("JO: format wrong, huffman decode fail in decode_dc\n");
		return -1;
	}

	if (code)
	{
		val = get_xbits(&ctx->getbit_ctx, code);
		mb[0] = (short)val;
	}

	return 0;
}

int decode_ac(jpeg_ctx_t *ctx, int yuv_index, short mb[])
{
	int code, len, val;
	GetBitContext *gb = &ctx->getbit_ctx;
	int ac_index = yuv_index ? 1 : 0;
	int16_t (*table)[2] = ctx->dec_vlcs[1][ac_index].table;
	int zero_num = 0;

	while (zero_num < 63)
	{
		code = get_vlc(gb, table);
		if (code < 0)
		{
			log("JO: format wrong, huffman decode fail in decode_ac\n");
			return -1;
		}

		zero_num += code >> 4; //尼玛, 构造vlc时篡改符号值，每个符号加了16，原来就是了这里能够自动zero_num + 1啊，太扣效率了吧
		len = code & 0xf;
		if (len)
		{
			val = get_xbits(gb, len);
			mb[zero_num] = (short)val;
		}
	}

	return 0;
}

