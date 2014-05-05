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
jpegҪ��
1 huffman�����������ͳ���Ƚ�������ȵݹ���������ã�һ��Ҫ�ö༶���������㷨�Ƚϸ���
2 ����������ffҪ�����ff00������ڽ���ͱ���ʱ��Ҫ����һ��
3 ��������Ҫ�ֽڱ߽���룬Ҫ��1
4 ����������ȫΪ0����eob�ض�
5 huffman������ʵֻ�Ǳ������ݵĳ��ȣ��������Բ����ظ���len+data�����Ľṹ��֯�ģ���������ݲ����루�����е������϶�д�ĳ������ӣ�
6 jpeg֧�ַ�Ƭ��dri����һ��mcu��������Ҫ���³�ʼ������h264��slice���񣬽�����󴫵ݵ����⣬û֧��
7 ���������ݵ������������λ��ʾ����λ��1Ϊ��
8 app1�ֶ������������Ȧ��Щ��Ϣ��Exif��������ܳ��ã�����ͼƬ������ֶ�ʱ����Ҫ����
9 huffman������÷�ʽ�������洢�ģ����ֻ������������ܹ�����tree��������
10 jpeg����Ҫ������ѹ���ͽ���ѹ�������㷨��û֧��
11 ���г��������Ҫ�Ż����ر������㷨 level = round(val / quant);

�Ż��ĵط�
1 ȥ��idct, ict
2 ȥ��zigzag scan
3 ȥ��yuvת������ǰ�е�ͼƬ�����������yuv420��411�ģ���Ҫת��yuv420���ܱ��룩
4 ��֧��baseline����֧�ֻҶ�jpg����֧��dri�������㷨���������
5 ֻʹ��һ��������һ�㶼��2��������ɫ�ȸ�һ����
6 ����ʹ�ñ�׼��huffman���ֻ������һ�Σ����ʹ�ã�ǰ����һ������Ҫ���Ż�����ͼƬ�������Ż�һ�ž͹رգ�
7 ���ԭʼͼƬ�õ��Ǳ�׼��������ô����ʱ�������ɽ���������Լʱ�䣨��û���꣩
8 ʹ����ffmpeg���������д��huffman�༶����㷨���ٶ���������������ģ�����libjpeg
9 ʹ��30���̶�������
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

