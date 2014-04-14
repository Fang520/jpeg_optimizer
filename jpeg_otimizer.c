#include <stdio.h>
#include "huffman_fast_dec.h"
#include "std_huffman_table.h"

#pragma warning(disable : 4996)

static void build_basic_mjpeg_vlc(VLC vlcs[2][2])
{
	build_vlc(&vlcs[0][0], std_huffman_bits_dc_luminance,
		std_huffman_val_dc, 12, 0);
	build_vlc(&vlcs[0][1], std_huffman_bits_dc_chrominance,
		std_huffman_val_dc, 12, 0);
	build_vlc(&vlcs[1][0], std_huffman_bits_ac_luminance,
		std_huffman_val_ac_luminance, 251, 1);
	build_vlc(&vlcs[1][1], std_huffman_bits_ac_chrominance,
		std_huffman_val_ac_chrominance, 251, 1);
}

int main(int argc, char** argv)
{
	int i;
	VLC *vlc;
	VLC vlcs[2][2];

	build_basic_mjpeg_vlc(vlcs);

	vlc = &vlcs[1][0];
	FILE *fp = fopen("e:\\a.txt", "wb");
	if (fp)
	{
		for (i = 0; i < vlc->table_size; i++)
		{
			fprintf(fp, "%d %d\n", vlc->table[i][0], vlc->table[i][1]);
		}
		fclose(fp);
	}
	return 0;
}