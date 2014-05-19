#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "parse_header.h"
#include "build_opt_header.h"
#include "encode.h"
#include "decode.h"
#include "re_quantize.h"
#include "jpeg_optimizer.h"
#include "log.h"

/*
jpeg要点
1 huffman解码很慢，传统的先建树在深度递归根本不能用，一定要用多级查表法，这个算法比较复杂
2 码流里遇到ff要编码成ff00，这个在解码和编码时都要过滤一遍（为了实现这一点，不得已malloc了一块和图片一样大的内存，感觉很浪费）
3 码流结束要字节边界对齐，要补1
4 宏块如果后续全为0，用eob截断
5 huffman编码其实只是编码数据的长度，码流是以不断重复的len+data这样的结构组织的，后面的数据不编码（但所有的资料上都写的超级复杂）
6 jpeg支持分片（dri），一组mcu后，码流需要重新初始化，和h264的slice很像，解决错误传递的问题，没支持
7 码流里数据的正负号用最高位表示，高位是1为正
8 app1字段里存的是相机光圈这些信息（Exif），这个很常用，发现图片有这个字段时，需要保留
9 app1字段可能出现两次，photoshop会添加一个xmp数据在新的app1里，目前保留了这个字段（原来app1有可能出现两次，之前因为这个导致内存泄漏）
10 huffman码表是用范式哈夫曼存储的，这个只用两个数组就能构建出tree，很巧妙
11 jpeg还主要有无损压缩和渐进压缩两种算法，没支持
12 量化因为循环64次，是所有函数里最费时的，需要尽力优化
13 日志输出遵循这个原则: 
	a 对于程序员的信息，在出错现场立即输出日志，不定义错误类型，不通过返回值向上输出，上级不在打印信息
	b 对于用户需要的错误信息，不需要打印，定义错误类型，逐级传递，最后通过用户api输出错误id

优化的地方
1 去掉idct, ict
2 去掉zigzag scan
3 去掉yuv转换（以前有的图片解码出来不是yuv420或411的，需要转成yuv420才能编码）
4 仅支持baseline，不支持灰度jpg，不支持dri，大大简化算法，提高性能
5 只使用一个量化表（一般都是2个，亮度色度各一个）
6 使用了ffmpeg里的码流读写和huffman多级查表算法，速度是所用软件中最快的，超过libjpeg
7 使用30级固定量化表
8 连续优化多张图片时，编码使用标准的huffman码表，只需生成一次
9 连续优化多张图片时，预先生成标准huffman解码表，如果原始图片用的是标准huffman表，那么使用预生成解码表，极大节约时间
10 连续优化多张图片时，malloc出的内存尽量移交给下一张图片使用，避免多次malloc, free
*/

static void clean_global_data(jpeg_ctx_t *ctx)
{
	int i, j;

	if (ctx)
	{
		if (ctx->in_bits_buf)
		{
			free(ctx->in_bits_buf);
			ctx->in_bits_buf = 0;
		}

		for (i = 0; i < 2; i++)
			for (j = 0; j < 2; j++)
				if (ctx->std_dec_vlcs[i][j].table)
					free(ctx->std_dec_vlcs[i][j].table);
	}
}

static void clean_last_data(jpeg_ctx_t *ctx)
{
	int i, j;

	if (ctx)
	{
		if (ctx->app1_data)
		{
			free(ctx->app1_data);
			ctx->app1_data = 0;
		}

		if (ctx->app1_xmp_data)
		{
			free(ctx->app1_xmp_data);
			ctx->app1_xmp_data = 0;
		}

		for (i = 0; i < 2; i++)
			for (j = 0; j < 2; j++)
				if (ctx->is_std_vlc[i][j] == 0)
					if (ctx->dec_vlcs[i][j].table)
						free(ctx->dec_vlcs[i][j].table);

		for (i = 0; i < 3; i++)
		{
			ctx->last_dc[i] = 0;
			ctx->new_last_dc[i] = 0;
		}
	}
}

