#include <stdio.h>
#include <stdint.h>
#include "parse_header.h"
#include "build_opt_header.h"
#include "canonical_huffman.h"
#include "huffman_fast_dec.h"
#include "std_huffman_table.h"
#include "std_quant_table.h"
#include "bitstream.h"
#include "jpeg_optimizer.h"

int build_dec_vlc(jpeg_ctx_t *ctx, VLC vlcs[2][2])
{
	build_vlc(&vlcs[0][0], ctx->dht_dc[0].len, ctx->dht_dc[0].val, 12, 0);
	build_vlc(&vlcs[0][1], ctx->dht_dc[1].len, ctx->dht_dc[1].val, 12, 0);
	build_vlc(&vlcs[1][0], ctx->dht_ac[0].len, ctx->dht_ac[0].val, 251, 1);
	build_vlc(&vlcs[1][1], ctx->dht_ac[1].len, ctx->dht_ac[1].val, 251, 1);
}

void free_dec_vlc(VLC vlcs[2][2])
{
	free(vlcs[0][0].table);
	free(vlcs[0][1].table);
	free(vlcs[1][0].table);
	free(vlcs[1][1].table);
}

void free_ctx(jpeg_ctx_t *ctx)
{
	if (ctx->app1_data)
		free(ctx->app1_data);
	free(ctx);
}

int optimize_jpeg(const uint8_t *input, int input_len, uint8_t *output, int *output_len)
{
	jpeg_ctx_t *ctx;
	VLC vlcs[2][2];
	uint8_t *p_in, *p_out;
	int ret;

	p_in = input;
	p_out = output;
	
	ctx = (jpeg_ctx_t *)malloc(sizeof(jpeg_ctx_t));
	if (!ctx)
		return -1;
	
	ret = parse_header(ctx, p_in, input_len);
	if (ret < 0)
	{
		free_ctx(ctx);
		return -1;
	}
	p_in += ret;

	ret = build_dec_vlc(ctx, vlcs);
	if (ret != 0)
	{
		free_ctx(ctx);
		return -1;
	}

	ret = build_opt_header(ctx, p_out, output_len);
	if (ret < 0)
	{
		free_dec_vlc(vlcs);
		free_ctx(ctx);
		return -1;
	}
	p_out += ret;
           
	free_dec_vlc(vlcs);
	free_ctx(ctx);

	*output_len = p_out - output;

	return ret;
}


#pragma warning(disable : 4996)

int main(int argc, char** argv)
{
	uint8_t *filename_in = "d:\\a.jpg";
	uint8_t *filename_out = "d:\\a_opt.jpg";
	int qscale = 10;

	FILE *fp_in, *fp_out;
	uint8_t *buf_in;
	uint8_t *buf_out;
	int ret, len_in, len_out;

	if (argc >= 4)
	{
		filename_in = argv[1];
		filename_out = argv[2];
		qscale = atoi(argv[3]);
	}

	fp_in = fopen(filename_in, "rb");
	if (fp_in)
	{
		printf("open input file fail, %s\n", filename_in);
		return -1;
	}

	fseek(fp_in, 0, SEEK_END);
	len_in = ftell(fp_in);
	fseek(fp_in, 0, SEEK_SET);

	buf_in = (uint8_t*)malloc(len_in);
	if (!buf_in)
	{
		printf("malloc input buffer fail\n");
		fclose(fp_in);
		return -1;
	}

	len_out = len_in * 2;
	buf_out = (uint8_t*)malloc(len_out);
	if (!buf_out)
	{
		printf("malloc output buffer fail\n");
		free(buf_in);
		fclose(fp_in);
		return -1;
	}

	if (fread(buf_in, 1, len_in, fp_in) != len_in)
	{
		printf("read input file fail\n");
		free(buf_out);
		free(buf_in);
		fclose(fp_in);
		return -1;
	}

	ret = optimize_jpeg(buf_in, len_in, buf_out, &len_out);
	if (ret != 0)
	{
		printf("optimize jpeg fail\n");
		free(buf_out);
		free(buf_in);
		fclose(fp_in);
		return -1;
	}

	fp_out = fopen(filename_out, "wb");
	if (fp_out)
	{
		printf("open output file fail, %s\n", filename_out);
		free(buf_out);
		free(buf_in);
		fclose(fp_in);
		return -1;
	}

	if (fwrite(buf_out, 1, len_out, fp_out) != len_out)
	{
		printf("write output file fail\n");
		fclose(fp_out);
		free(buf_out);
		free(buf_in);
		fclose(fp_in);
		return -1;
	}

	printf("ok, output file: %s\n", filename_out);
	fclose(fp_out);
	free(buf_out);
	free(buf_in);
	fclose(fp_in);
	return 0;
}