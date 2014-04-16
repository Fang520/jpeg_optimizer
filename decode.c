#include "decode.h"

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

int close_dec_bitstream(jpeg_ctx_t *ctx)
{
	return 0;
}

int decode_dc(jpeg_ctx_t *ctx, int yuv_index, uint16_t mb[])
{
	int code;

	code = get_vlc(&ctx->dec_bit_ctx, ctx->dec_vlcs[yuv_index][0].table, 9, 2);
	if (code < 0) 
	{
		return 0xffff;
	}

	if (code)
		return get_xbits(&ctx->dec_bit_ctx, code);
	else
		return 0;
	return 0;
}

int decode_ac(jpeg_ctx_t *ctx, int yuv_index, uint16_t mb[])
{
	return 0;
}