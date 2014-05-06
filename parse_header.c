#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "parse_header.h"

#define MAKEWORD(a, b) ((uint16_t)(((uint8_t)(a)) | ((uint16_t)((uint8_t)(b))) << 8))

#define M_SOI			0xd8
#define M_SOF0			0xc0
#define M_SOF1			0xc1       /* extended sequential, huffman */
#define M_SOF2			0xc2       /* progressive, huffman */
#define M_SOF3			0xc3       /* lossless, huffman */
#define M_SOF5			0xc5       /* differential sequential, huffman */
#define M_SOF6			0xc6       /* differential progressive, huffman */
#define M_SOF7			0xc7       /* differential lossless, huffman */
#define M_JPG			0xc8       /* reserved for JPEG extension */
#define M_SOF9			0xc9       /* extended sequential, arithmetic */
#define M_SOF10			0xca       /* progressive, arithmetic */
#define M_SOF11			0xcb       /* lossless, arithmetic */
#define M_SOF13			0xcd       /* differential sequential, arithmetic */
#define M_SOF14			0xce       /* differential progressive, arithmetic */
#define M_SOF15			0xcf       /* differential lossless, arithmetic */
#define M_SOF48			0xf7
#define M_LSE			0xf8
#define M_RST0			0xd0
#define M_RST1			0xd1
#define M_RST2			0xd2
#define M_RST3			0xd3
#define M_RST4			0xd4
#define M_RST5			0xd5
#define M_RST6			0xd6
#define M_RST7			0xd7
#define M_DHT			0xc4
#define M_EOI			0xd9
#define M_SOS			0xda
#define M_DQT			0xdb
#define M_DRI			0xdd
#define M_APP0			0xe0
#define M_APP1			0xe1

int parse_header(jpeg_ctx_t *ctx, const uint8_t *data, int data_len)
{
	const uint8_t *p, *pt;
	uint8_t n, m;
	int i, len, left;

	p = data;

	if (p[0] == 0xff && p[1] == M_SOI)
		p += 2;
	else
		return ERR_SOI;

	while (p - data < data_len)
	{
		if (p[0] != 0xff)
			return ERR_FORMAT;

		switch (p[1])
		{
		case M_APP0:
			if (memcmp(p + 4, "JFIF", 5) == 0)
			{
				len = MAKEWORD(p[3], p[2]);
				p += len + 2;
				break;
			}
			else
				return ERR_APP0_IDENTIFIER;

		case M_APP1:
			len = MAKEWORD(p[3], p[2]);
			ctx->app1_data = malloc(len + 2);
			if (!ctx->app1_data)
				return ERR_MALLOC;
			memcpy(ctx->app1_data, p, len + 2);
			ctx->app1_len = len + 2;
			p += len + 2;
			break;

		case M_DQT:
			len = MAKEWORD(p[3], p[2]);
			left = len - 2;
			pt = p + 4;
			while (left > 0)
			{
				n = *pt++;
				if (n >> 4 != 0)
					return ERR_DQT_PRECISION;
				for (i = 0; i < 64; i++)
					ctx->dqt[n & 0x0f][i] = *pt++;
				left -= 65;
			}
			p += len + 2;
			break;

		case M_SOF0:
			if (p[4] != 8)
				return ERR_SOF0_PRECISION;
			if (p[9] != 3)
				return ERR_SOF0_COMPONENTS;
			len = MAKEWORD(p[3], p[2]);
			ctx->height = MAKEWORD(p[6], p[5]);
			ctx->width = MAKEWORD(p[8], p[7]);
			pt = p + 10;
			for (i = 0; i < 3; i++)
			{
				n = *pt++;
				m = *pt++;
				ctx->rate_h[n - 1] = m >> 4;
				ctx->rate_v[n - 1] = m & 0x0f;
				ctx->qt_index[n - 1] = *pt++;
			}
			p += len + 2;
			break;

		case M_DHT:
			len = MAKEWORD(p[3], p[2]);
			left = len - 2;
			pt = p + 4;
			while (left > 0)
			{
				uint8_t *l;
				uint8_t *v;
				n = *pt++;
				if (n >> 4 == 0)
				{
					l = ctx->dht_dc[n & 0x0f].len;
					v = ctx->dht_dc[n & 0x0f].val;
				}
				else
				{
					l = ctx->dht_ac[n & 0x0f].len;
					v = ctx->dht_ac[n & 0x0f].val;
				}
				m = 0;
				for (i = 0; i < 16; i++)
				{
					l[i] = *pt++;
					m += l[i];
				}
				for (i = 0; i < m; i++)
					v[i] = *pt++;
				left -= (m + 17);
			}
			p += len + 2;
			break;

		case M_DRI:
			return ERR_DRI_NOTSUPPORT;
			break;

		case M_SOS:
			if (p[4] != 3)
				return ERR_SOS_COMPONENTS;
			len = MAKEWORD(p[3], p[2]);
			pt = p + 5;
			for (i = 0; i < 3; i++)
			{
				n = *pt++;
				m = *pt++;
				ctx->ht_dc_index[n - 1] = m >> 4;
				ctx->ht_ac_index[n - 1] = m & 0x0f;
			}
			p += len + 2;
			return p - data;
			break;

		case M_SOF1:
		case M_SOF2:
		case M_SOF3:
		case M_SOF5:
		case M_SOF6:
		case M_SOF7:
		case M_SOF9:
		case M_SOF10:
		case M_SOF11:
		case M_SOF13:
		case M_SOF14:
		case M_SOF15:
		case M_JPG:
		case M_SOF48:
		case M_LSE:
			return ERR_SOF_NOTSUPPORT;
			break;

		case M_RST0:
		case M_RST1:
		case M_RST2:
		case M_RST3:
		case M_RST4:
		case M_RST5:
		case M_RST6:
		case M_RST7:
			p += 2;
			break;

		case 0xff:
			p++;
			break;

		case M_EOI:
			return ERR_EOI;
			break;

		default:
			len = MAKEWORD(p[3], p[2]);
			p += len + 2;
		}
	}

	return ERR_SOS_NOTFOUND;
}