static int process_mb(jpeg_ctx_t *ctx, int yuv_index)
{
#ifndef _WIN32
	short __attribute__((aligned(16))) mb[64];

	__asm__ volatile(
			"xorps  %%xmm0, %%xmm0  \n"
			"movaps %%xmm0,    (%0) \n"
			"movaps %%xmm0,  16(%0) \n"
			"movaps %%xmm0,  32(%0) \n"
			"movaps %%xmm0,  48(%0) \n"
			"movaps %%xmm0,  64(%0) \n"
			"movaps %%xmm0,  80(%0) \n"
			"movaps %%xmm0,  96(%0) \n"
			"movaps %%xmm0, 112(%0) \n"
			:: "r"(mb)
			: "memory"
			);
#else
	short mb[64];
	memset(mb, 0, 128);
#endif

	if (decode_dc(ctx, yuv_index, mb) != 0)
		return -1;
	if (decode_ac(ctx, yuv_index, mb) != 0)
		return -1;

	re_quantize(ctx, yuv_index, mb);

	encode_dc(ctx, yuv_index, mb);
	encode_ac(ctx, yuv_index, mb);

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

int jpeg_optimizer_run(intptr_t handle, const uint8_t *input, int *input_len, uint8_t *output, int *output_len)
{
	jpeg_ctx_t *ctx;
	int ret, out_head_len, in_head_len;

	if (!handle)
	{
		log("JO: handle is null in jpeg_optimizer_run\n");
		return -1;
	}

	if (*output_len < *input_len)
	{
		log("JO: output buffer size is not safe, maybe cause segment fault, %d\n", *output_len);
		return -1;
	}

	ctx = (jpeg_ctx_t *)handle;
	clean_last_data(ctx);

	ret = parse_header(ctx, input, *input_len);
	if (ret <= 0)
		return -1;
	
	in_head_len = ret;
	ret = open_dec_bitstream(ctx, input + ret, *input_len - ret);
	if (ret != 0)
		return -1;

	ret = build_opt_header(ctx, output, *output_len);
	if (ret <= 0)
		return -1;
	
	out_head_len = ret;
	open_enc_bitstream(ctx, output + ret, *output_len - ret);

	check_huffman_is_std(ctx);

	ret = build_dec_vlc(ctx);
	if (ret != 0)
		return -1;

	prepare_middle_quant_table(ctx);

	ret = process_body(ctx);
	if (ret != 0)
		return -1;

	close_enc_bitstream(ctx);

	close_dec_bitstream(ctx);

	*output_len = out_head_len + ctx->out_bits_len;
	*input_len = in_head_len + ctx->in_bits_len + ctx->diff_len;

	return 0;
}

intptr_t jpeg_optimizer_open(int qscale)
{
	jpeg_ctx_t *ctx;

	if (qscale < 0 || qscale >= 30)
	{
		log("JO: qscale range is 0-29, %d\n", qscale);
		return 0;
	}

	ctx = (jpeg_ctx_t *)malloc(sizeof(jpeg_ctx_t));
	if (!ctx)
	{
		log("JO: malloc fail in jpeg_optimizer_open\n");
		return 0;
	}

	memset(ctx, 0, sizeof(jpeg_ctx_t));
	ctx->qscale = qscale;

	build_enc_vlc(ctx);

	if (build_std_dec_vlc(ctx) != 0)
	{
		clean_global_data(ctx);
		free(ctx);
		return 0;
	}

	return (intptr_t)ctx;
}

void jpeg_optimizer_close(intptr_t handle)
{
	jpeg_ctx_t *ctx;

	if (!handle)
	{
		log("JO: handle is null in jpeg_optimizer_close\n");
		return;
	}

	ctx = (jpeg_ctx_t *)handle;

	clean_last_data(ctx);

	clean_global_data(ctx);

	free(ctx);
}
