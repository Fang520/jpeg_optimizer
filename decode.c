#include "decode.h"

static uint32_t bswap32(uint32_t x)
{
	return ((((x) << 8 & 0xff00) | ((x) >> 8 & 0x00ff)) << 16 | ((((x) >> 16) << 8 & 0xff00) | (((x) >> 16) >> 8 & 0x00ff)));
}

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
	int len, val;
	uint8_t *dqt;

	dqt = ctx->dqt[ctx->qt_index[yuv_index]];

	len = get_vlc(&ctx->dec_bit_ctx, ctx->dec_vlcs[0][yuv_index ? 1 : 0].table, 9, 2);
	if (len < 0)
		return -1;
	if (len)
	{
		val = get_xbits(&ctx->dec_bit_ctx, len);
		printf("dc=%d ac=", val);
		val = val * dqt[0] + ctx->last_dc[yuv_index];
		ctx->last_dc[yuv_index] = val;
		mb[0] = val;
	}
	return 0;
}

#if 0
int decode_ac(jpeg_ctx_t *ctx, int yuv_index, uint16_t mb[])
{
	int level;
	uint16_t code;
	GetBitContext *gb;
	gb = &ctx->dec_bit_ctx;
	uint32_t re_index; 
	int re_cache;
	int i;
	uint8_t *dqt;
	int ac_index = yuv_index ? 1 : 0;

	dqt = ctx->dqt[ctx->qt_index[yuv_index]];
	i = 0;
	re_index = gb->index;
	re_cache = 0;
	do
	{
		re_cache = bswap32(*(uint32_t*)(((const uint8_t *)gb->buffer) + (re_index >> 3))) << (re_index & 0x07);
		int n, nb_bits;
		unsigned int index;
		index = (((uint32_t)(re_cache)) >> (32 - 9));
		code = ctx->dec_vlcs[1][ac_index].table[index][0];
		n = ctx->dec_vlcs[1][ac_index].table[index][1];
		if (n < 0)
		{
			re_index += 9;
			re_cache = bswap32(*(uint32_t*)(((const uint8_t *)gb->buffer) + (re_index >> 3))) << (re_index & 0x07);
			nb_bits = -n;
			index = ((uint32_t)(re_cache)) >> (32 - nb_bits) + code;
			code = ctx->dec_vlcs[1][ac_index].table[index][0];
			n = ctx->dec_vlcs[1][ac_index].table[index][1];
		}
		re_cache <<= n;
		re_index += n;

		i += code >> 4;
		code &= 0xf;
		if (code)
		{
			if (code > 25 - 16)
			{
				re_cache = bswap32(*(uint32_t*)(((const uint8_t *)gb->buffer) + (re_index >> 3))) << (re_index & 0x07);
			}
			int cache = (uint32_t)re_cache;
			int sign = (~cache) >> 31;
			level = (((uint32_t)(sign ^ cache)) >> (32 - code)) ^ sign - sign;

			printf("%d re_index=%d", level, re_index);

			re_index += code;

			if (i > 63)
			{
				return -1;
			}
			mb[i] = level * dqt[i];
		} 
	} while (i < 63);
	printf("\n");
	gb->index = re_index;
	return 0;
}
#endif
int decode_ac(jpeg_ctx_t *ctx, int yuv_index, uint16_t mb[])
{
	int level;
	uint16_t code;
	GetBitContext *gb;
	gb = &ctx->dec_bit_ctx;
	uint32_t re_index;
	int re_cache;
	int i;
	uint8_t *dqt;
	int ac_index = yuv_index ? 1 : 0;

	dqt = ctx->dqt[ctx->qt_index[yuv_index]];

	i = 0;
	do
	{
		code = get_vlc(gb, ctx->dec_vlcs[1][ac_index].table, 9, 2);
		i += code >> 4;
		code &= 0xf;
		if (code)
		{
			level = get_xbits(&ctx->dec_bit_ctx, code);
			printf("%d(%d) ", level, i);
			if (i > 63)
			{
				return -1;
			}
			mb[i] = level * dqt[i];
		}
	} while (i < 63);
	printf("\n");
	return 0;
}