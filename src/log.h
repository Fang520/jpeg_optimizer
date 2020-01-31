#ifndef LOG_H
#define LOG_H

#include <stdio.h>

#define log(fmt, ...) fprintf(stderr, fmt, ##__VA_ARGS__)

#endif
