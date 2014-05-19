#ifndef JPEG_OPTIMIZER_H
#define JPEG_OPTIMIZER_H

#include <stdint.h>

intptr_t jpeg_optimizer_open(int qscale);
int jpeg_optimizer_run(intptr_t handle, const uint8_t *input, int *input_len, uint8_t *output, int *output_len);
void jpeg_optimizer_close(intptr_t handle);

#endif
