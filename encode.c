#include "encode.h"
#include "canonical_huffman.h"
#include "std_huffman_table.h"
#include "putbits_inline.h"

#ifdef _WIN32
#define INLINE __forceinline
#else
#define INLINE inline
#endif

const uint8_t ff_log2_tab[256] = {
	0, 0, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7
};

static int INLINE av_log2_16bit_c(unsigned int v)
{
	int n = 0;
	if (v & 0xff00) {
		v >>= 8;
		n += 8;
	}
	n += ff_log2_tab[v];

	return n;
}

static int INLINE av_log2_c(unsigned int v)
{
	int n = 0;
	if (v & 0xffff0000)
	{
		v >>= 16;
		n += 16;
	}
	if (v & 0xff00)
	{
		v >>= 8;
		n += 8;
	}
	n += ff_log2_tab[v];

	return n;
}

int build_enc_vlc(jpeg_ctx_t *ctx)
{
	make_canonical_huffman_codes(ctx->dht_dc_hash[0].size, ctx->dht_dc_hash[0].code, std_huffman_bits_dc_luminance, std_huffman_val_dc);
	make_canonical_huffman_codes(ctx->dht_dc_hash[1].size, ctx->dht_dc_hash[1].code, std_huffman_bits_dc_chrominance, std_huffman_val_dc);
	make_canonical_huffman_codes(ctx->dht_ac_hash[0].size, ctx->dht_ac_hash[0].code, std_huffman_bits_ac_luminance, std_huffman_val_ac_luminance);
	make_canonical_huffman_codes(ctx->dht_ac_hash[1].size, ctx->dht_ac_hash[1].code, std_huffman_bits_ac_chrominance, std_huffman_val_ac_chrominance);
	return 0;
}

void encode_dc(jpeg_ctx_t *ctx, int yuv_index, short mb[])
{
	int mant, nbits;
	short val;
	PutBitContext *pb;
	uint8_t *huff_size;
	uint16_t *huff_code;

	val = mb[0];
	pb = &ctx->putbit_ctx;
	huff_size = ctx->dht_dc_hash[yuv_index ? 1 : 0].size;
	huff_code = ctx->dht_dc_hash[yuv_index ? 1 : 0].code;

	if (val == 0)
	{
		put_bits(pb, huff_size[0], huff_code[0]);
	}
	else
	{
		mant = val;
		if (val < 0)
		{
			val = -val;
			mant--;
		}

		nbits = av_log2_16bit_c(val) + 1;

		put_bits(pb, huff_size[nbits], huff_code[nbits]);

		put_sbits(pb, nbits, mant);
	}
}

void encode_ac(jpeg_ctx_t *ctx, int yuv_index, short mb[])
{
	int mant, nbits, i, run, last_index, code;
	short val;
	PutBitContext *pb;
	uint8_t *huff_size;
	uint16_t *huff_code;

	pb = &ctx->putbit_ctx;
	huff_size = ctx->dht_ac_hash[yuv_index ? 1 : 0].size;
	huff_code = ctx->dht_ac_hash[yuv_index ? 1 : 0].code;

	run = 0;
	last_index = ctx->zero_num;
	for (i = 1; i <= last_index; i++)
	{
		val = mb[i];
		if (val == 0)
		{
			run++;
		}
		else
		{
			while (run >= 16)
			{
				put_bits(pb, huff_size[0xf0], huff_code[0xf0]);
				run -= 16;
			}
			mant = val;
			if (val < 0)
			{
				val = -val;
				mant--;
			}

			nbits = av_log2_c(val) + 1;
			code = (run << 4) | nbits;

			put_bits(pb, huff_size[code], huff_code[code]);

			put_sbits(pb, nbits, mant);
			run = 0;
		}
	}

	if (last_index < 63 || run != 0)
		put_bits(pb, huff_size[0], huff_code[0]);
}

int open_enc_bitstream(jpeg_ctx_t *ctx, uint8_t *buf, int len)
{
	init_put_bits(&ctx->putbit_ctx, buf, len);
	ctx->out_bits_buf = buf;
	return 0;
}

static int escape_FF(unsigned char* output_buf, int len)
{
	int i, new_len, ff_count;
	ff_count = 0;
	for (i = 0; i < len; i++)
	{
		if (output_buf[i] == 0xFF)
		{
			ff_count++;
		}
	}

	new_len = len + ff_count;

	for (i = len - 1; ff_count; i--)
	{
		unsigned char v = output_buf[i];
		if (v == 0xFF)
		{
			output_buf[i + ff_count] = 0;
			ff_count--;
		}
		output_buf[i + ff_count] = v;
	}

	return new_len;
}

static void byte_stuffing(PutBitContext * pbc)
{
	int length;
	length = (-put_bits_count(pbc)) & 7;
	if (length)
	{
		put_bits(pbc, length, (1 << length) - 1);
	}
}

int close_enc_bitstream(jpeg_ctx_t *ctx)
{
	int len;
	PutBitContext *pb;

	pb = &ctx->putbit_ctx;
	byte_stuffing(pb);
	flush_put_bits(pb);
	len = escape_FF(pb->buf, put_bits_count(pb) / 8);
	ctx->out_bits_buf[len] = 0xff;
	ctx->out_bits_buf[len + 1] = 0xd9;
	ctx->out_bits_len = len + 2;
	return 0;
}

