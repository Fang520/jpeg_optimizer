#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <memory.h>
#include "parse_header.h"
#include "build_opt_header.h"
#include "encode.h"
#include "decode.h"
#include "re_quantize.h"
#include "jpeg_optimizer.h"

/*
jpeg要点
1 huffman解码很慢，传统的先建树在深度递归根本不能用，一定要用多级查表法，这个算法比较复杂
2 码流里遇到ff要编码成ff00，这个在解码和编码时都要过滤一遍
3 码流结束要字节边界对齐，要补1
4 宏块如果后续全为0，用eob截断
5 huffman编码其实只是编码数据的长度，码流是以不断重复的len+data这样的结构组织的，后面的数据不编码（但所有的资料上都写的超级复杂）
6 jpeg支持分片（dri），一组mcu后，码流需要重新初始化，和h264的slice很像，解决错误传递的问题，没支持
7 码流里数据的正负号用最高位表示，高位是1为正
8 app1字段里存的是相机光圈这些信息（Exif），这个很常用，发现图片有这个字段时，需要保留
9 huffman码表是用范式哈夫曼存储的，这个只用两个数组就能构建出tree，很巧妙
10 jpeg还主要有无损压缩和渐进压缩两种算法，没支持
11 所有除法运算均要优化，特别量化算法 level = round(val / quant);

优化的地方
1 去掉idct, ict
2 去掉zigzag scan
3 去掉yuv转换（以前有的图片解码出来不是yuv420或411的，需要转成yuv420才能编码）
4 仅支持baseline，不支持灰度jpg，不支持dri，大大简化算法，提高性能
5 只使用一个量化表（一般都是2个，亮度色度各一个）
6 编码使用标准的huffman码表，只需生成一次，多次使用（前提是一个进程要能优化多张图片，不能优化一张就关闭）
7 如果原始图片用的是标准量化表，那么解码时将不生成解码表，极大节约时间（还没做完）
8 使用了ffmpeg里的码流读写和huffman多级查表算法，速度是所用软件中最快的，超过libjpeg
9 使用30级固定量化表
*/

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

static int process_mb(jpeg_ctx_t *ctx, int yuv_index)
{
	short mb[64];

	memset(mb, 0, sizeof(mb));

	if (decode_dc(ctx, yuv_index, mb) != 0)
		return -1;
	if (decode_ac(ctx, yuv_index, mb) != 0)
		return -1;

	re_quantize(ctx, yuv_index, mb);

	if (encode_dc(ctx, yuv_index, mb) != 0)
		return -1;
	if (encode_ac(ctx, yuv_index, mb) != 0)
		return -1;

	return 0;
}

static int process_mcu(jpeg_ctx_t *ctx)
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < ctx->rate_h[i] * ctx->rate_v[i]; j++)
		{
			if (process_mb(ctx, i) != 0)
				return -1;
		}
	}

	return 0;
}

static int process_body(jpeg_ctx_t *ctx)
{
	int i, mb_width, mb_height, max_rate_h, max_rate_v;

	max_rate_h = 0;
	max_rate_v = 0;
	for (i = 0; i < 3; i++)
	{
		if (ctx->rate_h[i] > max_rate_h)
			max_rate_h = ctx->rate_h[i];
		if (ctx->rate_v[i] > max_rate_v)
			max_rate_v = ctx->rate_v[i];
	}

	mb_width = (ctx->width + max_rate_h * 8 - 1) / (max_rate_h * 8);
	mb_height = (ctx->height + max_rate_v * 8 - 1) / (max_rate_v * 8);
	for (i = 0; i < mb_width * mb_height; i++)
	{
		if (process_mcu(ctx) != 0)
			return -1;
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
	if (ret != 0)
	{
		free_ctx(ctx);
		return -1;
	}

	ret = build_opt_header(ctx, output, *output_len);
	if (ret <= 0)
	{
		free_ctx(ctx);
		return -1;
	}
	
	ret = open_enc_bitstream(ctx, output + ret, *output_len - ret);
	if (ret != 0)
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

