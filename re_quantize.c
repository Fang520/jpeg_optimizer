#include "std_quant_table.h"
#include "re_quantize.h"

#define ROUNDED_DIV(a,b) (((a)>=0 ? (a) + ((b)>>1) : (a) - ((b)>>1))/(b))

void prepare_middle_quant_table(jpeg_ctx_t *ctx)
{
	int i, j;
	const uint8_t *new_qt;
	uint8_t *old_qt;
	uint32_t *mid_qt;

	new_qt = std_quant_table[ctx->qscale];
	for (i = 0; i < 3; i++)
	{
		mid_qt = ctx->mid_dqt[i];
		old_qt = ctx->dqt[ctx->qt_index[i]];
		for (j = 1; j < 64; j++)
		{
			mid_qt[j] = ((uint32_t)old_qt[j] << 12) / new_qt[j];
		}
	}
}

void re_quantize(jpeg_ctx_t *ctx, int yuv_index, short mb[])
{
	const uint8_t *dqt, *new_dqt;
	int i, dc, new_dc, new_ac;
	uint32_t *mid_dqt;

	dqt = ctx->dqt[ctx->qt_index[yuv_index]];
	new_dqt = std_quant_table[ctx->qscale];
	mid_dqt = ctx->mid_dqt[yuv_index];

	dc = mb[0] * dqt[0] + ctx->last_dc[yuv_index];
	ctx->last_dc[yuv_index] = dc;

	new_dc = ROUNDED_DIV(dc , new_dqt[0]);
	mb[0] = (short)(new_dc - ctx->new_last_dc[yuv_index]);
	ctx->new_last_dc[yuv_index] = new_dc;

	ctx->zero_num = 0;
	for (i = 63; i >= 1; i--)
	{
		if (mb[i])
		{
			if (mb[i] >= 0)
			{
				new_ac = (2048 + mb[i] * mid_dqt[i]) >> 12;
			}
			else
			{
				new_ac = (2048 - mb[i] * mid_dqt[i]) >> 12;
				new_ac = -new_ac;
			}

			mb[i] = (short)new_ac;
			if (new_ac && !ctx->zero_num)
			{
				ctx->zero_num = i;
			}
		}
	}
}


