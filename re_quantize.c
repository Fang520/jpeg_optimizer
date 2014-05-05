#include "std_quant_table.h"
#include "re_quantize.h"

#define ROUNDED_DIV(a,b) (((a)>0 ? (a) + ((b)>>1) : (a) - ((b)>>1))/(b))

void re_quantize(jpeg_ctx_t *ctx, int yuv_index, short mb[])
{
	const uint8_t *dqt, *new_dqt;
	int i, dc, new_dc, ac, new_ac;
	
	dqt = ctx->dqt[ctx->qt_index[yuv_index]];
	new_dqt = std_quant_table[ctx->qscale];

	dc = mb[0] * dqt[0] + ctx->last_dc[yuv_index];
	ctx->last_dc[yuv_index] = dc;

	new_dc = ROUNDED_DIV(dc , new_dqt[0]);
	mb[0] = (short)(new_dc - ctx->new_last_dc[yuv_index]);
	ctx->new_last_dc[yuv_index] = new_dc;

	ctx->zero_num = 0;
	for (i = 63; i >= 1; i--)
	{
		ac = mb[i] * dqt[i];
		if (ac)
		{
			new_ac = ROUNDED_DIV(ac, new_dqt[i]);
			mb[i] = (short)new_ac;
			if (new_ac && !ctx->zero_num)
			{
				ctx->zero_num = i;
			}
		}
	}
}

