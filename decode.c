#include <stdlib.h>
#include "decode.h"
#include "getbits_inline.h"

int build_dec_vlc(jpeg_ctx_t *ctx)
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

int open_dec_bitstream(jpeg_ctx_t *ctx, const uint8_t *buf, int len)
{
	const uint8_t *src;
	uint8_t *dst;
	uint8_t x;

	ctx->in_bits_buf = (uint8_t*)malloc(len);
	if (!ctx->in_bits_buf)
		return -1;

	src = buf;
	dst = ctx->in_bits_buf;

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
			else
				break;
		}
	}

	init_get_bits(&ctx->getbit_ctx, ctx->in_bits_buf, (dst - ctx->in_bits_buf) * 8);

	return 0;
}

int close_dec_bitstream(jpeg_ctx_t *ctx)
{
	int len;
	
	len = get_bits_count(&ctx->getbit_ctx);
	len = (len + 7) >> 3;
	ctx->in_bits_len = len + 2;
	return 0;
}

static int decode_dc(jpeg_ctx_t *ctx, int yuv_index, short mb[])
{
	int code, val;

	code = get_vlc(&ctx->getbit_ctx, ctx->dec_vlcs[0][yuv_index ? 1 : 0].table);
	if (code < 0)
		return -1;

	if (code)
	{
		val = get_xbits(&ctx->getbit_ctx, code);
		mb[0] = (short)val;
	}

	return 0;
}

static int decode_ac(jpeg_ctx_t *ctx, int yuv_index, short mb[])
{
	int zero_num, ac_index, code, len, val;

	ac_index = yuv_index ? 1 : 0;
	zero_num = 0;

	while (zero_num < 63)
	{
		code = get_vlc(&ctx->getbit_ctx, ctx->dec_vlcs[1][ac_index].table);
		if (code < 0)
			return -1;

		zero_num += code >> 4; //尼玛, 构造vlc时篡改符号值，每个符号加了16，原来就是了这里能够自动zero_num + 1啊，太扣效率了吧
		len = code & 0xf;
		if (len)
		{
			val = get_xbits(&ctx->getbit_ctx, len);
			mb[zero_num] = (short)val;
		}
	}

	return 0;
}

int decode(jpeg_ctx_t *ctx, int yuv_index, short mb[])
{
	if (decode_dc(ctx, yuv_index, mb) != 0)
		return -1;
	if (decode_ac(ctx, yuv_index, mb) != 0)
		return -1;
	return 0;
}

