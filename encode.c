#include "encode.h"

int build_enc_vlc(jpeg_ctx_t *ctx)
{
	make_canonical_huffman_codes(ctx->dht_dc_hash[0].size, ctx->dht_dc_hash[0].code, ctx->dht_dc[0].len, ctx->dht_dc[0].val);
	make_canonical_huffman_codes(ctx->dht_dc_hash[1].size, ctx->dht_dc_hash[1].code, ctx->dht_dc[1].len, ctx->dht_dc[1].val);
	make_canonical_huffman_codes(ctx->dht_ac_hash[0].size, ctx->dht_ac_hash[0].code, ctx->dht_ac[0].len, ctx->dht_ac[0].val);
	make_canonical_huffman_codes(ctx->dht_ac_hash[1].size, ctx->dht_ac_hash[1].code, ctx->dht_ac[1].len, ctx->dht_ac[1].val);
	return 0;
}

int encode_dc(jpeg_ctx_t *ctx, int yuv_index, uint16_t mb[])
{
	return 0;
}

int encode_ac(jpeg_ctx_t *ctx, int yuv_index, uint16_t mb[])
{
	return 0;
}

int open_enc_bitstream(jpeg_ctx_t *ctx, uint8_t *buf, int len)
{
	init_put_bits(&ctx->enc_bit_ctx, buf, len);
	return 0;
}

int close_enc_bitstream(jpeg_ctx_t *ctx)
{
}