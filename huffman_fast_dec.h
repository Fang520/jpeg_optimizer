#include <stdint.h>

#define VLC_TYPE int16_t

typedef struct VLC {
	int bits;
	VLC_TYPE(*table)[2]; ///< code, bits
	int table_size, table_allocated;
} VLC;

typedef struct GetBitContext {
	const uint8_t *buffer, *buffer_end;
	int index;
	int size_in_bits;
	int size_in_bits_plus8;
} GetBitContext;

int build_vlc(VLC *vlc, const uint8_t *bits_table, const uint8_t *val_table, int nb_codes, int is_ac);
int get_vlc(GetBitContext *s, int16_t(*table)[2], int bits, int max_depth);
int get_xbits(GetBitContext *s, int n);