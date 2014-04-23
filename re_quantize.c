#include <math.h>
#include "std_quant_table.h"
#include "re_quantize.h"

int re_quantize(jpeg_ctx_t *ctx, int yuv_index, short mb[])
{
	uint8_t *dqt, *new_dqt;
	int i, dc, new_dc, ac, new_ac;
	
	dqt = ctx->dqt[ctx->qt_index[yuv_index]];
	new_dqt = std_quant_table[ctx->qscale];

	dc = mb[0] * dqt[0] + ctx->last_dc[yuv_index];
	ctx->last_dc[yuv_index] = dc;

	new_dc = round((float)dc / (float)new_dqt[0]);
	mb[0] = new_dc - ctx->new_last_dc[yuv_index];
	ctx->new_last_dc[yuv_index] = new_dc;

	for (i = 1; i < 64; i++)
	{
		ac = mb[i] * dqt[i];
		if (ac)
		{
			new_ac = round((float)ac / (float)new_dqt[i]);
			mb[i] = new_ac;
		}
	}
	return 0;
}