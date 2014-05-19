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
jpegҪ��
1 huffman�����������ͳ���Ƚ�������ȵݹ���������ã�һ��Ҫ�ö༶���������㷨�Ƚϸ���
2 ����������ffҪ�����ff00������ڽ���ͱ���ʱ��Ҫ����һ�飨Ϊ��ʵ����һ�㣬������malloc��һ���ͼƬһ������ڴ棬�о����˷ѣ�
3 ��������Ҫ�ֽڱ߽���룬Ҫ��1
4 ����������ȫΪ0����eob�ض�
5 huffman������ʵֻ�Ǳ������ݵĳ��ȣ��������Բ����ظ���len+data�����Ľṹ��֯�ģ���������ݲ����루�����е������϶�д�ĳ������ӣ�
6 jpeg֧�ַ�Ƭ��dri����һ��mcu��������Ҫ���³�ʼ������h264��slice���񣬽�����󴫵ݵ����⣬û֧��
7 ���������ݵ������������λ��ʾ����λ��1Ϊ��
8 app1�ֶ������������Ȧ��Щ��Ϣ��Exif��������ܳ��ã�����ͼƬ������ֶ�ʱ����Ҫ����
9 app1�ֶο��ܳ������Σ�photoshop�����һ��xmp�������µ�app1�Ŀǰ����������ֶΣ�ԭ��app1�п��ܳ������Σ�֮ǰ��Ϊ��������ڴ�й©��
10 huffman������÷�ʽ�������洢�ģ����ֻ������������ܹ�����tree��������
11 jpeg����Ҫ������ѹ���ͽ���ѹ�������㷨��û֧��
12 ������Ϊѭ��64�Σ������к��������ʱ�ģ���Ҫ�����Ż�
13 ��־�����ѭ���ԭ��: 
	a ���ڳ���Ա����Ϣ���ڳ����ֳ����������־��������������ͣ���ͨ������ֵ����������ϼ����ڴ�ӡ��Ϣ
	b �����û���Ҫ�Ĵ�����Ϣ������Ҫ��ӡ������������ͣ��𼶴��ݣ����ͨ���û�api�������id

�Ż��ĵط�
1 ȥ��idct, ict
2 ȥ��zigzag scan
3 ȥ��yuvת������ǰ�е�ͼƬ�����������yuv420��411�ģ���Ҫת��yuv420���ܱ��룩
4 ��֧��baseline����֧�ֻҶ�jpg����֧��dri�������㷨���������
5 ֻʹ��һ��������һ�㶼��2��������ɫ�ȸ�һ����
6 ʹ����ffmpeg���������д��huffman�༶����㷨���ٶ���������������ģ�����libjpeg
7 ʹ��30���̶�������
8 �����Ż�����ͼƬʱ������ʹ�ñ�׼��huffman���ֻ������һ��
9 �����Ż�����ͼƬʱ��Ԥ�����ɱ�׼huffman��������ԭʼͼƬ�õ��Ǳ�׼huffman����ôʹ��Ԥ���ɽ���������Լʱ��
10 �����Ż�����ͼƬʱ��malloc�����ڴ澡���ƽ�����һ��ͼƬʹ�ã�������malloc, free
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
