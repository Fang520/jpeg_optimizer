#ifndef JPEG_OPTIMIZER_H
#define JPEG_OPTIMIZER_H

#include <stdint.h>

int optimize_jpeg(const uint8_t *input, int *input_len, uint8_t *output, int *output_len, int qscale);

#endif
