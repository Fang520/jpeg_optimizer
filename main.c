#ifdef _WIN32
#define _CRT_SECURE_NO_DEPRECATE
#endif

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "jpeg_optimizer.h"

int main(int argc, char** argv)
{
	char *filename_in = "d:\\6M.jpg";
	char *filename_out = "d:\\6M_opt22.jpg";
	int qscale = 8;

	FILE *fp_in, *fp_out;
	uint8_t *buf_in;
	uint8_t *buf_out;
	int ret, len_in, len_out;
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

	begin_time = clock();

	ret = optimize_jpeg(buf_in, len_in, buf_out, &len_out, qscale);
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

	if (fwrite(buf_out, 1, len_out, fp_out) != (size_t)len_out)
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

	printf("time: %d\n", end_time - begin_time);
	getchar();

	return 0;
}

