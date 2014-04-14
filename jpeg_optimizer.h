#include <stdint.h>

typedef struct {
	uint8_t len[16];
	uint8_t val[12];
} dht_dc_t;

typedef struct {
	uint8_t len[16];
	uint8_t val[162];
} dht_ac_t;

typedef struct {
	uint8_t *app1_data;
	int app1_len;
	int height;
	int width;
	int restart_interval;
	int qscale;
	dht_dc_t dht_dc[2];
	dht_ac_t dht_ac[2];
	uint8_t dqt[4][64];
	uint8_t rate_h[3];
	uint8_t rate_v[3];
	uint8_t qt_index[3];
	uint8_t ht_dc_index[3];
	uint8_t ht_ac_index[3];
} jpeg_ctx_t;
