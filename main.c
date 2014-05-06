#ifdef _WIN32
#define _CRT_SECURE_NO_DEPRECATE
#endif

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "jpeg_optimizer.h"

int main(int argc, char** argv)
{
	char *filename_in = "d:\\mini2.jpg";
	char *filename_out = "d:\\mini2_opt.jpg";
	int qscale = 8;

	FILE *fp_in, *fp_out;
	uint8_t *buf_in;
	uint8_t *buf_out;
	int ret, len_in, len_out, len_in_act, len_out_act;
	clock_t begin_time, end_time;

	if (argc >= 4)
	{
		filename_in = argv[1];
		filename_out = argv[2];
		qscale = atoi(argv[3]);
	}

	fp_in = fopen(filename_in, "rb");
	if (!fp_in)
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

	if (fread(buf_in, 1, len_in, fp_in) != (size_t)len_in)
	{
		printf("read input file fail\n");
		free(buf_out);
		free(buf_in);
		fclose(fp_in);
		return -1;
	}

	len_in_act = len_in;
	len_out_act = len_out;

	begin_time = clock();

	ret = optimize_jpeg(buf_in, &len_in_act, buf_out, &len_out_act, qscale);
	if (ret != 0)
	{
		printf("optimize jpeg fail\n");
		free(buf_out);
		free(buf_in);
		fclose(fp_in);
		return -1;
	}

	end_time = clock();

	fp_out = fopen(filename_out, "wb");
	if (!fp_out)
	{
		printf("open output file fail, %s\n", filename_out);
		free(buf_out);
		free(buf_in);
		fclose(fp_in);
		return -1;
	}

	if (fwrite(buf_out, 1, len_out_act, fp_out) != (size_t)len_out_act)
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

	printf("time: %d, inbuf left: %d, outbuf left: %d\n", 
		end_time - begin_time, 
		len_in - len_in_act, 
		len_out - len_out_act);
	getchar();

	return 0;
}

