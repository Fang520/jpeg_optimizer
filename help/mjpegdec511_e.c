# 1 "libavcodec/mjpegdec.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "libavcodec/mjpegdec.c"
# 34 "libavcodec/mjpegdec.c"
# 1 "/usr/include/assert.h" 1 3 4
# 36 "/usr/include/assert.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 329 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 313 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 314 "/usr/include/sys/cdefs.h" 2 3 4
# 330 "/usr/include/features.h" 2 3 4
# 352 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4




# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 2 3 4
# 353 "/usr/include/features.h" 2 3 4
# 37 "/usr/include/assert.h" 2 3 4
# 65 "/usr/include/assert.h" 3 4



extern void __assert_fail (__const char *__assertion, __const char *__file,
                           unsigned int __line, __const char *__function)
__attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, __const char *__file,
                                  unsigned int __line,
                                  __const char *__function)
__attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
__attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



# 35 "libavcodec/mjpegdec.c" 2

# 1 "libavcodec/avcodec.h" 1
# 29 "libavcodec/avcodec.h"
# 1 "/usr/include/errno.h" 1 3 4
# 32 "/usr/include/errno.h" 3 4




# 1 "/usr/include/bits/errno.h" 1 3 4
# 25 "/usr/include/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4



# 1 "/usr/include/asm/errno.h" 1 3 4




# 1 "/usr/include/asm-x86_64/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 5 "/usr/include/asm-x86_64/errno.h" 2 3 4
# 6 "/usr/include/asm/errno.h" 2 3 4
# 5 "/usr/include/linux/errno.h" 2 3 4
# 26 "/usr/include/bits/errno.h" 2 3 4
# 43 "/usr/include/bits/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 37 "/usr/include/errno.h" 2 3 4
# 59 "/usr/include/errno.h" 3 4

# 30 "libavcodec/avcodec.h" 2
# 1 "./libavutil/avutil.h" 1
# 59 "./libavutil/avutil.h"
unsigned avutil_version(void);




const char *avutil_configuration(void);




const char *avutil_license(void);

enum AVMediaType
{
    AVMEDIA_TYPE_UNKNOWN = -1,
    AVMEDIA_TYPE_VIDEO,
    AVMEDIA_TYPE_AUDIO,
    AVMEDIA_TYPE_DATA,
    AVMEDIA_TYPE_SUBTITLE,
    AVMEDIA_TYPE_ATTACHMENT,
    AVMEDIA_TYPE_NB
};

# 1 "./libavutil/common.h" 1
# 29 "./libavutil/common.h"
# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 214 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 32 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 134 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 135 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct
{
    int __val[2];
} __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 29 "/usr/include/ctype.h" 2 3 4


# 41 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 42 "/usr/include/ctype.h" 2 3 4






enum
{
    _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
    _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
    _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
    _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
    _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
    _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
    _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
    _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
    _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
    _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
    _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
    _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 81 "/usr/include/ctype.h" 3 4
extern __const unsigned short int **__ctype_b_loc (void)
__attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc (void)
__attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc (void)
__attribute__ ((__const));
# 96 "/usr/include/ctype.h" 3 4






extern int isalnum (int) __attribute__ ((__nothrow__));
extern int isalpha (int) __attribute__ ((__nothrow__));
extern int iscntrl (int) __attribute__ ((__nothrow__));
extern int isdigit (int) __attribute__ ((__nothrow__));
extern int islower (int) __attribute__ ((__nothrow__));
extern int isgraph (int) __attribute__ ((__nothrow__));
extern int isprint (int) __attribute__ ((__nothrow__));
extern int ispunct (int) __attribute__ ((__nothrow__));
extern int isspace (int) __attribute__ ((__nothrow__));
extern int isupper (int) __attribute__ ((__nothrow__));
extern int isxdigit (int) __attribute__ ((__nothrow__));



extern int tolower (int __c) __attribute__ ((__nothrow__));


extern int toupper (int __c) __attribute__ ((__nothrow__));


# 142 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__));



extern int toascii (int __c) __attribute__ ((__nothrow__));



extern int _toupper (int) __attribute__ ((__nothrow__));
extern int _tolower (int) __attribute__ ((__nothrow__));
# 323 "/usr/include/ctype.h" 3 4

# 30 "./libavutil/common.h" 2
# 1 "/usr/include/errno.h" 1 3 4
# 31 "./libavutil/common.h" 2
# 1 "/usr/include/inttypes.h" 1 3 4
# 28 "/usr/include/inttypes.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 27 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 37 "/usr/include/stdint.h" 3 4
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 66 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 91 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 104 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 120 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 135 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 29 "/usr/include/inttypes.h" 2 3 4






typedef int __gwchar_t;
# 274 "/usr/include/inttypes.h" 3 4





typedef struct
{
    long int quot;
    long int rem;
} imaxdiv_t;
# 298 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
__attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern intmax_t strtoimax (__const char *__restrict __nptr,
                           char **__restrict __endptr, int __base) __attribute__ ((__nothrow__));


extern uintmax_t strtoumax (__const char *__restrict __nptr,
                            char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__));


extern intmax_t wcstoimax (__const __gwchar_t *__restrict __nptr,
                           __gwchar_t **__restrict __endptr, int __base)
__attribute__ ((__nothrow__));


extern uintmax_t wcstoumax (__const __gwchar_t *__restrict __nptr,
                            __gwchar_t ** __restrict __endptr, int __base)
__attribute__ ((__nothrow__));
# 459 "/usr/include/inttypes.h" 3 4

# 32 "./libavutil/common.h" 2
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h" 1 3 4
# 11 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h" 1 3 4
# 122 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 145 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 153 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 36 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 37 "/usr/include/bits/local_lim.h" 2 3 4
# 154 "/usr/include/bits/posix1_lim.h" 2 3 4
# 146 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 150 "/usr/include/limits.h" 2 3 4
# 123 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h" 2 3 4
# 12 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h" 2 3 4
# 33 "./libavutil/common.h" 2
# 1 "/usr/include/math.h" 1 3 4
# 30 "/usr/include/math.h" 3 4




# 1 "/usr/include/bits/huge_val.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4
# 47 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathdef.h" 1 3 4
# 48 "/usr/include/math.h" 2 3 4
# 71 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern double acos (double __x) __attribute__ ((__nothrow__));
extern double __acos (double __x) __attribute__ ((__nothrow__));

extern double asin (double __x) __attribute__ ((__nothrow__));
extern double __asin (double __x) __attribute__ ((__nothrow__));

extern double atan (double __x) __attribute__ ((__nothrow__));
extern double __atan (double __x) __attribute__ ((__nothrow__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__));
extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__));


extern double cos (double __x) __attribute__ ((__nothrow__));
extern double __cos (double __x) __attribute__ ((__nothrow__));

extern double sin (double __x) __attribute__ ((__nothrow__));
extern double __sin (double __x) __attribute__ ((__nothrow__));

extern double tan (double __x) __attribute__ ((__nothrow__));
extern double __tan (double __x) __attribute__ ((__nothrow__));




extern double cosh (double __x) __attribute__ ((__nothrow__));
extern double __cosh (double __x) __attribute__ ((__nothrow__));

extern double sinh (double __x) __attribute__ ((__nothrow__));
extern double __sinh (double __x) __attribute__ ((__nothrow__));

extern double tanh (double __x) __attribute__ ((__nothrow__));
extern double __tanh (double __x) __attribute__ ((__nothrow__));

# 87 "/usr/include/bits/mathcalls.h" 3 4


extern double acosh (double __x) __attribute__ ((__nothrow__));
extern double __acosh (double __x) __attribute__ ((__nothrow__));

extern double asinh (double __x) __attribute__ ((__nothrow__));
extern double __asinh (double __x) __attribute__ ((__nothrow__));

extern double atanh (double __x) __attribute__ ((__nothrow__));
extern double __atanh (double __x) __attribute__ ((__nothrow__));







extern double exp (double __x) __attribute__ ((__nothrow__));
extern double __exp (double __x) __attribute__ ((__nothrow__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__));
extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__));
extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__));


extern double log (double __x) __attribute__ ((__nothrow__));
extern double __log (double __x) __attribute__ ((__nothrow__));


extern double log10 (double __x) __attribute__ ((__nothrow__));
extern double __log10 (double __x) __attribute__ ((__nothrow__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__));
extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__));

# 127 "/usr/include/bits/mathcalls.h" 3 4


extern double expm1 (double __x) __attribute__ ((__nothrow__));
extern double __expm1 (double __x) __attribute__ ((__nothrow__));


extern double log1p (double __x) __attribute__ ((__nothrow__));
extern double __log1p (double __x) __attribute__ ((__nothrow__));


extern double logb (double __x) __attribute__ ((__nothrow__));
extern double __logb (double __x) __attribute__ ((__nothrow__));

# 152 "/usr/include/bits/mathcalls.h" 3 4


extern double pow (double __x, double __y) __attribute__ ((__nothrow__));
extern double __pow (double __x, double __y) __attribute__ ((__nothrow__));


extern double sqrt (double __x) __attribute__ ((__nothrow__));
extern double __sqrt (double __x) __attribute__ ((__nothrow__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__));
extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__));






extern double cbrt (double __x) __attribute__ ((__nothrow__));
extern double __cbrt (double __x) __attribute__ ((__nothrow__));








extern double ceil (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __ceil (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __fabs (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __floor (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__));
extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__));




extern int __isinf (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinf (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finite (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__));
extern double __drem (double __x, double __y) __attribute__ ((__nothrow__));



extern double significand (double __x) __attribute__ ((__nothrow__));
extern double __significand (double __x) __attribute__ ((__nothrow__));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

# 231 "/usr/include/bits/mathcalls.h" 3 4
extern int __isnan (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnan (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double j0 (double) __attribute__ ((__nothrow__));
extern double __j0 (double) __attribute__ ((__nothrow__));
extern double j1 (double) __attribute__ ((__nothrow__));
extern double __j1 (double) __attribute__ ((__nothrow__));
extern double jn (int, double) __attribute__ ((__nothrow__));
extern double __jn (int, double) __attribute__ ((__nothrow__));
extern double y0 (double) __attribute__ ((__nothrow__));
extern double __y0 (double) __attribute__ ((__nothrow__));
extern double y1 (double) __attribute__ ((__nothrow__));
extern double __y1 (double) __attribute__ ((__nothrow__));
extern double yn (int, double) __attribute__ ((__nothrow__));
extern double __yn (int, double) __attribute__ ((__nothrow__));






extern double erf (double) __attribute__ ((__nothrow__));
extern double __erf (double) __attribute__ ((__nothrow__));
extern double erfc (double) __attribute__ ((__nothrow__));
extern double __erfc (double) __attribute__ ((__nothrow__));
extern double lgamma (double) __attribute__ ((__nothrow__));
extern double __lgamma (double) __attribute__ ((__nothrow__));

# 265 "/usr/include/bits/mathcalls.h" 3 4
extern double gamma (double) __attribute__ ((__nothrow__));
extern double __gamma (double) __attribute__ ((__nothrow__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__));
extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__));







extern double rint (double __x) __attribute__ ((__nothrow__));
extern double __rint (double __x) __attribute__ ((__nothrow__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern double remainder (double __x, double __y) __attribute__ ((__nothrow__));
extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__));
extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__));



extern int ilogb (double __x) __attribute__ ((__nothrow__));
extern int __ilogb (double __x) __attribute__ ((__nothrow__));
# 359 "/usr/include/bits/mathcalls.h" 3 4





extern double scalb (double __x, double __n) __attribute__ ((__nothrow__));
extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__));
# 72 "/usr/include/math.h" 2 3 4
# 94 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern float acosf (float __x) __attribute__ ((__nothrow__));
extern float __acosf (float __x) __attribute__ ((__nothrow__));

extern float asinf (float __x) __attribute__ ((__nothrow__));
extern float __asinf (float __x) __attribute__ ((__nothrow__));

extern float atanf (float __x) __attribute__ ((__nothrow__));
extern float __atanf (float __x) __attribute__ ((__nothrow__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__));
extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__));


extern float cosf (float __x) __attribute__ ((__nothrow__));
extern float __cosf (float __x) __attribute__ ((__nothrow__));

extern float sinf (float __x) __attribute__ ((__nothrow__));
extern float __sinf (float __x) __attribute__ ((__nothrow__));

extern float tanf (float __x) __attribute__ ((__nothrow__));
extern float __tanf (float __x) __attribute__ ((__nothrow__));




extern float coshf (float __x) __attribute__ ((__nothrow__));
extern float __coshf (float __x) __attribute__ ((__nothrow__));

extern float sinhf (float __x) __attribute__ ((__nothrow__));
extern float __sinhf (float __x) __attribute__ ((__nothrow__));

extern float tanhf (float __x) __attribute__ ((__nothrow__));
extern float __tanhf (float __x) __attribute__ ((__nothrow__));

# 87 "/usr/include/bits/mathcalls.h" 3 4


extern float acoshf (float __x) __attribute__ ((__nothrow__));
extern float __acoshf (float __x) __attribute__ ((__nothrow__));

extern float asinhf (float __x) __attribute__ ((__nothrow__));
extern float __asinhf (float __x) __attribute__ ((__nothrow__));

extern float atanhf (float __x) __attribute__ ((__nothrow__));
extern float __atanhf (float __x) __attribute__ ((__nothrow__));







extern float expf (float __x) __attribute__ ((__nothrow__));
extern float __expf (float __x) __attribute__ ((__nothrow__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__));
extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__));
extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__));


extern float logf (float __x) __attribute__ ((__nothrow__));
extern float __logf (float __x) __attribute__ ((__nothrow__));


extern float log10f (float __x) __attribute__ ((__nothrow__));
extern float __log10f (float __x) __attribute__ ((__nothrow__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__));
extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__));

# 127 "/usr/include/bits/mathcalls.h" 3 4


extern float expm1f (float __x) __attribute__ ((__nothrow__));
extern float __expm1f (float __x) __attribute__ ((__nothrow__));


extern float log1pf (float __x) __attribute__ ((__nothrow__));
extern float __log1pf (float __x) __attribute__ ((__nothrow__));


extern float logbf (float __x) __attribute__ ((__nothrow__));
extern float __logbf (float __x) __attribute__ ((__nothrow__));

# 152 "/usr/include/bits/mathcalls.h" 3 4


extern float powf (float __x, float __y) __attribute__ ((__nothrow__));
extern float __powf (float __x, float __y) __attribute__ ((__nothrow__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__));
extern float __sqrtf (float __x) __attribute__ ((__nothrow__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__));
extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__));
extern float __cbrtf (float __x) __attribute__ ((__nothrow__));








extern float ceilf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __ceilf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __fabsf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __floorf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__));
extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__));




extern int __isinff (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinff (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finitef (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__));
extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__));



extern float significandf (float __x) __attribute__ ((__nothrow__));
extern float __significandf (float __x) __attribute__ ((__nothrow__));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

# 231 "/usr/include/bits/mathcalls.h" 3 4
extern int __isnanf (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnanf (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float j0f (float) __attribute__ ((__nothrow__));
extern float __j0f (float) __attribute__ ((__nothrow__));
extern float j1f (float) __attribute__ ((__nothrow__));
extern float __j1f (float) __attribute__ ((__nothrow__));
extern float jnf (int, float) __attribute__ ((__nothrow__));
extern float __jnf (int, float) __attribute__ ((__nothrow__));
extern float y0f (float) __attribute__ ((__nothrow__));
extern float __y0f (float) __attribute__ ((__nothrow__));
extern float y1f (float) __attribute__ ((__nothrow__));
extern float __y1f (float) __attribute__ ((__nothrow__));
extern float ynf (int, float) __attribute__ ((__nothrow__));
extern float __ynf (int, float) __attribute__ ((__nothrow__));






extern float erff (float) __attribute__ ((__nothrow__));
extern float __erff (float) __attribute__ ((__nothrow__));
extern float erfcf (float) __attribute__ ((__nothrow__));
extern float __erfcf (float) __attribute__ ((__nothrow__));
extern float lgammaf (float) __attribute__ ((__nothrow__));
extern float __lgammaf (float) __attribute__ ((__nothrow__));

# 265 "/usr/include/bits/mathcalls.h" 3 4
extern float gammaf (float) __attribute__ ((__nothrow__));
extern float __gammaf (float) __attribute__ ((__nothrow__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__));
extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__));







extern float rintf (float __x) __attribute__ ((__nothrow__));
extern float __rintf (float __x) __attribute__ ((__nothrow__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__));
extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__));
extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__));
extern int __ilogbf (float __x) __attribute__ ((__nothrow__));
# 359 "/usr/include/bits/mathcalls.h" 3 4





extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__));
extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__));
# 95 "/usr/include/math.h" 2 3 4
# 141 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) __attribute__ ((__nothrow__));
extern long double __acosl (long double __x) __attribute__ ((__nothrow__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__));
extern long double __asinl (long double __x) __attribute__ ((__nothrow__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__));
extern long double __atanl (long double __x) __attribute__ ((__nothrow__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__));
extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__));


extern long double cosl (long double __x) __attribute__ ((__nothrow__));
extern long double __cosl (long double __x) __attribute__ ((__nothrow__));

extern long double sinl (long double __x) __attribute__ ((__nothrow__));
extern long double __sinl (long double __x) __attribute__ ((__nothrow__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__));
extern long double __tanl (long double __x) __attribute__ ((__nothrow__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__));
extern long double __coshl (long double __x) __attribute__ ((__nothrow__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__));
extern long double __sinhl (long double __x) __attribute__ ((__nothrow__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__));
extern long double __tanhl (long double __x) __attribute__ ((__nothrow__));

# 87 "/usr/include/bits/mathcalls.h" 3 4


extern long double acoshl (long double __x) __attribute__ ((__nothrow__));
extern long double __acoshl (long double __x) __attribute__ ((__nothrow__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__));
extern long double __asinhl (long double __x) __attribute__ ((__nothrow__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__));
extern long double __atanhl (long double __x) __attribute__ ((__nothrow__));







extern long double expl (long double __x) __attribute__ ((__nothrow__));
extern long double __expl (long double __x) __attribute__ ((__nothrow__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__));
extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__));
extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__));


extern long double logl (long double __x) __attribute__ ((__nothrow__));
extern long double __logl (long double __x) __attribute__ ((__nothrow__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__));
extern long double __log10l (long double __x) __attribute__ ((__nothrow__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__));
extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__));

# 127 "/usr/include/bits/mathcalls.h" 3 4


extern long double expm1l (long double __x) __attribute__ ((__nothrow__));
extern long double __expm1l (long double __x) __attribute__ ((__nothrow__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__));
extern long double __log1pl (long double __x) __attribute__ ((__nothrow__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__));
extern long double __logbl (long double __x) __attribute__ ((__nothrow__));

# 152 "/usr/include/bits/mathcalls.h" 3 4


extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__));
extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__));
extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__));








extern long double ceill (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __ceill (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __fabsl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __floorl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinfl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finitel (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__));
extern long double __significandl (long double __x) __attribute__ ((__nothrow__));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

# 231 "/usr/include/bits/mathcalls.h" 3 4
extern int __isnanl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnanl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double j0l (long double) __attribute__ ((__nothrow__));
extern long double __j0l (long double) __attribute__ ((__nothrow__));
extern long double j1l (long double) __attribute__ ((__nothrow__));
extern long double __j1l (long double) __attribute__ ((__nothrow__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__));
extern long double __jnl (int, long double) __attribute__ ((__nothrow__));
extern long double y0l (long double) __attribute__ ((__nothrow__));
extern long double __y0l (long double) __attribute__ ((__nothrow__));
extern long double y1l (long double) __attribute__ ((__nothrow__));
extern long double __y1l (long double) __attribute__ ((__nothrow__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__));
extern long double __ynl (int, long double) __attribute__ ((__nothrow__));






extern long double erfl (long double) __attribute__ ((__nothrow__));
extern long double __erfl (long double) __attribute__ ((__nothrow__));
extern long double erfcl (long double) __attribute__ ((__nothrow__));
extern long double __erfcl (long double) __attribute__ ((__nothrow__));
extern long double lgammal (long double) __attribute__ ((__nothrow__));
extern long double __lgammal (long double) __attribute__ ((__nothrow__));

# 265 "/usr/include/bits/mathcalls.h" 3 4
extern long double gammal (long double) __attribute__ ((__nothrow__));
extern long double __gammal (long double) __attribute__ ((__nothrow__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__));
extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__));
extern long double __rintl (long double __x) __attribute__ ((__nothrow__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__));
extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__));
extern int __ilogbl (long double __x) __attribute__ ((__nothrow__));
# 359 "/usr/include/bits/mathcalls.h" 3 4





extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__));
extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__));
# 142 "/usr/include/math.h" 2 3 4
# 157 "/usr/include/math.h" 3 4
extern int signgam;
# 284 "/usr/include/math.h" 3 4
typedef enum
{
    _IEEE_ = -1,
    _SVID_,
    _XOPEN_,
    _POSIX_,
    _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 309 "/usr/include/math.h" 3 4
struct exception

{
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};




extern int matherr (struct exception *__exc);
# 465 "/usr/include/math.h" 3 4

# 34 "./libavutil/common.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4


typedef struct _IO_FILE FILE;





# 62 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 72 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 14 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 326 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 3 4
typedef int wchar_t;
# 355 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 15 "/usr/include/_G_config.h" 2 3 4
# 24 "/usr/include/_G_config.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 48 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 49 "/usr/include/wchar.h" 2 3 4
# 76 "/usr/include/wchar.h" 3 4
typedef struct
{
    int __count;
    union
    {
        wint_t __wch;
        char __wchb[4];
    } __value;
} __mbstate_t;
# 25 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
    __off_t __pos;
    __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
    __off64_t __pos;
    __mbstate_t __state;
} _G_fpos64_t;
# 44 "/usr/include/_G_config.h" 3 4
# 1 "/usr/include/gconv.h" 1 3 4
# 28 "/usr/include/gconv.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 48 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 49 "/usr/include/wchar.h" 2 3 4
# 29 "/usr/include/gconv.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 32 "/usr/include/gconv.h" 2 3 4





enum
{
    __GCONV_OK = 0,
    __GCONV_NOCONV,
    __GCONV_NODB,
    __GCONV_NOMEM,

    __GCONV_EMPTY_INPUT,
    __GCONV_FULL_OUTPUT,
    __GCONV_ILLEGAL_INPUT,
    __GCONV_INCOMPLETE_INPUT,

    __GCONV_ILLEGAL_DESCRIPTOR,
    __GCONV_INTERNAL_ERROR
};



enum
{
    __GCONV_IS_LAST = 0x0001,
    __GCONV_IGNORE_ERRORS = 0x0002
};



struct __gconv_step;
struct __gconv_step_data;
struct __gconv_loaded_object;
struct __gconv_trans_data;



typedef int (*__gconv_fct) (struct __gconv_step *, struct __gconv_step_data *,
                            __const unsigned char **, __const unsigned char *,
                            unsigned char **, size_t *, int, int);


typedef wint_t (*__gconv_btowc_fct) (struct __gconv_step *, unsigned char);


typedef int (*__gconv_init_fct) (struct __gconv_step *);
typedef void (*__gconv_end_fct) (struct __gconv_step *);



typedef int (*__gconv_trans_fct) (struct __gconv_step *,
                                  struct __gconv_step_data *, void *,
                                  __const unsigned char *,
                                  __const unsigned char **,
                                  __const unsigned char *, unsigned char **,
                                  size_t *);


typedef int (*__gconv_trans_context_fct) (void *, __const unsigned char *,
        __const unsigned char *,
        unsigned char *, unsigned char *);


typedef int (*__gconv_trans_query_fct) (__const char *, __const char ***,
                                        size_t *);


typedef int (*__gconv_trans_init_fct) (void **, const char *);
typedef void (*__gconv_trans_end_fct) (void *);

struct __gconv_trans_data
{

    __gconv_trans_fct __trans_fct;
    __gconv_trans_context_fct __trans_context_fct;
    __gconv_trans_end_fct __trans_end_fct;
    void *__data;
    struct __gconv_trans_data *__next;
};



struct __gconv_step
{
    struct __gconv_loaded_object *__shlib_handle;
    __const char *__modname;

    int __counter;

    char *__from_name;
    char *__to_name;

    __gconv_fct __fct;
    __gconv_btowc_fct __btowc_fct;
    __gconv_init_fct __init_fct;
    __gconv_end_fct __end_fct;



    int __min_needed_from;
    int __max_needed_from;
    int __min_needed_to;
    int __max_needed_to;


    int __stateful;

    void *__data;
};



struct __gconv_step_data
{
    unsigned char *__outbuf;
    unsigned char *__outbufend;



    int __flags;



    int __invocation_counter;



    int __internal_use;

    __mbstate_t *__statep;
    __mbstate_t __state;



    struct __gconv_trans_data *__trans;
};



typedef struct __gconv_info
{
    size_t __nsteps;
    struct __gconv_step *__steps;
    __extension__ struct __gconv_step_data __data [];
} *__gconv_t;
# 45 "/usr/include/_G_config.h" 2 3 4
typedef union
{
    struct __gconv_info __cd;
    struct
    {
        struct __gconv_info __cd;
        struct __gconv_step_data __data;
    } __combined;
} _G_iconv_t;

typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h" 1 3 4
# 43 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 167 "/usr/include/libio.h" 3 4
struct _IO_jump_t;
struct _IO_FILE;
# 177 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker
{
    struct _IO_marker *_next;
    struct _IO_FILE *_sbuf;



    int _pos;
# 200 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
    __codecvt_ok,
    __codecvt_partial,
    __codecvt_error,
    __codecvt_noconv
};
# 268 "/usr/include/libio.h" 3 4
struct _IO_FILE
{
    int _flags;




    char* _IO_read_ptr;
    char* _IO_read_end;
    char* _IO_read_base;
    char* _IO_write_base;
    char* _IO_write_ptr;
    char* _IO_write_end;
    char* _IO_buf_base;
    char* _IO_buf_end;

    char *_IO_save_base;
    char *_IO_backup_base;
    char *_IO_save_end;

    struct _IO_marker *_markers;

    struct _IO_FILE *_chain;

    int _fileno;



    int _flags2;

    __off_t _old_offset;



    unsigned short _cur_column;
    signed char _vtable_offset;
    char _shortbuf[1];



    _IO_lock_t *_lock;
# 316 "/usr/include/libio.h" 3 4
    __off64_t _offset;
# 325 "/usr/include/libio.h" 3 4
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    size_t __pad5;

    int _mode;

    char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 361 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
                                 size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 413 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern wint_t __wunderflow (_IO_FILE *);
extern wint_t __wuflow (_IO_FILE *);
extern wint_t __woverflow (_IO_FILE *, wint_t);
# 451 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__));
# 481 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
                        __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
                         __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__));
# 73 "/usr/include/stdio.h" 2 3 4
# 86 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;




# 138 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 139 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;









extern int remove (__const char *__filename) __attribute__ ((__nothrow__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__));














extern FILE *tmpfile (void);
# 185 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__));





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__));
# 203 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
__attribute__ ((__nothrow__)) __attribute__ ((__malloc__));








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 228 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 242 "/usr/include/stdio.h" 3 4






extern FILE *fopen (__const char *__restrict __filename,
                    __const char *__restrict __modes);




extern FILE *freopen (__const char *__restrict __filename,
                      __const char *__restrict __modes,
                      FILE *__restrict __stream);
# 269 "/usr/include/stdio.h" 3 4

# 280 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__));
# 300 "/usr/include/stdio.h" 3 4



extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
                    int __modes, size_t __n) __attribute__ ((__nothrow__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
                       size_t __size) __attribute__ ((__nothrow__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__));








extern int fprintf (FILE *__restrict __stream,
                    __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
                    __const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
                     __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
                     __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
                     __const char *__restrict __format, ...)
__attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
                      __const char *__restrict __format, __gnuc_va_list __arg)
__attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 394 "/usr/include/stdio.h" 3 4





extern int fscanf (FILE *__restrict __stream,
                   __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
                   __const char *__restrict __format, ...) __attribute__ ((__nothrow__));

# 436 "/usr/include/stdio.h" 3 4





extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 460 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 471 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 504 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
;






extern char *gets (char *__s) ;

# 585 "/usr/include/stdio.h" 3 4





extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
                     size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
                      size_t __n, FILE *__restrict __s) ;

# 638 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
                              size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
                               size_t __n, FILE *__restrict __stream) ;








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 674 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 693 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 716 "/usr/include/stdio.h" 3 4

# 725 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;








extern void perror (__const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];
# 755 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
# 774 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
# 814 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__));
# 844 "/usr/include/stdio.h" 3 4

# 35 "./libavutil/common.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4


# 96 "/usr/include/stdlib.h" 3 4


typedef struct
{
    int quot;
    int rem;
} div_t;



typedef struct
{
    long int quot;
    long int rem;
} ldiv_t;



# 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__)) ;




extern double atof (__const char *__nptr)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
                      char **__restrict __endptr)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

# 182 "/usr/include/stdlib.h" 3 4


extern long int strtol (__const char *__restrict __nptr,
                        char **__restrict __endptr, int __base)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
                                  char **__restrict __endptr, int __base)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
                             char **__restrict __endptr, int __base)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
                                       char **__restrict __endptr, int __base)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
                              char **__restrict __endptr, int __base)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
                                        char **__restrict __endptr, int __base)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

# 279 "/usr/include/stdlib.h" 3 4
extern double __strtod_internal (__const char *__restrict __nptr,
                                 char **__restrict __endptr, int __group)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern float __strtof_internal (__const char *__restrict __nptr,
                                char **__restrict __endptr, int __group)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern long double __strtold_internal (__const char *__restrict __nptr,
                                       char **__restrict __endptr,
                                       int __group)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern long int __strtol_internal (__const char *__restrict __nptr,
                                   char **__restrict __endptr,
                                   int __base, int __group)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern unsigned long int __strtoul_internal (__const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, int __group)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int __strtoll_internal (__const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, int __group)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



__extension__
extern unsigned long long int __strtoull_internal (__const char *
        __restrict __nptr,
        char **__restrict __endptr,
        int __base, int __group)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 429 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__)) ;


extern long int a64l (__const char *__s)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 29 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 62 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 100 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;




typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 75 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 93 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 105 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/sys/types.h" 2 3 4
# 147 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 201 "/usr/include/sys/types.h" 3 4
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 220 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 23 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
{
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 35 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 121 "/usr/include/time.h" 3 4
struct timespec
{
    __time_t tv_sec;
    long int tv_nsec;
};
# 45 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 69 "/usr/include/bits/time.h" 3 4
struct timeval
{
    __time_t tv_sec;
    __suseconds_t tv_usec;
};
# 47 "/usr/include/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3 4
typedef struct
{






    __fd_mask __fds_bits[1024 / (8 * sizeof (__fd_mask))];


} fd_set;






typedef __fd_mask fd_mask;
# 99 "/usr/include/sys/select.h" 3 4

# 109 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
                   fd_set *__restrict __writefds,
                   fd_set *__restrict __exceptfds,
                   struct timeval *__restrict __timeout);
# 121 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
                    fd_set *__restrict __writefds,
                    fd_set *__restrict __exceptfds,
                    const struct timespec *__restrict __timeout,
                    const __sigset_t *__restrict __sigmask);



# 221 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 29 "/usr/include/sys/sysmacros.h" 3 4
__extension__
extern __inline unsigned int gnu_dev_major (unsigned long long int __dev)
__attribute__ ((__nothrow__));
__extension__
extern __inline unsigned int gnu_dev_minor (unsigned long long int __dev)
__attribute__ ((__nothrow__));
__extension__
extern __inline unsigned long long int gnu_dev_makedev (unsigned int __major,
        unsigned int __minor)
__attribute__ ((__nothrow__));


__extension__ extern __inline unsigned int
__attribute__ ((__nothrow__)) gnu_dev_major (unsigned long long int __dev)
{
    return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline unsigned int
__attribute__ ((__nothrow__)) gnu_dev_minor (unsigned long long int __dev)
{
    return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline unsigned long long int
__attribute__ ((__nothrow__)) gnu_dev_makedev (unsigned int __major, unsigned int __minor)
{
    return ((__minor & 0xff) | ((__major & 0xfff) << 8)
            | (((unsigned long long int) (__minor & ~0xff)) << 12)
            | (((unsigned long long int) (__major & ~0xfff)) << 32));
}
# 224 "/usr/include/sys/types.h" 2 3 4
# 235 "/usr/include/sys/types.h" 3 4
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 50 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
    char __size[56];
    long int __align;
} pthread_attr_t;



typedef struct __pthread_internal_list
{
    struct __pthread_internal_list *__prev;
    struct __pthread_internal_list *__next;
} __pthread_list_t;
# 76 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
    struct __pthread_mutex_s
    {
        int __lock;
        unsigned int __count;
        int __owner;

        unsigned int __nusers;



        int __kind;

        int __spins;
        __pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3 4
    } __data;
    char __size[40];
    long int __align;
} pthread_mutex_t;

typedef union
{
    char __size[4];
    int __align;
} pthread_mutexattr_t;




typedef union
{
    struct
    {
        int __lock;
        unsigned int __futex;
        __extension__ unsigned long long int __total_seq;
        __extension__ unsigned long long int __wakeup_seq;
        __extension__ unsigned long long int __woken_seq;
        void *__mutex;
        unsigned int __nwaiters;
        unsigned int __broadcast_seq;
    } __data;
    char __size[48];
    __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
    char __size[4];
    int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

    struct
    {
        int __lock;
        unsigned int __nr_readers;
        unsigned int __readers_wakeup;
        unsigned int __writer_wakeup;
        unsigned int __nr_readers_queued;
        unsigned int __nr_writers_queued;
        int __writer;
        int __shared;
        unsigned long int __pad1;
        unsigned long int __pad2;


        unsigned int __flags;
    } __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3 4
    char __size[56];
    long int __align;
} pthread_rwlock_t;

typedef union
{
    char __size[8];
    long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
    char __size[32];
    long int __align;
} pthread_barrier_t;

typedef union
{
    char __size[4];
    int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/sys/types.h" 2 3 4



# 439 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__));





extern char *initstate (unsigned int __seed, char *__statebuf,
                        size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







struct random_data
{
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
};

extern int random_r (struct random_data *__restrict __buf,
                     int32_t *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
                        size_t __statelen,
                        struct random_data *__restrict __buf)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
                       struct random_data *__restrict __buf)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__));







extern double drand48 (void) __attribute__ ((__nothrow__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__));
extern long int nrand48 (unsigned short int __xsubi[3])
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__));
extern long int jrand48 (unsigned short int __xsubi[3])
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
{
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
};


extern int drand48_r (struct drand48_data *__restrict __buffer,
                      double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
                      struct drand48_data *__restrict __buffer,
                      double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
                      long int *__restrict __result)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
                      struct drand48_data *__restrict __buffer,
                      long int *__restrict __result)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
                      long int *__restrict __result)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
                      struct drand48_data *__restrict __buffer,
                      long int *__restrict __result)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
                     struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
                      struct drand48_data *__buffer)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
__attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;







extern void *realloc (void *__ptr, size_t __size)
__attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__));



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__));






# 613 "/usr/include/stdlib.h" 2 3 4




extern void *valloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));

# 658 "/usr/include/stdlib.h" 3 4


extern char *getenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) __attribute__ ((__nothrow__));






extern int clearenv (void) __attribute__ ((__nothrow__));
# 698 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 709 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 729 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;








extern int system (__const char *__command) ;

# 756 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
                       char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);









extern void *bsearch (__const void *__key, __const void *__base,
                      size_t __nmemb, size_t __size, __compar_fn_t __compar)
__attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
                   __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));



extern int abs (int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;












extern div_t div (int __numer, int __denom)
__attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
__attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;

# 821 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
                   int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
                   int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
                    int *__restrict __decpt, int *__restrict __sign)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
                    int *__restrict __decpt, int *__restrict __sign)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
                   int *__restrict __sign, char *__restrict __buf,
                   size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
                   int *__restrict __sign, char *__restrict __buf,
                   size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
                    int *__restrict __decpt, int *__restrict __sign,
                    char *__restrict __buf, size_t __len)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
                    int *__restrict __decpt, int *__restrict __sign,
                    char *__restrict __buf, size_t __len)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int mbtowc (wchar_t *__restrict __pwc,
                   __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__)) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
                        __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));

extern size_t wcstombs (char *__restrict __s,
                        __const wchar_t *__restrict __pwcs, size_t __n)
__attribute__ ((__nothrow__));








extern int rpmatch (__const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 926 "/usr/include/stdlib.h" 3 4
extern int posix_openpt (int __oflag) ;
# 961 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 977 "/usr/include/stdlib.h" 3 4

# 36 "./libavutil/common.h" 2
# 1 "/usr/include/string.h" 1 3 4
# 28 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4




extern void *memcpy (void *__restrict __dest,
                     __const void *__restrict __src, size_t __n)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
                      int __c, size_t __n)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memchr (__const void *__s, int __c, size_t __n)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 82 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
                      __const char *__restrict __src, size_t __n)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
                      size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
                       __const char *__restrict __src, size_t __n)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

# 130 "/usr/include/string.h" 3 4
extern char *strdup (__const char *__s)
__attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 165 "/usr/include/string.h" 3 4


extern char *strchr (__const char *__s, int __c)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern char *strrchr (__const char *__s, int __c)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 181 "/usr/include/string.h" 3 4



extern size_t strcspn (__const char *__s, __const char *__reject)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strpbrk (__const char *__s, __const char *__accept)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strstr (__const char *__haystack, __const char *__needle)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
                         __const char *__restrict __delim,
                         char **__restrict __save_ptr)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
                       char **__restrict __save_ptr)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
# 240 "/usr/include/string.h" 3 4


extern size_t strlen (__const char *__s)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 254 "/usr/include/string.h" 3 4


extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

# 270 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
# 288 "/usr/include/string.h" 3 4
extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *index (__const char *__s, int __c)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern char *rindex (__const char *__s, int __c)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));



extern int ffs (int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 325 "/usr/include/string.h" 3 4
extern int strcasecmp (__const char *__s1, __const char *__s2)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 348 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
                     __const char *__restrict __delim)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 426 "/usr/include/string.h" 3 4

# 37 "./libavutil/common.h" 2
# 1 "./libavutil/attributes.h" 1
# 38 "./libavutil/common.h" 2
# 56 "./libavutil/common.h"
extern const uint8_t ff_log2_tab[256];

extern const uint8_t av_reverse[256];

static inline __attribute__((const)) int av_log2_c(unsigned int v)
{
    int n = 0;
    if (v & 0xffff0000)
    {
        v >>= 16;
        n += 16;
    }
    if (v & 0xff00)
    {
        v >>= 8;
        n += 8;
    }
    n += ff_log2_tab[v];

    return n;
}

static inline __attribute__((const)) int av_log2_16bit_c(unsigned int v)
{
    int n = 0;
    if (v & 0xff00)
    {
        v >>= 8;
        n += 8;
    }
    n += ff_log2_tab[v];

    return n;
}
# 107 "./libavutil/common.h"
static inline __attribute__((const)) int av_clip(int a, int amin, int amax)
{
    if (a < amin) return amin;
    else if (a > amax) return amax;
    else return a;
}






static inline __attribute__((const)) uint8_t av_clip_uint8(int a)
{
    if (a&(~0xFF)) return (-a)>>31;
    else return a;
}






static inline __attribute__((const)) uint16_t av_clip_uint16(int a)
{
    if (a&(~0xFFFF)) return (-a)>>31;
    else return a;
}






static inline __attribute__((const)) int16_t av_clip_int16(int a)
{
    if ((a+0x8000) & ~0xFFFF) return (a>>31) ^ 0x7FFF;
    else return a;
}






static inline __attribute__((const)) int32_t av_clipl_int32(int64_t a)
{
    if ((a+0x80000000u) & ~0xFFFFFFFFUL) return (a>>63) ^ 0x7FFFFFFF;
    else return a;
}
# 165 "./libavutil/common.h"
static inline __attribute__((const)) float av_clipf(float a, float amin, float amax)
{
    if (a < amin) return amin;
    else if (a > amax) return amax;
    else return a;
}





static inline __attribute__((const)) int av_ceil_log2(int x)
{
    return av_log2_c((x - 1) << 1);
}
# 302 "./libavutil/common.h"
# 1 "./libavutil/mem.h" 1
# 72 "./libavutil/mem.h"
void *av_malloc(unsigned int size) __attribute__((__malloc__)) ;
# 86 "./libavutil/mem.h"
void *av_realloc(void *ptr, unsigned int size) ;
# 96 "./libavutil/mem.h"
void av_free(void *ptr);
# 106 "./libavutil/mem.h"
void *av_mallocz(unsigned int size) __attribute__((__malloc__)) ;







char *av_strdup(const char *s) __attribute__((__malloc__));
# 123 "./libavutil/mem.h"
void av_freep(void *ptr);
# 303 "./libavutil/common.h" 2
# 82 "./libavutil/avutil.h" 2
# 1 "./libavutil/error.h" 1
# 27 "./libavutil/error.h"
# 1 "/usr/include/errno.h" 1 3 4
# 28 "./libavutil/error.h" 2
# 1 "./libavutil/avutil.h" 1
# 29 "./libavutil/error.h" 2
# 70 "./libavutil/error.h"
int av_strerror(int errnum, char *errbuf, size_t errbuf_size);
# 83 "./libavutil/avutil.h" 2
# 1 "./libavutil/mathematics.h" 1
# 27 "./libavutil/mathematics.h"
# 1 "./libavutil/rational.h" 1
# 37 "./libavutil/rational.h"
typedef struct AVRational
{
    int num;
    int den;
} AVRational;







static inline int av_cmp_q(AVRational a, AVRational b)
{
    const int64_t tmp= a.num * (int64_t)b.den - b.num * (int64_t)a.den;

    if(tmp) return (tmp>>63)|1;
    else return 0;
}






static inline double av_q2d(AVRational a)
{
    return a.num / (double) a.den;
}
# 74 "./libavutil/rational.h"
int av_reduce(int *dst_num, int *dst_den, int64_t num, int64_t den, int64_t max);







AVRational av_mul_q(AVRational b, AVRational c) __attribute__((const));







AVRational av_div_q(AVRational b, AVRational c) __attribute__((const));







AVRational av_add_q(AVRational b, AVRational c) __attribute__((const));







AVRational av_sub_q(AVRational b, AVRational c) __attribute__((const));







AVRational av_d2q(double d, int max) __attribute__((const));





int av_nearer_q(AVRational q, AVRational q1, AVRational q2);






int av_find_nearest_q_idx(AVRational q, const AVRational* q_list);
# 28 "./libavutil/mathematics.h" 2
# 57 "./libavutil/mathematics.h"
enum AVRounding
{
    AV_ROUND_ZERO = 0,
    AV_ROUND_INF = 1,
    AV_ROUND_DOWN = 2,
    AV_ROUND_UP = 3,
    AV_ROUND_NEAR_INF = 5,
};






int64_t __attribute__((const)) av_gcd(int64_t a, int64_t b);





int64_t av_rescale(int64_t a, int64_t b, int64_t c) __attribute__((const));





int64_t av_rescale_rnd(int64_t a, int64_t b, int64_t c, enum AVRounding) __attribute__((const));




int64_t av_rescale_q(int64_t a, AVRational bq, AVRational cq) __attribute__((const));







int av_compare_ts(int64_t ts_a, AVRational tb_a, int64_t ts_b, AVRational tb_b);
# 84 "./libavutil/avutil.h" 2

# 1 "./libavutil/intfloat_readwrite.h" 1
# 28 "./libavutil/intfloat_readwrite.h"
typedef struct AVExtFloat
{
    uint8_t exponent[2];
    uint8_t mantissa[8];
} AVExtFloat;

double av_int2dbl(int64_t v) __attribute__((const));
float av_int2flt(int32_t v) __attribute__((const));
double av_ext2dbl(const AVExtFloat ext) __attribute__((const));
int64_t av_dbl2int(double d) __attribute__((const));
int32_t av_flt2int(float d) __attribute__((const));
AVExtFloat av_dbl2ext(double d) __attribute__((const));
# 86 "./libavutil/avutil.h" 2
# 1 "./libavutil/log.h" 1
# 24 "./libavutil/log.h"
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h" 1 3 4
# 105 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 25 "./libavutil/log.h" 2







typedef struct
{




    const char* class_name;





    const char* (*item_name)(void* ctx);






    const struct AVOption *option;







    int version;
} AVClass;
# 112 "./libavutil/log.h"
void av_log(void*, int level, const char *fmt, ...) __attribute__ ((__format__ (__printf__, 3, 4)));




void av_vlog(void*, int level, const char *fmt, va_list);
int av_log_get_level(void);
void av_log_set_level(int);
void av_log_set_callback(void (*)(void*, int, const char*, va_list));
void av_log_default_callback(void* ptr, int level, const char* fmt, va_list vl);
# 87 "./libavutil/avutil.h" 2
# 1 "./libavutil/pixfmt.h" 1
# 32 "./libavutil/pixfmt.h"
# 1 "./libavutil/avconfig.h" 1
# 33 "./libavutil/pixfmt.h" 2
# 60 "./libavutil/pixfmt.h"
enum PixelFormat
{
    PIX_FMT_NONE= -1,
    PIX_FMT_YUV420P,
    PIX_FMT_YUYV422,
    PIX_FMT_RGB24,
    PIX_FMT_BGR24,
    PIX_FMT_YUV422P,
    PIX_FMT_YUV444P,
    PIX_FMT_YUV410P,
    PIX_FMT_YUV411P,
    PIX_FMT_GRAY8,
    PIX_FMT_MONOWHITE,
    PIX_FMT_MONOBLACK,
    PIX_FMT_PAL8,
    PIX_FMT_YUVJ420P,
    PIX_FMT_YUVJ422P,
    PIX_FMT_YUVJ444P,
    PIX_FMT_XVMC_MPEG2_MC,
    PIX_FMT_XVMC_MPEG2_IDCT,
    PIX_FMT_UYVY422,
    PIX_FMT_UYYVYY411,
    PIX_FMT_BGR8,
    PIX_FMT_BGR4,
    PIX_FMT_BGR4_BYTE,
    PIX_FMT_RGB8,
    PIX_FMT_RGB4,
    PIX_FMT_RGB4_BYTE,
    PIX_FMT_NV12,
    PIX_FMT_NV21,

    PIX_FMT_ARGB,
    PIX_FMT_RGBA,
    PIX_FMT_ABGR,
    PIX_FMT_BGRA,

    PIX_FMT_GRAY16BE,
    PIX_FMT_GRAY16LE,
    PIX_FMT_YUV440P,
    PIX_FMT_YUVJ440P,
    PIX_FMT_YUVA420P,
    PIX_FMT_VDPAU_H264,
    PIX_FMT_VDPAU_MPEG1,
    PIX_FMT_VDPAU_MPEG2,
    PIX_FMT_VDPAU_WMV3,
    PIX_FMT_VDPAU_VC1,
    PIX_FMT_RGB48BE,
    PIX_FMT_RGB48LE,

    PIX_FMT_RGB565BE,
    PIX_FMT_RGB565LE,
    PIX_FMT_RGB555BE,
    PIX_FMT_RGB555LE,

    PIX_FMT_BGR565BE,
    PIX_FMT_BGR565LE,
    PIX_FMT_BGR555BE,
    PIX_FMT_BGR555LE,

    PIX_FMT_VAAPI_MOCO,
    PIX_FMT_VAAPI_IDCT,
    PIX_FMT_VAAPI_VLD,

    PIX_FMT_YUV420P16LE,
    PIX_FMT_YUV420P16BE,
    PIX_FMT_YUV422P16LE,
    PIX_FMT_YUV422P16BE,
    PIX_FMT_YUV444P16LE,
    PIX_FMT_YUV444P16BE,
    PIX_FMT_VDPAU_MPEG4,
    PIX_FMT_DXVA2_VLD,

    PIX_FMT_RGB444BE,
    PIX_FMT_RGB444LE,
    PIX_FMT_BGR444BE,
    PIX_FMT_BGR444LE,
    PIX_FMT_Y400A,
    PIX_FMT_NB,
};
# 88 "./libavutil/avutil.h" 2
# 31 "libavcodec/avcodec.h" 2
# 62 "libavcodec/avcodec.h"
enum CodecID
{
    CODEC_ID_NONE,


    CODEC_ID_MPEG1VIDEO,
    CODEC_ID_MPEG2VIDEO,
    CODEC_ID_MPEG2VIDEO_XVMC,
    CODEC_ID_H261,
    CODEC_ID_H263,
    CODEC_ID_RV10,
    CODEC_ID_RV20,
    CODEC_ID_MJPEG,
    CODEC_ID_MJPEGB,
    CODEC_ID_LJPEG,
    CODEC_ID_SP5X,
    CODEC_ID_JPEGLS,
    CODEC_ID_MPEG4,
    CODEC_ID_RAWVIDEO,
    CODEC_ID_MSMPEG4V1,
    CODEC_ID_MSMPEG4V2,
    CODEC_ID_MSMPEG4V3,
    CODEC_ID_WMV1,
    CODEC_ID_WMV2,
    CODEC_ID_H263P,
    CODEC_ID_H263I,
    CODEC_ID_FLV1,
    CODEC_ID_SVQ1,
    CODEC_ID_SVQ3,
    CODEC_ID_DVVIDEO,
    CODEC_ID_HUFFYUV,
    CODEC_ID_CYUV,
    CODEC_ID_H264,
    CODEC_ID_INDEO3,
    CODEC_ID_VP3,
    CODEC_ID_THEORA,
    CODEC_ID_ASV1,
    CODEC_ID_ASV2,
    CODEC_ID_FFV1,
    CODEC_ID_4XM,
    CODEC_ID_VCR1,
    CODEC_ID_CLJR,
    CODEC_ID_MDEC,
    CODEC_ID_ROQ,
    CODEC_ID_INTERPLAY_VIDEO,
    CODEC_ID_XAN_WC3,
    CODEC_ID_XAN_WC4,
    CODEC_ID_RPZA,
    CODEC_ID_CINEPAK,
    CODEC_ID_WS_VQA,
    CODEC_ID_MSRLE,
    CODEC_ID_MSVIDEO1,
    CODEC_ID_IDCIN,
    CODEC_ID_8BPS,
    CODEC_ID_SMC,
    CODEC_ID_FLIC,
    CODEC_ID_TRUEMOTION1,
    CODEC_ID_VMDVIDEO,
    CODEC_ID_MSZH,
    CODEC_ID_ZLIB,
    CODEC_ID_QTRLE,
    CODEC_ID_SNOW,
    CODEC_ID_TSCC,
    CODEC_ID_ULTI,
    CODEC_ID_QDRAW,
    CODEC_ID_VIXL,
    CODEC_ID_QPEG,

    CODEC_ID_XVID,

    CODEC_ID_PNG,
    CODEC_ID_PPM,
    CODEC_ID_PBM,
    CODEC_ID_PGM,
    CODEC_ID_PGMYUV,
    CODEC_ID_PAM,
    CODEC_ID_FFVHUFF,
    CODEC_ID_RV30,
    CODEC_ID_RV40,
    CODEC_ID_VC1,
    CODEC_ID_WMV3,
    CODEC_ID_LOCO,
    CODEC_ID_WNV1,
    CODEC_ID_AASC,
    CODEC_ID_INDEO2,
    CODEC_ID_FRAPS,
    CODEC_ID_TRUEMOTION2,
    CODEC_ID_BMP,
    CODEC_ID_CSCD,
    CODEC_ID_MMVIDEO,
    CODEC_ID_ZMBV,
    CODEC_ID_AVS,
    CODEC_ID_SMACKVIDEO,
    CODEC_ID_NUV,
    CODEC_ID_KMVC,
    CODEC_ID_FLASHSV,
    CODEC_ID_CAVS,
    CODEC_ID_JPEG2000,
    CODEC_ID_VMNC,
    CODEC_ID_VP5,
    CODEC_ID_VP6,
    CODEC_ID_VP6F,
    CODEC_ID_TARGA,
    CODEC_ID_DSICINVIDEO,
    CODEC_ID_TIERTEXSEQVIDEO,
    CODEC_ID_TIFF,
    CODEC_ID_GIF,
    CODEC_ID_FFH264,
    CODEC_ID_DXA,
    CODEC_ID_DNXHD,
    CODEC_ID_THP,
    CODEC_ID_SGI,
    CODEC_ID_C93,
    CODEC_ID_BETHSOFTVID,
    CODEC_ID_PTX,
    CODEC_ID_TXD,
    CODEC_ID_VP6A,
    CODEC_ID_AMV,
    CODEC_ID_VB,
    CODEC_ID_PCX,
    CODEC_ID_SUNRAST,
    CODEC_ID_INDEO4,
    CODEC_ID_INDEO5,
    CODEC_ID_MIMIC,
    CODEC_ID_RL2,
    CODEC_ID_8SVX_EXP,
    CODEC_ID_8SVX_FIB,
    CODEC_ID_ESCAPE124,
    CODEC_ID_DIRAC,
    CODEC_ID_BFI,
    CODEC_ID_CMV,
    CODEC_ID_MOTIONPIXELS,
    CODEC_ID_TGV,
    CODEC_ID_TGQ,
    CODEC_ID_TQI,
    CODEC_ID_AURA,
    CODEC_ID_AURA2,
    CODEC_ID_V210X,
    CODEC_ID_TMV,
    CODEC_ID_V210,
    CODEC_ID_DPX,
    CODEC_ID_MAD,
    CODEC_ID_FRWU,
    CODEC_ID_FLASHSV2,
    CODEC_ID_CDGRAPHICS,
    CODEC_ID_R210,
    CODEC_ID_ANM,
    CODEC_ID_BINKVIDEO,
    CODEC_ID_IFF_ILBM,
    CODEC_ID_IFF_BYTERUN1,
    CODEC_ID_KGV1,
    CODEC_ID_YOP,
    CODEC_ID_VP8,


    CODEC_ID_PCM_S16LE= 0x10000,
    CODEC_ID_PCM_S16BE,
    CODEC_ID_PCM_U16LE,
    CODEC_ID_PCM_U16BE,
    CODEC_ID_PCM_S8,
    CODEC_ID_PCM_U8,
    CODEC_ID_PCM_MULAW,
    CODEC_ID_PCM_ALAW,
    CODEC_ID_PCM_S32LE,
    CODEC_ID_PCM_S32BE,
    CODEC_ID_PCM_U32LE,
    CODEC_ID_PCM_U32BE,
    CODEC_ID_PCM_S24LE,
    CODEC_ID_PCM_S24BE,
    CODEC_ID_PCM_U24LE,
    CODEC_ID_PCM_U24BE,
    CODEC_ID_PCM_S24DAUD,
    CODEC_ID_PCM_ZORK,
    CODEC_ID_PCM_S16LE_PLANAR,
    CODEC_ID_PCM_DVD,
    CODEC_ID_PCM_F32BE,
    CODEC_ID_PCM_F32LE,
    CODEC_ID_PCM_F64BE,
    CODEC_ID_PCM_F64LE,
    CODEC_ID_PCM_BLURAY,


    CODEC_ID_ADPCM_IMA_QT= 0x11000,
    CODEC_ID_ADPCM_IMA_WAV,
    CODEC_ID_ADPCM_IMA_DK3,
    CODEC_ID_ADPCM_IMA_DK4,
    CODEC_ID_ADPCM_IMA_WS,
    CODEC_ID_ADPCM_IMA_SMJPEG,
    CODEC_ID_ADPCM_MS,
    CODEC_ID_ADPCM_4XM,
    CODEC_ID_ADPCM_XA,
    CODEC_ID_ADPCM_ADX,
    CODEC_ID_ADPCM_EA,
    CODEC_ID_ADPCM_G726,
    CODEC_ID_ADPCM_CT,
    CODEC_ID_ADPCM_SWF,
    CODEC_ID_ADPCM_YAMAHA,
    CODEC_ID_ADPCM_SBPRO_4,
    CODEC_ID_ADPCM_SBPRO_3,
    CODEC_ID_ADPCM_SBPRO_2,
    CODEC_ID_ADPCM_THP,
    CODEC_ID_ADPCM_IMA_AMV,
    CODEC_ID_ADPCM_EA_R1,
    CODEC_ID_ADPCM_EA_R3,
    CODEC_ID_ADPCM_EA_R2,
    CODEC_ID_ADPCM_IMA_EA_SEAD,
    CODEC_ID_ADPCM_IMA_EA_EACS,
    CODEC_ID_ADPCM_EA_XAS,
    CODEC_ID_ADPCM_EA_MAXIS_XA,
    CODEC_ID_ADPCM_IMA_ISS,


    CODEC_ID_AMR_NB= 0x12000,
    CODEC_ID_AMR_WB,


    CODEC_ID_RA_144= 0x13000,
    CODEC_ID_RA_288,


    CODEC_ID_ROQ_DPCM= 0x14000,
    CODEC_ID_INTERPLAY_DPCM,
    CODEC_ID_XAN_DPCM,
    CODEC_ID_SOL_DPCM,


    CODEC_ID_MP2= 0x15000,
    CODEC_ID_MP3,
    CODEC_ID_AAC,
    CODEC_ID_AC3,
    CODEC_ID_DTS,
    CODEC_ID_VORBIS,
    CODEC_ID_DVAUDIO,
    CODEC_ID_WMAV1,
    CODEC_ID_WMAV2,
    CODEC_ID_MACE3,
    CODEC_ID_MACE6,
    CODEC_ID_VMDAUDIO,
    CODEC_ID_SONIC,
    CODEC_ID_SONIC_LS,
    CODEC_ID_FLAC,
    CODEC_ID_MP3ADU,
    CODEC_ID_MP3ON4,
    CODEC_ID_SHORTEN,
    CODEC_ID_ALAC,
    CODEC_ID_WESTWOOD_SND1,
    CODEC_ID_GSM,
    CODEC_ID_QDM2,
    CODEC_ID_COOK,
    CODEC_ID_TRUESPEECH,
    CODEC_ID_TTA,
    CODEC_ID_SMACKAUDIO,
    CODEC_ID_QCELP,
    CODEC_ID_WAVPACK,
    CODEC_ID_DSICINAUDIO,
    CODEC_ID_IMC,
    CODEC_ID_MUSEPACK7,
    CODEC_ID_MLP,
    CODEC_ID_GSM_MS,
    CODEC_ID_ATRAC3,
    CODEC_ID_VOXWARE,
    CODEC_ID_APE,
    CODEC_ID_NELLYMOSER,
    CODEC_ID_MUSEPACK8,
    CODEC_ID_SPEEX,
    CODEC_ID_WMAVOICE,
    CODEC_ID_WMAPRO,
    CODEC_ID_WMALOSSLESS,
    CODEC_ID_ATRAC3P,
    CODEC_ID_EAC3,
    CODEC_ID_SIPR,
    CODEC_ID_MP1,
    CODEC_ID_TWINVQ,
    CODEC_ID_TRUEHD,
    CODEC_ID_MP4ALS,
    CODEC_ID_ATRAC1,
    CODEC_ID_BINKAUDIO_RDFT,
    CODEC_ID_BINKAUDIO_DCT,


    CODEC_ID_DVD_SUBTITLE= 0x17000,
    CODEC_ID_DVB_SUBTITLE,
    CODEC_ID_TEXT,
    CODEC_ID_XSUB,
    CODEC_ID_SSA,
    CODEC_ID_MOV_TEXT,
    CODEC_ID_HDMV_PGS_SUBTITLE,
    CODEC_ID_DVB_TELETEXT,


    CODEC_ID_TTF= 0x18000,

    CODEC_ID_PROBE= 0x19000,

    CODEC_ID_MPEG2TS= 0x20000,

};
# 374 "libavcodec/avcodec.h"
enum SampleFormat
{
    SAMPLE_FMT_NONE = -1,
    SAMPLE_FMT_U8,
    SAMPLE_FMT_S16,
    SAMPLE_FMT_S32,
    SAMPLE_FMT_FLT,
    SAMPLE_FMT_DBL,
    SAMPLE_FMT_NB
};
# 451 "libavcodec/avcodec.h"
enum Motion_Est_ID
{
    ME_ZERO = 1,
    ME_FULL,
    ME_LOG,
    ME_PHODS,
    ME_EPZS,
    ME_X1,
    ME_HEX,
    ME_UMH,
    ME_ITER,
    ME_TESA,
};

enum AVDiscard
{


    AVDISCARD_NONE =-16,
    AVDISCARD_DEFAULT= 0,
    AVDISCARD_NONREF = 8,
    AVDISCARD_BIDIR = 16,
    AVDISCARD_NONKEY = 32,
    AVDISCARD_ALL = 48,
};

enum AVColorPrimaries
{
    AVCOL_PRI_BT709 =1,
    AVCOL_PRI_UNSPECIFIED=2,
    AVCOL_PRI_BT470M =4,
    AVCOL_PRI_BT470BG =5,
    AVCOL_PRI_SMPTE170M =6,
    AVCOL_PRI_SMPTE240M =7,
    AVCOL_PRI_FILM =8,
    AVCOL_PRI_NB ,
};

enum AVColorTransferCharacteristic
{
    AVCOL_TRC_BT709 =1,
    AVCOL_TRC_UNSPECIFIED=2,
    AVCOL_TRC_GAMMA22 =4,
    AVCOL_TRC_GAMMA28 =5,
    AVCOL_TRC_NB ,
};

enum AVColorSpace
{
    AVCOL_SPC_RGB =0,
    AVCOL_SPC_BT709 =1,
    AVCOL_SPC_UNSPECIFIED=2,
    AVCOL_SPC_FCC =4,
    AVCOL_SPC_BT470BG =5,
    AVCOL_SPC_SMPTE170M =6,
    AVCOL_SPC_SMPTE240M =7,
    AVCOL_SPC_NB ,
};

enum AVColorRange
{
    AVCOL_RANGE_UNSPECIFIED=0,
    AVCOL_RANGE_MPEG =1,
    AVCOL_RANGE_JPEG =2,
    AVCOL_RANGE_NB ,
};






enum AVChromaLocation
{
    AVCHROMA_LOC_UNSPECIFIED=0,
    AVCHROMA_LOC_LEFT =1,
    AVCHROMA_LOC_CENTER =2,
    AVCHROMA_LOC_TOPLEFT =3,
    AVCHROMA_LOC_TOP =4,
    AVCHROMA_LOC_BOTTOMLEFT =5,
    AVCHROMA_LOC_BOTTOM =6,
    AVCHROMA_LOC_NB ,
};

typedef struct RcOverride
{
    int start_frame;
    int end_frame;
    int qscale;
    float quality_factor;
} RcOverride;
# 682 "libavcodec/avcodec.h"
typedef struct AVPanScan
{





    int id;






    int width;
    int height;






    int16_t position[3][2];
} AVPanScan;
# 958 "libavcodec/avcodec.h"
typedef struct AVPacket
{
# 968 "libavcodec/avcodec.h"
    int64_t pts;





    int64_t dts;
    uint8_t *data;
    int size;
    int stream_index;
    int flags;




    int duration;
    void (*destruct)(struct AVPacket *);
    void *priv;
    int64_t pos;
# 1003 "libavcodec/avcodec.h"
    int64_t convergence_duration;
} AVPacket;
# 1019 "libavcodec/avcodec.h"
typedef struct AVFrame
{
    uint8_t *data[4];
    int linesize[4];
    uint8_t *base[4];
    int key_frame;
    int pict_type;
    int64_t pts;
    int coded_picture_number;
    int display_picture_number;
    int quality;
    int age;
    int reference;
    int8_t *qscale_table;
    int qstride;
    uint8_t *mbskip_table;
    int16_t (*motion_val[2])[2];
    uint32_t *mb_type;
    uint8_t motion_subsample_log2;
    void *opaque;
    uint64_t error[4];
    int type;
    int repeat_pict;
    int qscale_type;
    int interlaced_frame;
    int top_field_first;
    AVPanScan *pan_scan;
    int palette_has_changed;
    int buffer_hints;
    short *dct_coeff;
    int8_t *ref_index[2];
    int64_t reordered_opaque;
    void *hwaccel_picture_private;
} AVFrame;
# 1030 "libavcodec/avcodec.h"
typedef struct AVCodecContext
{




    const AVClass *av_class;





    int bit_rate;







    int bit_rate_tolerance;






    int flags;
# 1066 "libavcodec/avcodec.h"
    int sub_id;
# 1075 "libavcodec/avcodec.h"
    int me_method;
# 1088 "libavcodec/avcodec.h"
    uint8_t *extradata;
    int extradata_size;
# 1099 "libavcodec/avcodec.h"
    AVRational time_base;
# 1109 "libavcodec/avcodec.h"
    int width, height;
# 1118 "libavcodec/avcodec.h"
    int gop_size;






    enum PixelFormat pix_fmt;







    int rate_emu;
# 1154 "libavcodec/avcodec.h"
    void (*draw_horiz_band)(struct AVCodecContext *s,
                            const AVFrame *src, int offset[4],
                            int y, int type, int height);


    int sample_rate;
    int channels;






    enum SampleFormat sample_fmt;





    int frame_size;
    int frame_number;

    int real_pict_num;
# 1185 "libavcodec/avcodec.h"
    int delay;


    float qcompress;
    float qblur;






    int qmin;






    int qmax;






    int max_qdiff;







    int max_b_frames;
# 1227 "libavcodec/avcodec.h"
    float b_quant_factor;


    int rc_strategy;


    int b_frame_strategy;







    int hurry_up;

    struct AVCodec *codec;

    void *priv_data;

    int rtp_payload_size;
# 1261 "libavcodec/avcodec.h"
    void (*rtp_callback)(struct AVCodecContext *avctx, void *data, int size, int mb_nb);


    int mv_bits;
    int header_bits;
    int i_tex_bits;
    int p_tex_bits;
    int i_count;
    int p_count;
    int skip_count;
    int misc_bits;






    int frame_bits;






    void *opaque;

    char codec_name[32];
    enum AVMediaType codec_type;
    enum CodecID codec_id;
# 1304 "libavcodec/avcodec.h"
    unsigned int codec_tag;






    int workaround_bugs;
# 1335 "libavcodec/avcodec.h"
    int luma_elim_threshold;






    int chroma_elim_threshold;
# 1356 "libavcodec/avcodec.h"
    int strict_std_compliance;
# 1368 "libavcodec/avcodec.h"
    float b_quant_offset;







    int error_recognition;
# 1393 "libavcodec/avcodec.h"
    int (*get_buffer)(struct AVCodecContext *c, AVFrame *pic);
# 1402 "libavcodec/avcodec.h"
    void (*release_buffer)(struct AVCodecContext *c, AVFrame *pic);







    int has_b_frames;





    int block_align;

    int parse_only;
# 1427 "libavcodec/avcodec.h"
    int mpeg_quant;






    char *stats_out;







    char *stats_in;







    float rc_qsquish;

    float rc_qmod_amp;
    int rc_qmod_freq;






    RcOverride *rc_override;
    int rc_override_count;






    const char *rc_eq;






    int rc_max_rate;






    int rc_min_rate;






    int rc_buffer_size;
    float rc_buffer_aggressivity;
# 1499 "libavcodec/avcodec.h"
    float i_quant_factor;






    float i_quant_offset;






    float rc_initial_cplx;






    int dct_algo;
# 1534 "libavcodec/avcodec.h"
    float lumi_masking;






    float temporal_cplx_masking;






    float spatial_cplx_masking;






    float p_masking;






    float dark_masking;






    int idct_algo;
# 1601 "libavcodec/avcodec.h"
    int slice_count;





    int *slice_offset;






    int error_concealment;
# 1626 "libavcodec/avcodec.h"
    unsigned dsp_mask;
# 1650 "libavcodec/avcodec.h"
    int bits_per_coded_sample;






    int prediction_method;
# 1669 "libavcodec/avcodec.h"
    AVRational sample_aspect_ratio;






    AVFrame *coded_frame;






    int debug;
# 1706 "libavcodec/avcodec.h"
    int debug_mv;
# 1716 "libavcodec/avcodec.h"
    uint64_t error[4];






    int mb_qmin;






    int mb_qmax;






    int me_cmp;





    int me_sub_cmp;





    int mb_cmp;





    int ildct_cmp;
# 1778 "libavcodec/avcodec.h"
    int dia_size;






    int last_predictor_count;






    int pre_me;






    int me_pre_cmp;






    int pre_dia_size;






    int me_subpel_quality;
# 1824 "libavcodec/avcodec.h"
    enum PixelFormat (*get_format)(struct AVCodecContext *s, const enum PixelFormat * fmt);
# 1834 "libavcodec/avcodec.h"
    int dtg_active_format;
# 1850 "libavcodec/avcodec.h"
    int me_range;






    int intra_quant_bias;







    int inter_quant_bias;







    int color_table_id;





    int internal_buffer_count;





    void *internal_buffer;
# 1899 "libavcodec/avcodec.h"
    int global_quality;
# 1911 "libavcodec/avcodec.h"
    int coder_type;






    int context_model;
# 1933 "libavcodec/avcodec.h"
    int slice_flags;
# 1943 "libavcodec/avcodec.h"
    int xvmc_acceleration;






    int mb_decision;
# 1960 "libavcodec/avcodec.h"
    uint16_t *intra_matrix;






    uint16_t *inter_matrix;







    unsigned int stream_codec_tag;







    int scenechange_threshold;






    int lmin;






    int lmax;






    struct AVPaletteControl *palctrl;






    int noise_reduction;
# 2025 "libavcodec/avcodec.h"
    int (*reget_buffer)(struct AVCodecContext *c, AVFrame *pic);






    int rc_initial_buffer_occupancy;






    int inter_threshold;






    int flags2;






    int error_rate;






    int antialias_algo;
# 2070 "libavcodec/avcodec.h"
    int quantizer_noise_shaping;







    int thread_count;
# 2089 "libavcodec/avcodec.h"
    int (*execute)(struct AVCodecContext *c, int (*func)(struct AVCodecContext *c2, void *arg), void *arg2, int *ret, int count, int size);







    void *thread_opaque;
# 2106 "libavcodec/avcodec.h"
    int me_threshold;






    int mb_threshold;






    int intra_dc_precision;






    int nsse_weight;






    int skip_top;






    int skip_bottom;






    int profile;
# 2170 "libavcodec/avcodec.h"
    int level;







    int lowres;







    int coded_width, coded_height;






    int frame_skip_threshold;






    int frame_skip_factor;






    int frame_skip_exp;






    int frame_skip_cmp;







    float border_masking;






    int mb_lmin;






    int mb_lmax;






    int me_penalty_compensation;






    enum AVDiscard skip_loop_filter;






    enum AVDiscard skip_idct;






    enum AVDiscard skip_frame;






    int bidir_refine;






    int brd_scale;






    float crf;






    int cqp;






    int keyint_min;






    int refs;






    int chromaoffset;






    int bframebias;






    int trellis;






    float complexityblur;







    int deblockalpha;







    int deblockbeta;






    int partitions;
# 2369 "libavcodec/avcodec.h"
    int directpred;






    int cutoff;






    int scenechange_factor;







    int mv0_threshold;






    int b_sensitivity;





    int compression_level;







    int use_lpc;






    int lpc_coeff_precision;





    int min_prediction_order;





    int max_prediction_order;






    int prediction_order_method;





    int min_partition_order;





    int max_partition_order;






    int64_t timecode_frame_start;
# 2466 "libavcodec/avcodec.h"
    int request_channels;
# 2475 "libavcodec/avcodec.h"
    float drc_scale;







    int64_t reordered_opaque;







    int bits_per_raw_sample;






    int64_t channel_layout;






    int64_t request_channel_layout;






    float rc_max_available_vbv_use;






    float rc_min_vbv_overflow_use;






    struct AVHWAccel *hwaccel;
# 2535 "libavcodec/avcodec.h"
    int ticks_per_frame;
# 2547 "libavcodec/avcodec.h"
    void *hwaccel_context;






    enum AVColorPrimaries color_primaries;






    enum AVColorTransferCharacteristic color_trc;






    enum AVColorSpace colorspace;






    enum AVColorRange color_range;






    enum AVChromaLocation chroma_sample_location;
# 2602 "libavcodec/avcodec.h"
    int (*execute2)(struct AVCodecContext *c, int (*func)(struct AVCodecContext *c2, void *arg, int jobnr, int threadnr), void *arg2, int *ret, int count);
# 2612 "libavcodec/avcodec.h"
    int weighted_p_pred;
# 2622 "libavcodec/avcodec.h"
    int aq_mode;







    float aq_strength;







    float psy_rd;







    float psy_trellis;







    int rc_lookahead;
} AVCodecContext;




typedef struct AVCodec
{






    const char *name;
    enum AVMediaType type;
    enum CodecID id;
    int priv_data_size;
    int (*init)(AVCodecContext *);
    int (*encode)(AVCodecContext *, uint8_t *buf, int buf_size, void *data);
    int (*close)(AVCodecContext *);
    int (*decode)(AVCodecContext *, void *outdata, int *outdata_size, AVPacket *avpkt);




    int capabilities;
    struct AVCodec *next;




    void (*flush)(AVCodecContext *);
    const AVRational *supported_framerates;
    const enum PixelFormat *pix_fmts;




    const char *long_name;
    const int *supported_samplerates;
    const enum SampleFormat *sample_fmts;
    const int64_t *channel_layouts;
} AVCodec;




typedef struct AVHWAccel
{





    const char *name;






    enum AVMediaType type;






    enum CodecID id;






    enum PixelFormat pix_fmt;





    int capabilities;

    struct AVHWAccel *next;
# 2752 "libavcodec/avcodec.h"
    int (*start_frame)(AVCodecContext *avctx, const uint8_t *buf, uint32_t buf_size);
# 2765 "libavcodec/avcodec.h"
    int (*decode_slice)(AVCodecContext *avctx, const uint8_t *buf, uint32_t buf_size);
# 2776 "libavcodec/avcodec.h"
    int (*end_frame)(AVCodecContext *avctx);
# 2785 "libavcodec/avcodec.h"
    int priv_data_size;
} AVHWAccel;





typedef struct AVPicture
{
    uint8_t *data[4];
    int linesize[4];
} AVPicture;
# 2808 "libavcodec/avcodec.h"
typedef struct AVPaletteControl
{



    int palette_changed;





    unsigned int palette[256];

} AVPaletteControl __attribute__((deprecated));


enum AVSubtitleType
{
    SUBTITLE_NONE,

    SUBTITLE_BITMAP,





    SUBTITLE_TEXT,





    SUBTITLE_ASS,
};

typedef struct AVSubtitleRect
{
    int x;
    int y;
    int w;
    int h;
    int nb_colors;





    AVPicture pict;
    enum AVSubtitleType type;

    char *text;






    char *ass;
} AVSubtitleRect;

typedef struct AVSubtitle
{
    uint16_t format;
    uint32_t start_display_time;
    uint32_t end_display_time;
    unsigned num_rects;
    AVSubtitleRect **rects;
    int64_t pts;
} AVSubtitle;






__attribute__((deprecated)) void av_destruct_packet_nofree(AVPacket *pkt);




void av_destruct_packet(AVPacket *pkt);






void av_init_packet(AVPacket *pkt);
# 2901 "libavcodec/avcodec.h"
int av_new_packet(AVPacket *pkt, int size);







void av_shrink_packet(AVPacket *pkt, int size);





int av_dup_packet(AVPacket *pkt);






void av_free_packet(AVPacket *pkt);



struct ReSampleContext;
struct AVResampleContext;

typedef struct ReSampleContext ReSampleContext;





__attribute__((deprecated)) ReSampleContext *audio_resample_init(int output_channels, int input_channels,
        int output_rate, int input_rate);
# 2954 "libavcodec/avcodec.h"
ReSampleContext *av_audio_resample_init(int output_channels, int input_channels,
                                        int output_rate, int input_rate,
                                        enum SampleFormat sample_fmt_out,
                                        enum SampleFormat sample_fmt_in,
                                        int filter_length, int log2_phase_count,
                                        int linear, double cutoff);

int audio_resample(ReSampleContext *s, short *output, short *input, int nb_samples);
void audio_resample_close(ReSampleContext *s);
# 2974 "libavcodec/avcodec.h"
struct AVResampleContext *av_resample_init(int out_rate, int in_rate, int filter_length, int log2_phase_count, int linear, double cutoff);
# 2985 "libavcodec/avcodec.h"
int av_resample(struct AVResampleContext *c, short *dst, short *src, int *consumed, int src_size, int dst_size, int update_ctx);
# 3000 "libavcodec/avcodec.h"
void av_resample_compensate(struct AVResampleContext *c, int sample_delta, int compensation_distance);
void av_resample_close(struct AVResampleContext *c);
# 3012 "libavcodec/avcodec.h"
int avpicture_alloc(AVPicture *picture, enum PixelFormat pix_fmt, int width, int height);






void avpicture_free(AVPicture *picture);
# 3038 "libavcodec/avcodec.h"
int avpicture_fill(AVPicture *picture, uint8_t *ptr,
                   enum PixelFormat pix_fmt, int width, int height);
int avpicture_layout(const AVPicture* src, enum PixelFormat pix_fmt, int width, int height,
                     unsigned char *dest, int dest_size);
# 3055 "libavcodec/avcodec.h"
int avpicture_get_size(enum PixelFormat pix_fmt, int width, int height);
void avcodec_get_chroma_sub_sample(enum PixelFormat pix_fmt, int *h_shift, int *v_shift);
const char *avcodec_get_pix_fmt_name(enum PixelFormat pix_fmt);
void avcodec_set_dimensions(AVCodecContext *s, int width, int height);
# 3074 "libavcodec/avcodec.h"
__attribute__((deprecated)) enum PixelFormat avcodec_get_pix_fmt(const char* name);







unsigned int avcodec_pix_fmt_to_codec_tag(enum PixelFormat pix_fmt);
# 3108 "libavcodec/avcodec.h"
int avcodec_get_pix_fmt_loss(enum PixelFormat dst_pix_fmt, enum PixelFormat src_pix_fmt,
                             int has_alpha);
# 3133 "libavcodec/avcodec.h"
enum PixelFormat avcodec_find_best_pix_fmt(int64_t pix_fmt_mask, enum PixelFormat src_pix_fmt,
        int has_alpha, int *loss_ptr);
# 3147 "libavcodec/avcodec.h"
void avcodec_pix_fmt_string (char *buf, int buf_size, enum PixelFormat pix_fmt);
# 3156 "libavcodec/avcodec.h"
int img_get_alpha_info(const AVPicture *src,
                       enum PixelFormat pix_fmt, int width, int height);



int avpicture_deinterlace(AVPicture *dst, const AVPicture *src,
                          enum PixelFormat pix_fmt, int width, int height);
# 3171 "libavcodec/avcodec.h"
AVCodec *av_codec_next(AVCodec *c);




unsigned avcodec_version(void);




const char *avcodec_configuration(void);




const char *avcodec_license(void);







void avcodec_init(void);





__attribute__((deprecated)) void register_avcodec(AVCodec *codec);







void avcodec_register(AVCodec *codec);







AVCodec *avcodec_find_encoder(enum CodecID id);







AVCodec *avcodec_find_encoder_by_name(const char *name);







AVCodec *avcodec_find_decoder(enum CodecID id);







AVCodec *avcodec_find_decoder_by_name(const char *name);
void avcodec_string(char *buf, int buf_size, AVCodecContext *enc, int encode);






void avcodec_get_context_defaults(AVCodecContext *s);



void avcodec_get_context_defaults2(AVCodecContext *s, enum AVMediaType);
# 3261 "libavcodec/avcodec.h"
AVCodecContext *avcodec_alloc_context(void);



AVCodecContext *avcodec_alloc_context2(enum AVMediaType);
# 3278 "libavcodec/avcodec.h"
int avcodec_copy_context(AVCodecContext *dest, const AVCodecContext *src);






void avcodec_get_frame_defaults(AVFrame *pic);
# 3294 "libavcodec/avcodec.h"
AVFrame *avcodec_alloc_frame(void);

int avcodec_default_get_buffer(AVCodecContext *s, AVFrame *pic);
void avcodec_default_release_buffer(AVCodecContext *s, AVFrame *pic);
int avcodec_default_reget_buffer(AVCodecContext *s, AVFrame *pic);
# 3307 "libavcodec/avcodec.h"
unsigned avcodec_get_edge_width(void);
# 3317 "libavcodec/avcodec.h"
void avcodec_align_dimensions(AVCodecContext *s, int *width, int *height);
# 3327 "libavcodec/avcodec.h"
void avcodec_align_dimensions2(AVCodecContext *s, int *width, int *height,
                               int linesize_align[4]);
# 3338 "libavcodec/avcodec.h"
int avcodec_check_dimensions(void *av_log_ctx, unsigned int w, unsigned int h);
enum PixelFormat avcodec_default_get_format(struct AVCodecContext *s, const enum PixelFormat * fmt);

int avcodec_thread_init(AVCodecContext *s, int thread_count);
void avcodec_thread_free(AVCodecContext *s);
int avcodec_default_execute(AVCodecContext *c, int (*func)(AVCodecContext *c2, void *arg2),void *arg, int *ret, int count, int size);
int avcodec_default_execute2(AVCodecContext *c, int (*func)(AVCodecContext *c2, void *arg2, int, int),void *arg, int *ret, int count);
# 3374 "libavcodec/avcodec.h"
int avcodec_open(AVCodecContext *avctx, AVCodec *codec);
# 3390 "libavcodec/avcodec.h"
__attribute__((deprecated)) int avcodec_decode_audio2(AVCodecContext *avctx, int16_t *samples,
        int *frame_size_ptr,
        const uint8_t *buf, int buf_size);
# 3434 "libavcodec/avcodec.h"
int avcodec_decode_audio3(AVCodecContext *avctx, int16_t *samples,
                          int *frame_size_ptr,
                          AVPacket *avpkt);
# 3452 "libavcodec/avcodec.h"
__attribute__((deprecated)) int avcodec_decode_video(AVCodecContext *avctx, AVFrame *picture,
        int *got_picture_ptr,
        const uint8_t *buf, int buf_size);
# 3492 "libavcodec/avcodec.h"
int avcodec_decode_video2(AVCodecContext *avctx, AVFrame *picture,
                          int *got_picture_ptr,
                          AVPacket *avpkt);





__attribute__((deprecated)) int avcodec_decode_subtitle(AVCodecContext *avctx, AVSubtitle *sub,
        int *got_sub_ptr,
        const uint8_t *buf, int buf_size);
# 3516 "libavcodec/avcodec.h"
int avcodec_decode_subtitle2(AVCodecContext *avctx, AVSubtitle *sub,
                             int *got_sub_ptr,
                             AVPacket *avpkt);
int avcodec_parse_frame(AVCodecContext *avctx, uint8_t **pdata,
                        int *data_size_ptr,
                        uint8_t *buf, int buf_size);
# 3542 "libavcodec/avcodec.h"
int avcodec_encode_audio(AVCodecContext *avctx, uint8_t *buf, int buf_size,
                         const short *samples);
# 3557 "libavcodec/avcodec.h"
int avcodec_encode_video(AVCodecContext *avctx, uint8_t *buf, int buf_size,
                         const AVFrame *pict);
int avcodec_encode_subtitle(AVCodecContext *avctx, uint8_t *buf, int buf_size,
                            const AVSubtitle *sub);

int avcodec_close(AVCodecContext *avctx);
# 3574 "libavcodec/avcodec.h"
void avcodec_register_all(void);




void avcodec_flush_buffers(AVCodecContext *avctx);

void avcodec_default_free_buffers(AVCodecContext *s);
# 3591 "libavcodec/avcodec.h"
char av_get_pict_type_char(int pict_type);







int av_get_bits_per_sample(enum CodecID codec_id);







int av_get_bits_per_sample_format(enum SampleFormat sample_fmt);


typedef struct AVCodecParserContext
{
    void *priv_data;
    struct AVCodecParser *parser;
    int64_t frame_offset;
    int64_t cur_offset;

    int64_t next_frame_offset;

    int pict_type;
# 3628 "libavcodec/avcodec.h"
    int repeat_pict;
    int64_t pts;
    int64_t dts;


    int64_t last_pts;
    int64_t last_dts;
    int fetch_timestamp;


    int cur_frame_start_index;
    int64_t cur_frame_offset[4];
    int64_t cur_frame_pts[4];
    int64_t cur_frame_dts[4];

    int flags;


    int64_t offset;
    int64_t cur_frame_end[4];







    int key_frame;
# 3672 "libavcodec/avcodec.h"
    int64_t convergence_duration;
# 3684 "libavcodec/avcodec.h"
    int dts_sync_point;
# 3699 "libavcodec/avcodec.h"
    int dts_ref_dts_delta;
# 3713 "libavcodec/avcodec.h"
    int pts_dts_delta;






    int64_t cur_frame_pos[4];




    int64_t pos;




    int64_t last_pos;
} AVCodecParserContext;

typedef struct AVCodecParser
{
    int codec_ids[5];
    int priv_data_size;
    int (*parser_init)(AVCodecParserContext *s);
    int (*parser_parse)(AVCodecParserContext *s,
                        AVCodecContext *avctx,
                        const uint8_t **poutbuf, int *poutbuf_size,
                        const uint8_t *buf, int buf_size);
    void (*parser_close)(AVCodecParserContext *s);
    int (*split)(AVCodecContext *avctx, const uint8_t *buf, int buf_size);
    struct AVCodecParser *next;
} AVCodecParser;

AVCodecParser *av_parser_next(AVCodecParser *c);

void av_register_codec_parser(AVCodecParser *parser);
AVCodecParserContext *av_parser_init(int codec_id);


__attribute__((deprecated))
int av_parser_parse(AVCodecParserContext *s,
                    AVCodecContext *avctx,
                    uint8_t **poutbuf, int *poutbuf_size,
                    const uint8_t *buf, int buf_size,
                    int64_t pts, int64_t dts);
# 3788 "libavcodec/avcodec.h"
int av_parser_parse2(AVCodecParserContext *s,
                     AVCodecContext *avctx,
                     uint8_t **poutbuf, int *poutbuf_size,
                     const uint8_t *buf, int buf_size,
                     int64_t pts, int64_t dts,
                     int64_t pos);

int av_parser_change(AVCodecParserContext *s,
                     AVCodecContext *avctx,
                     uint8_t **poutbuf, int *poutbuf_size,
                     const uint8_t *buf, int buf_size, int keyframe);
void av_parser_close(AVCodecParserContext *s);


typedef struct AVBitStreamFilterContext
{
    void *priv_data;
    struct AVBitStreamFilter *filter;
    AVCodecParserContext *parser;
    struct AVBitStreamFilterContext *next;
} AVBitStreamFilterContext;


typedef struct AVBitStreamFilter
{
    const char *name;
    int priv_data_size;
    int (*filter)(AVBitStreamFilterContext *bsfc,
                  AVCodecContext *avctx, const char *args,
                  uint8_t **poutbuf, int *poutbuf_size,
                  const uint8_t *buf, int buf_size, int keyframe);
    void (*close)(AVBitStreamFilterContext *bsfc);
    struct AVBitStreamFilter *next;
} AVBitStreamFilter;

void av_register_bitstream_filter(AVBitStreamFilter *bsf);
AVBitStreamFilterContext *av_bitstream_filter_init(const char *name);
int av_bitstream_filter_filter(AVBitStreamFilterContext *bsfc,
                               AVCodecContext *avctx, const char *args,
                               uint8_t **poutbuf, int *poutbuf_size,
                               const uint8_t *buf, int buf_size, int keyframe);
void av_bitstream_filter_close(AVBitStreamFilterContext *bsf);

AVBitStreamFilter *av_bitstream_filter_next(AVBitStreamFilter *f);
# 3839 "libavcodec/avcodec.h"
void *av_fast_realloc(void *ptr, unsigned int *size, unsigned int min_size);
# 3853 "libavcodec/avcodec.h"
void av_fast_malloc(void *ptr, unsigned int *size, unsigned int min_size);




void av_picture_copy(AVPicture *dst, const AVPicture *src,
                     enum PixelFormat pix_fmt, int width, int height);




int av_picture_crop(AVPicture *dst, const AVPicture *src,
                    enum PixelFormat pix_fmt, int top_band, int left_band);




int av_picture_pad(AVPicture *dst, const AVPicture *src, int height, int width, enum PixelFormat pix_fmt,
                   int padtop, int padbottom, int padleft, int padright, int *color);
# 3880 "libavcodec/avcodec.h"
unsigned int av_xiphlacing(unsigned char *s, unsigned int v);
# 3893 "libavcodec/avcodec.h"
int av_parse_video_frame_size(int *width_ptr, int *height_ptr, const char *str);
# 3904 "libavcodec/avcodec.h"
int av_parse_video_frame_rate(AVRational *frame_rate, const char *str);
# 3918 "libavcodec/avcodec.h"
void av_log_missing_feature(void *avc, const char *feature, int want_sample);
# 3928 "libavcodec/avcodec.h"
void av_log_ask_for_sample(void *avc, const char *msg);




void av_register_hwaccel(AVHWAccel *hwaccel);






AVHWAccel *av_hwaccel_next(AVHWAccel *hwaccel);





enum AVLockOp
{
    AV_LOCK_CREATE,
    AV_LOCK_OBTAIN,
    AV_LOCK_RELEASE,
    AV_LOCK_DESTROY,
};
# 3966 "libavcodec/avcodec.h"
int av_lockmgr_register(int (*cb)(void **mutex, enum AVLockOp op));
void ff_reset_flv_bitrate(AVCodecContext *avctx,int bit_rate);
# 37 "libavcodec/mjpegdec.c" 2
# 1 "libavcodec/dsputil.h" 1
# 33 "libavcodec/dsputil.h"
# 1 "./libavutil/intreadwrite.h" 1
# 23 "./libavutil/intreadwrite.h"
# 1 "./config.h" 1
# 24 "./libavutil/intreadwrite.h" 2
# 1 "./libavutil/bswap.h" 1
# 42 "./libavutil/bswap.h"
# 1 "./libavutil/x86/bswap.h" 1
# 28 "./libavutil/x86/bswap.h"
# 1 "./config.h" 1
# 29 "./libavutil/x86/bswap.h" 2
# 1 "./libavutil/attributes.h" 1
# 30 "./libavutil/x86/bswap.h" 2


static __attribute__((always_inline)) inline __attribute__((const)) uint16_t bswap_16(uint16_t x)
{
    __asm__("rorw $8, %0" : "+r"(x));
    return x;
}


static __attribute__((always_inline)) inline __attribute__((const)) uint32_t bswap_32(uint32_t x)
{

    __asm__("bswap   %0" : "+r" (x));






    return x;
}



static inline uint64_t __attribute__((const)) bswap_64(uint64_t x)
{
    __asm__("bswap  %0": "=r" (x) : "0" (x));
    return x;
}
# 43 "./libavutil/bswap.h" 2
# 25 "./libavutil/intreadwrite.h" 2


typedef union
{
    uint64_t u64;
    uint32_t u32[2];
    uint16_t u16[4];
    uint8_t u8 [8];
    double f64;
    float f32[2];
} av_alias av_alias64;

typedef union
{
    uint32_t u32;
    uint16_t u16[2];
    uint8_t u8 [4];
    float f32;
} av_alias av_alias32;

typedef union
{
    uint16_t u16;
    uint8_t u8 [2];
} av_alias av_alias16;
# 66 "./libavutil/intreadwrite.h"
# 1 "./libavutil/x86/intreadwrite.h" 1
# 67 "./libavutil/x86/intreadwrite.h"
static __attribute__((always_inline)) inline void AV_COPY128(void *d, const void *s)
{
    struct v
    {
        uint64_t v[2];
    };

    __asm__("movaps   %1, %%xmm0  \n\t"
            "movaps   %%xmm0, %0  \n\t"
            : "=m"(*(struct v*)d)
            : "m" (*(const struct v*)s)
            : "xmm0");
}






static __attribute__((always_inline)) inline void AV_ZERO128(void *d)
{
    struct v
    {
        uint64_t v[2];
    };

    __asm__("pxor %%xmm0, %%xmm0  \n\t"
            "movdqa   %%xmm0, %0  \n\t"
            : "=m"(*(struct v*)d)
            :: "xmm0");
}
# 67 "./libavutil/intreadwrite.h" 2
# 182 "./libavutil/intreadwrite.h"
union unaligned_64
{
    uint64_t l;
} __attribute__((packed)) av_alias;
union unaligned_32
{
    uint32_t l;
} __attribute__((packed)) av_alias;
union unaligned_16
{
    uint16_t l;
} __attribute__((packed)) av_alias;
# 34 "libavcodec/dsputil.h" 2





typedef short DCTELEM;

void fdct_ifast (DCTELEM *data);
void fdct_ifast248 (DCTELEM *data);
void ff_jpeg_fdct_islow (DCTELEM *data);
void ff_fdct248_islow (DCTELEM *data);

void j_rev_dct (DCTELEM *data);
void j_rev_dct4 (DCTELEM *data);
void j_rev_dct2 (DCTELEM *data);
void j_rev_dct1 (DCTELEM *data);
void ff_wmv2_idct_c(DCTELEM *data);

void ff_fdct_mmx(DCTELEM *block);
void ff_fdct_mmx2(DCTELEM *block);
void ff_fdct_sse2(DCTELEM *block);

void ff_h264_idct8_add_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct_add_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct8_dc_add_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct_dc_add_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_lowres_idct_add_c(uint8_t *dst, int stride, DCTELEM *block);
void ff_h264_lowres_idct_put_c(uint8_t *dst, int stride, DCTELEM *block);
void ff_h264_idct_add16_c(uint8_t *dst, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct_add16intra_c(uint8_t *dst, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct8_add4_c(uint8_t *dst, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct_add8_c(uint8_t **dest, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);

void ff_vector_fmul_window_c(float *dst, const float *src0, const float *src1,
                             const float *win, float add_bias, int len);
void ff_float_to_int16_c(int16_t *dst, const float *src, long len);
void ff_float_to_int16_interleave_c(int16_t *dst, const float **src, long len, int channels);


extern const uint8_t ff_alternate_horizontal_scan[64];
extern const uint8_t ff_alternate_vertical_scan[64];
extern const uint8_t ff_zigzag_direct[64];
extern const uint8_t ff_zigzag248_direct[64];





extern uint32_t ff_squareTbl[512];
extern uint8_t ff_cropTbl[256 + 2 * 1024];


void ff_vp3_idct_c(DCTELEM *block );
void ff_vp3_idct_put_c(uint8_t *dest , int line_size, DCTELEM *block );
void ff_vp3_idct_add_c(uint8_t *dest , int line_size, DCTELEM *block );
void ff_vp3_idct_dc_add_c(uint8_t *dest , int line_size, const DCTELEM *block );

void ff_vp3_v_loop_filter_c(uint8_t *src, int stride, int *bounding_values);
void ff_vp3_h_loop_filter_c(uint8_t *src, int stride, int *bounding_values);


void ff_vp6_filter_diag4_c(uint8_t *dst, uint8_t *src, int stride,
                           const int16_t *h_weights, const int16_t *v_weights);


void ff_bink_idct_c (DCTELEM *block);
void ff_bink_idct_add_c(uint8_t *dest, int linesize, DCTELEM *block);
void ff_bink_idct_put_c(uint8_t *dest, int linesize, DCTELEM *block);


void ff_put_cavs_qpel8_mc00_c(uint8_t *dst, uint8_t *src, int stride);
void ff_avg_cavs_qpel8_mc00_c(uint8_t *dst, uint8_t *src, int stride);
void ff_put_cavs_qpel16_mc00_c(uint8_t *dst, uint8_t *src, int stride);
void ff_avg_cavs_qpel16_mc00_c(uint8_t *dst, uint8_t *src, int stride);


void ff_put_vc1_mspel_mc00_c(uint8_t *dst, const uint8_t *src, int stride, int rnd);
void ff_avg_vc1_mspel_mc00_c(uint8_t *dst, const uint8_t *src, int stride, int rnd);


void ff_ea_idct_put_c(uint8_t *dest, int linesize, DCTELEM *block);


void ff_img_copy_plane(uint8_t *dst, int dst_wrap, const uint8_t *src, int src_wrap, int width, int height);
void ff_shrink22(uint8_t *dst, int dst_wrap, const uint8_t *src, int src_wrap, int width, int height);
void ff_shrink44(uint8_t *dst, int dst_wrap, const uint8_t *src, int src_wrap, int width, int height);
void ff_shrink88(uint8_t *dst, int dst_wrap, const uint8_t *src, int src_wrap, int width, int height);

void ff_gmc_c(uint8_t *dst, uint8_t *src, int stride, int h, int ox, int oy,
              int dxx, int dxy, int dyx, int dyy, int shift, int r, int width, int height);
# 149 "libavcodec/dsputil.h"
typedef void (*op_pixels_func)(uint8_t *block , const uint8_t *pixels , int line_size, int h);
typedef void (*tpel_mc_func)(uint8_t *block , const uint8_t *pixels , int line_size, int w, int h);
typedef void (*qpel_mc_func)(uint8_t *dst , uint8_t *src , int stride);
typedef void (*h264_chroma_mc_func)(uint8_t *dst , uint8_t *src , int srcStride, int h, int x, int y);

typedef void (*op_fill_func)(uint8_t *block , uint8_t value, int line_size, int h);






void ff_put_qpel16_mc11_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_no_rnd_qpel16_mc11_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_avg_qpel16_mc11_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_qpel16_mc31_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_no_rnd_qpel16_mc31_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_avg_qpel16_mc31_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_qpel16_mc12_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_no_rnd_qpel16_mc12_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_avg_qpel16_mc12_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_qpel16_mc32_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_no_rnd_qpel16_mc32_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_avg_qpel16_mc32_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_qpel16_mc13_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_no_rnd_qpel16_mc13_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_avg_qpel16_mc13_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_qpel16_mc33_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_no_rnd_qpel16_mc33_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_avg_qpel16_mc33_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_qpel8_mc11_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_no_rnd_qpel8_mc11_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_avg_qpel8_mc11_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_qpel8_mc31_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_no_rnd_qpel8_mc31_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_avg_qpel8_mc31_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_qpel8_mc12_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_no_rnd_qpel8_mc12_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_avg_qpel8_mc12_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_qpel8_mc32_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_no_rnd_qpel8_mc32_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_avg_qpel8_mc32_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_qpel8_mc13_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_no_rnd_qpel8_mc13_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_avg_qpel8_mc13_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_qpel8_mc33_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_put_no_rnd_qpel8_mc33_old_c (uint8_t *dst , uint8_t *src , int stride);
void ff_avg_qpel8_mc33_old_c (uint8_t *dst , uint8_t *src , int stride);
# 183 "libavcodec/dsputil.h"
typedef int (*me_cmp_func)(void *s, uint8_t *blk1 , uint8_t *blk2 , int line_size, int h) ;




typedef struct ScanTable
{
    const uint8_t *scantable;
    uint8_t permutated[64];
    uint8_t raster_end[64];




} ScanTable;

void ff_init_scantable(uint8_t *, ScanTable *st, const uint8_t *src_scantable);

void ff_emulated_edge_mc(uint8_t *buf, uint8_t *src, int linesize,
                         int block_w, int block_h,
                         int src_x, int src_y, int w, int h);




typedef struct DSPContext
{

    void (*get_pixels)(DCTELEM *block , const uint8_t *pixels , int line_size);
    void (*diff_pixels)(DCTELEM *block , const uint8_t *s1 , const uint8_t *s2 , int stride);
    void (*put_pixels_clamped)(const DCTELEM *block , uint8_t *pixels , int line_size);
    void (*put_signed_pixels_clamped)(const DCTELEM *block , uint8_t *pixels , int line_size);
    void (*put_pixels_nonclamped)(const DCTELEM *block , uint8_t *pixels , int line_size);
    void (*add_pixels_clamped)(const DCTELEM *block , uint8_t *pixels , int line_size);
    void (*add_pixels8)(uint8_t *pixels, DCTELEM *block, int line_size);
    void (*add_pixels4)(uint8_t *pixels, DCTELEM *block, int line_size);
    int (*sum_abs_dctelem)(DCTELEM *block );



    void (*gmc1)(uint8_t *dst , uint8_t *src , int srcStride, int h, int x16, int y16, int rounder);



    void (*gmc )(uint8_t *dst , uint8_t *src , int stride, int h, int ox, int oy,
                 int dxx, int dxy, int dyx, int dyy, int shift, int r, int width, int height);
    void (*clear_block)(DCTELEM *block );
    void (*clear_blocks)(DCTELEM *blocks );
    int (*pix_sum)(uint8_t * pix, int line_size);
    int (*pix_norm1)(uint8_t * pix, int line_size);


    me_cmp_func sad[6];
    me_cmp_func sse[6];
    me_cmp_func hadamard8_diff[6];
    me_cmp_func dct_sad[6];
    me_cmp_func quant_psnr[6];
    me_cmp_func bit[6];
    me_cmp_func rd[6];
    me_cmp_func vsad[6];
    me_cmp_func vsse[6];
    me_cmp_func nsse[6];
    me_cmp_func w53[6];
    me_cmp_func w97[6];
    me_cmp_func dct_max[6];
    me_cmp_func dct264_sad[6];

    me_cmp_func me_pre_cmp[6];
    me_cmp_func me_cmp[6];
    me_cmp_func me_sub_cmp[6];
    me_cmp_func mb_cmp[6];
    me_cmp_func ildct_cmp[6];
    me_cmp_func frame_skip_cmp[6];

    int (*ssd_int8_vs_int16)(const int8_t *pix1, const int16_t *pix2,
                             int size);
# 268 "libavcodec/dsputil.h"
    op_pixels_func put_pixels_tab[4][4];
# 280 "libavcodec/dsputil.h"
    op_pixels_func avg_pixels_tab[4][4];
# 292 "libavcodec/dsputil.h"
    op_pixels_func put_no_rnd_pixels_tab[4][4];
# 304 "libavcodec/dsputil.h"
    op_pixels_func avg_no_rnd_pixels_tab[4][4];

    void (*put_no_rnd_pixels_l2[2])(uint8_t *block , const uint8_t *a , const uint8_t *b , int line_size, int h);
# 318 "libavcodec/dsputil.h"
    tpel_mc_func put_tpel_pixels_tab[11];
    tpel_mc_func avg_tpel_pixels_tab[11];

    qpel_mc_func put_qpel_pixels_tab[2][16];
    qpel_mc_func avg_qpel_pixels_tab[2][16];
    qpel_mc_func put_no_rnd_qpel_pixels_tab[2][16];
    qpel_mc_func avg_no_rnd_qpel_pixels_tab[2][16];
    qpel_mc_func put_mspel_pixels_tab[8];




    h264_chroma_mc_func put_h264_chroma_pixels_tab[3];
    h264_chroma_mc_func avg_h264_chroma_pixels_tab[3];

    h264_chroma_mc_func put_no_rnd_vc1_chroma_pixels_tab[3];
    h264_chroma_mc_func avg_no_rnd_vc1_chroma_pixels_tab[3];

    qpel_mc_func put_h264_qpel_pixels_tab[4][16];
    qpel_mc_func avg_h264_qpel_pixels_tab[4][16];

    qpel_mc_func put_2tap_qpel_pixels_tab[4][16];
    qpel_mc_func avg_2tap_qpel_pixels_tab[4][16];


    qpel_mc_func put_cavs_qpel_pixels_tab[2][16];
    qpel_mc_func avg_cavs_qpel_pixels_tab[2][16];
    void (*cavs_filter_lv)(uint8_t *pix, int stride, int alpha, int beta, int tc, int bs1, int bs2);
    void (*cavs_filter_lh)(uint8_t *pix, int stride, int alpha, int beta, int tc, int bs1, int bs2);
    void (*cavs_filter_cv)(uint8_t *pix, int stride, int alpha, int beta, int tc, int bs1, int bs2);
    void (*cavs_filter_ch)(uint8_t *pix, int stride, int alpha, int beta, int tc, int bs1, int bs2);
    void (*cavs_idct8_add)(uint8_t *dst, DCTELEM *block, int stride);

    me_cmp_func pix_abs[2][4];


    void (*add_bytes)(uint8_t *dst , uint8_t *src , int w);
    void (*add_bytes_l2)(uint8_t *dst , uint8_t *src1 , uint8_t *src2 , int w);
    void (*diff_bytes)(uint8_t *dst , uint8_t *src1 , uint8_t *src2 ,int w);




    void (*sub_hfyu_median_prediction)(uint8_t *dst, const uint8_t *src1, const uint8_t *src2, int w, int *left, int *left_top);
    void (*add_hfyu_median_prediction)(uint8_t *dst, const uint8_t *top, const uint8_t *diff, int w, int *left, int *left_top);
    int (*add_hfyu_left_prediction)(uint8_t *dst, const uint8_t *src, int w, int left);
    void (*add_hfyu_left_prediction_bgr32)(uint8_t *dst, const uint8_t *src, int w, int *red, int *green, int *blue, int *alpha);

    void (*add_png_paeth_prediction)(uint8_t *dst, uint8_t *src, uint8_t *top, int w, int bpp);
    void (*bswap_buf)(uint32_t *dst, const uint32_t *src, int w);

    void (*h263_v_loop_filter)(uint8_t *src, int stride, int qscale);
    void (*h263_h_loop_filter)(uint8_t *src, int stride, int qscale);

    void (*h261_loop_filter)(uint8_t *src, int stride);

    void (*x8_v_loop_filter)(uint8_t *src, int stride, int qscale);
    void (*x8_h_loop_filter)(uint8_t *src, int stride, int qscale);

    void (*vp3_idct_dc_add)(uint8_t *dest , int line_size, const DCTELEM *block );
    void (*vp3_v_loop_filter)(uint8_t *src, int stride, int *bounding_values);
    void (*vp3_h_loop_filter)(uint8_t *src, int stride, int *bounding_values);

    void (*vp6_filter_diag4)(uint8_t *dst, uint8_t *src, int stride,
                             const int16_t *h_weights,const int16_t *v_weights);


    void (*vorbis_inverse_coupling)(float *mag, float *ang, int blocksize);
    void (*ac3_downmix)(float (*samples)[256], float (*matrix)[2], int out_ch, int in_ch, int len);

    void (*lpc_compute_autocorr)(const int32_t *data, int len, int lag, double *autoc);

    void (*vector_fmul)(float *dst, const float *src, int len);
    void (*vector_fmul_reverse)(float *dst, const float *src0, const float *src1, int len);

    void (*vector_fmul_add)(float *dst, const float *src0, const float *src1, const float *src2, int len);

    void (*vector_fmul_window)(float *dst, const float *src0, const float *src1, const float *win, float add_bias, int len);

    void (*int32_to_float_fmul_scalar)(float *dst, const int *src, float mul, int len);
    void (*vector_clipf)(float *dst , const float *src , float min, float max, int len );
# 407 "libavcodec/dsputil.h"
    void (*vector_fmul_scalar)(float *dst, const float *src, float mul,
                               int len);
# 421 "libavcodec/dsputil.h"
    void (*vector_fmul_sv_scalar[2])(float *dst, const float *src,
                                     const float **sv, float mul, int len);
# 433 "libavcodec/dsputil.h"
    void (*sv_fmul_scalar[2])(float *dst, const float **sv,
                              float mul, int len);






    float (*scalarproduct_float)(const float *v1, const float *v2, int len);






    void (*butterflies_float)(float *restrict v1, float *restrict v2, int len);



    void (*float_to_int16)(int16_t *dst, const float *src, long len);
    void (*float_to_int16_interleave)(int16_t *dst, const float **src, long len, int channels);


    void (*fdct)(DCTELEM *block );
    void (*fdct248)(DCTELEM *block );


    void (*idct)(DCTELEM *block );






    void (*idct_put)(uint8_t *dest , int line_size, DCTELEM *block );





    void (*idct_add)(uint8_t *dest , int line_size, DCTELEM *block );
# 487 "libavcodec/dsputil.h"
    uint8_t idct_permutation[64];
    int idct_permutation_type;







    int (*try_8x8basis)(int16_t rem[64], int16_t weight[64], int16_t basis[64], int scale);
    void (*add_8x8basis)(int16_t rem[64], int16_t basis[64], int scale);



    void (*draw_edges)(uint8_t *buf, int wrap, int width, int height, int w);


    void (*prefetch)(void *mem, int stride, int h);

    void (*shrink[4])(uint8_t *dst, int dst_wrap, const uint8_t *src, int src_wrap, int width, int height);


    void (*mlp_filter_channel)(int32_t *state, const int32_t *coeff,
                               int firorder, int iirorder,
                               unsigned int filter_shift, int32_t mask, int blocksize,
                               int32_t *sample_buffer);


    void (*vc1_inv_trans_8x8)(DCTELEM *b);
    void (*vc1_inv_trans_8x4)(uint8_t *dest, int line_size, DCTELEM *block);
    void (*vc1_inv_trans_4x8)(uint8_t *dest, int line_size, DCTELEM *block);
    void (*vc1_inv_trans_4x4)(uint8_t *dest, int line_size, DCTELEM *block);
    void (*vc1_inv_trans_8x8_dc)(uint8_t *dest, int line_size, DCTELEM *block);
    void (*vc1_inv_trans_8x4_dc)(uint8_t *dest, int line_size, DCTELEM *block);
    void (*vc1_inv_trans_4x8_dc)(uint8_t *dest, int line_size, DCTELEM *block);
    void (*vc1_inv_trans_4x4_dc)(uint8_t *dest, int line_size, DCTELEM *block);
    void (*vc1_v_overlap)(uint8_t* src, int stride);
    void (*vc1_h_overlap)(uint8_t* src, int stride);
    void (*vc1_v_loop_filter4)(uint8_t *src, int stride, int pq);
    void (*vc1_h_loop_filter4)(uint8_t *src, int stride, int pq);
    void (*vc1_v_loop_filter8)(uint8_t *src, int stride, int pq);
    void (*vc1_h_loop_filter8)(uint8_t *src, int stride, int pq);
    void (*vc1_v_loop_filter16)(uint8_t *src, int stride, int pq);
    void (*vc1_h_loop_filter16)(uint8_t *src, int stride, int pq);



    op_pixels_func put_vc1_mspel_pixels_tab[16];
    op_pixels_func avg_vc1_mspel_pixels_tab[16];


    void (*x8_spatial_compensation[12])(uint8_t *src , uint8_t *dst, int linesize);
    void (*x8_setup_spatial_compensation)(uint8_t *src, uint8_t *dst, int linesize,
                                          int * range, int * sum, int edges);






    int32_t (*scalarproduct_int16)(int16_t *v1, int16_t *v2 , int len, int shift);






    int32_t (*scalarproduct_and_madd_int16)(int16_t *v1 , int16_t *v2, int16_t *v3, int len, int mul);


    qpel_mc_func put_rv30_tpel_pixels_tab[4][16];
    qpel_mc_func avg_rv30_tpel_pixels_tab[4][16];


    qpel_mc_func put_rv40_qpel_pixels_tab[4][16];
    qpel_mc_func avg_rv40_qpel_pixels_tab[4][16];
    h264_chroma_mc_func put_rv40_chroma_pixels_tab[3];
    h264_chroma_mc_func avg_rv40_chroma_pixels_tab[3];


    op_fill_func fill_block_tab[2];
    void (*scale_block)(const uint8_t src[64] , uint8_t *dst , int linesize);
} DSPContext;

void dsputil_static_init(void);
void dsputil_init(DSPContext* p, AVCodecContext *avctx);

int ff_check_alignment(void);





void ff_block_permute(DCTELEM *block, uint8_t *permutation, const uint8_t *scantable, int last);

void ff_set_cmp(DSPContext* c, me_cmp_func *cmp, int type);



static inline uint32_t rnd_avg32(uint32_t a, uint32_t b)
{
    return (a | b) - (((a ^ b) & ~((0x01)*0x01010101UL)) >> 1);
}

static inline uint32_t no_rnd_avg32(uint32_t a, uint32_t b)
{
    return (a & b) + (((a ^ b) & ~((0x01)*0x01010101UL)) >> 1);
}

static inline int get_penalty_factor(int lambda, int lambda2, int type)
{
    switch(type&0xFF)
    {
    default:
    case 0:
        return lambda>>7;
    case 3:
        return (3*lambda)>>(7 +1);
    case 11:
        return (4*lambda)>>(7);
    case 12:
        return (2*lambda)>>(7);
    case 2:
    case 14:
        return (2*lambda)>>7;
    case 6:
    case 4:
    case 1:
    case 10:
        return lambda2>>7;
    case 5:
        return 1;
    }
}
# 629 "libavcodec/dsputil.h"
int mm_support(void);
extern int mm_flags;

void dsputil_init_alpha(DSPContext* c, AVCodecContext *avctx);
void dsputil_init_arm(DSPContext* c, AVCodecContext *avctx);
void dsputil_init_bfin(DSPContext* c, AVCodecContext *avctx);
void dsputil_init_mlib(DSPContext* c, AVCodecContext *avctx);
void dsputil_init_mmi(DSPContext* c, AVCodecContext *avctx);
void dsputil_init_mmx(DSPContext* c, AVCodecContext *avctx);
void dsputil_init_ppc(DSPContext* c, AVCodecContext *avctx);
void dsputil_init_sh4(DSPContext* c, AVCodecContext *avctx);
void dsputil_init_vis(DSPContext* c, AVCodecContext *avctx);

void ff_dsputil_init_dwt(DSPContext *c);
void ff_cavsdsp_init(DSPContext* c, AVCodecContext *avctx);
void ff_rv30dsp_init(DSPContext* c, AVCodecContext *avctx);
void ff_rv40dsp_init(DSPContext* c, AVCodecContext *avctx);
void ff_vc1dsp_init(DSPContext* c, AVCodecContext *avctx);
void ff_intrax8dsp_init(DSPContext* c, AVCodecContext *avctx);
void ff_mlp_init(DSPContext* c, AVCodecContext *avctx);
void ff_mlp_init_x86(DSPContext* c, AVCodecContext *avctx);





static inline void emms(void)
{
    __asm__ volatile ("emms;":::"memory");
}
# 709 "libavcodec/dsputil.h"
void get_psnr(uint8_t *orig_image[3], uint8_t *coded_image[3],
              int orig_linesize[3], int coded_linesize,
              AVCodecContext *avctx);
# 734 "libavcodec/dsputil.h"
static inline void copy_block2(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)
{
    int i;
    for(i=0; i<h; i++)
    {
        ((((union unaligned_16 *) (dst))->l) = ((((const union unaligned_16 *) (src))->l)));
        dst+=dstStride;
        src+=srcStride;
    }
}

static inline void copy_block4(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)
{
    int i;
    for(i=0; i<h; i++)
    {
        ((((union unaligned_32 *) (dst))->l) = ((((const union unaligned_32 *) (src))->l)));
        dst+=dstStride;
        src+=srcStride;
    }
}

static inline void copy_block8(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)
{
    int i;
    for(i=0; i<h; i++)
    {
        ((((union unaligned_32 *) (dst))->l) = ((((const union unaligned_32 *) (src))->l)));
        ((((union unaligned_32 *) (dst+4))->l) = ((((const union unaligned_32 *) (src+4))->l)));
        dst+=dstStride;
        src+=srcStride;
    }
}

static inline void copy_block9(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)
{
    int i;
    for(i=0; i<h; i++)
    {
        ((((union unaligned_32 *) (dst))->l) = ((((const union unaligned_32 *) (src))->l)));
        ((((union unaligned_32 *) (dst+4))->l) = ((((const union unaligned_32 *) (src+4))->l)));
        dst[8]= src[8];
        dst+=dstStride;
        src+=srcStride;
    }
}

static inline void copy_block16(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)
{
    int i;
    for(i=0; i<h; i++)
    {
        ((((union unaligned_32 *) (dst))->l) = ((((const union unaligned_32 *) (src))->l)));
        ((((union unaligned_32 *) (dst+4))->l) = ((((const union unaligned_32 *) (src+4))->l)));
        ((((union unaligned_32 *) (dst+8))->l) = ((((const union unaligned_32 *) (src+8))->l)));
        ((((union unaligned_32 *) (dst+12))->l) = ((((const union unaligned_32 *) (src+12))->l)));
        dst+=dstStride;
        src+=srcStride;
    }
}

static inline void copy_block17(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)
{
    int i;
    for(i=0; i<h; i++)
    {
        ((((union unaligned_32 *) (dst))->l) = ((((const union unaligned_32 *) (src))->l)));
        ((((union unaligned_32 *) (dst+4))->l) = ((((const union unaligned_32 *) (src+4))->l)));
        ((((union unaligned_32 *) (dst+8))->l) = ((((const union unaligned_32 *) (src+8))->l)));
        ((((union unaligned_32 *) (dst+12))->l) = ((((const union unaligned_32 *) (src+12))->l)));
        dst[16]= src[16];
        dst+=dstStride;
        src+=srcStride;
    }
}
# 38 "libavcodec/mjpegdec.c" 2
# 1 "libavcodec/mjpeg.h" 1
# 37 "libavcodec/mjpeg.h"
# 1 "libavcodec/put_bits.h" 1
# 31 "libavcodec/put_bits.h"
# 1 "/usr/include/assert.h" 1 3 4
# 65 "/usr/include/assert.h" 3 4



extern void __assert_fail (__const char *__assertion, __const char *__file,
                           unsigned int __line, __const char *__function)
__attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, __const char *__file,
                                  unsigned int __line,
                                  __const char *__function)
__attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
__attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



# 32 "libavcodec/put_bits.h" 2
# 1 "./libavutil/bswap.h" 1
# 33 "libavcodec/put_bits.h" 2
# 1 "./libavutil/common.h" 1
# 34 "libavcodec/put_bits.h" 2

# 1 "./libavutil/log.h" 1
# 36 "libavcodec/put_bits.h" 2
# 1 "libavcodec/mathops.h" 1
# 38 "libavcodec/mathops.h"
# 1 "libavcodec/x86/mathops.h" 1
# 25 "libavcodec/x86/mathops.h"
# 1 "./config.h" 1
# 26 "libavcodec/x86/mathops.h" 2
# 1 "./libavutil/common.h" 1
# 27 "libavcodec/x86/mathops.h" 2
# 51 "libavcodec/x86/mathops.h"
static inline __attribute__((const)) int mid_pred(int a, int b, int c)
{
    int i=b;
    __asm__ volatile(
        "cmp    %2, %1 \n\t"
        "cmovg  %1, %0 \n\t"
        "cmovg  %2, %1 \n\t"
        "cmp    %3, %1 \n\t"
        "cmovl  %3, %1 \n\t"
        "cmp    %1, %0 \n\t"
        "cmovg  %1, %0 \n\t"
        :"+&r"(i), "+&r"(a)
        :"r"(b), "r"(c)
    );
    return i;
}
# 83 "libavcodec/x86/mathops.h"
static inline int32_t NEG_SSR32( int32_t a, int8_t s)
{
    __asm__ ("sarl %1, %0\n\t"
             : "+r" (a)
             : "ic" ((uint8_t)(-s))
            );
    return a;
}


static inline uint32_t NEG_USR32(uint32_t a, int8_t s)
{
    __asm__ ("shrl %1, %0\n\t"
             : "+r" (a)
             : "ic" ((uint8_t)(-s))
            );
    return a;
}
# 39 "libavcodec/mathops.h" 2
# 51 "libavcodec/mathops.h"
static __attribute__((always_inline)) inline int MULH(int a, int b)
{
    return ((int64_t)(a) * (int64_t)(b))>>32;
}



static __attribute__((always_inline)) inline unsigned UMULH(unsigned a, unsigned b)
{
    return ((uint64_t)(a) * (uint64_t)(b))>>32;
}
# 119 "libavcodec/mathops.h"
static inline __attribute__((const)) int sign_extend(int val, unsigned bits)
{
    return (val << (INT_BIT - bits)) >> (INT_BIT - bits);
}



static inline __attribute__((const)) unsigned zero_extend(unsigned val, unsigned bits)
{
    return (val << (INT_BIT - bits)) >> (INT_BIT - bits);
}
# 37 "libavcodec/put_bits.h" 2





typedef struct PutBitContext
{




    uint32_t bit_buf;
    int bit_left;
    uint8_t *buf, *buf_ptr, *buf_end;

    int size_in_bits;
} PutBitContext;







static inline void init_put_bits(PutBitContext *s, uint8_t *buffer, int buffer_size)
{
    if(buffer_size < 0)
    {
        buffer_size = 0;
        buffer = ((void *)0);
    }

    s->size_in_bits= 8*buffer_size;
    s->buf = buffer;
    s->buf_end = s->buf + buffer_size;





    s->buf_ptr = s->buf;
    s->bit_left=32;
    s->bit_buf=0;

}




static inline int put_bits_count(PutBitContext *s)
{



    return (s->buf_ptr - s->buf) * 8 + 32 - s->bit_left;

}




static inline void flush_put_bits(PutBitContext *s)
{




    s->bit_buf<<= s->bit_left;

    while (s->bit_left < 32)
    {





        *s->buf_ptr++=s->bit_buf >> 24;
        s->bit_buf<<=8;

        s->bit_left+=8;
    }
    s->bit_left=32;
    s->bit_buf=0;

}
# 128 "libavcodec/put_bits.h"
void align_put_bits(PutBitContext *s);






void ff_put_string(PutBitContext *pb, const char *string, int terminate_string);






void ff_copy_bits(PutBitContext *pb, const uint8_t *src, int length);






static inline void put_bits(PutBitContext *s, int n, unsigned int value)

{
    unsigned int bit_buf;
    int bit_left;


    ((n <= 31 && value < (1U << n)) ? (void) (0) : (__assert_fail ("n <= 31 && value < (1U << n)", "libavcodec/put_bits.h", 156, __PRETTY_FUNCTION__), (void) (0)));

    bit_buf = s->bit_buf;
    bit_left = s->bit_left;
# 178 "libavcodec/put_bits.h"
    if (n < bit_left)
    {
        bit_buf = (bit_buf<<n) | value;
        bit_left-=n;
    }
    else
    {
        bit_buf<<=bit_left;
        bit_buf |= value >> (n - bit_left);





        *(uint32_t *)s->buf_ptr = bswap_32(bit_buf);

        s->buf_ptr+=4;
        bit_left+=32 - n;
        bit_buf = value;
    }


    s->bit_buf = bit_buf;
    s->bit_left = bit_left;
}
# 265 "libavcodec/put_bits.h"
static inline void put_sbits(PutBitContext *pb, int n, int32_t value)
{
    ((n >= 0 && n <= 31) ? (void) (0) : (__assert_fail ("n >= 0 && n <= 31", "libavcodec/put_bits.h", 267, __PRETTY_FUNCTION__), (void) (0)));

    put_bits(pb, n, value & ((1<<n)-1));
}




static void __attribute__((unused)) put_bits32(PutBitContext *s, uint32_t value)
{
    int lo = value & 0xffff;
    int hi = value >> 16;




    put_bits(s, 16, hi);
    put_bits(s, 16, lo);

}





static inline uint8_t* put_bits_ptr(PutBitContext *s)
{



    return s->buf_ptr;

}





static inline void skip_put_bytes(PutBitContext *s, int n)
{
    (((put_bits_count(s)&7)==0) ? (void) (0) : (__assert_fail ("(put_bits_count(s)&7)==0", "libavcodec/put_bits.h", 307, __PRETTY_FUNCTION__), (void) (0)));




    ((s->bit_left==32) ? (void) (0) : (__assert_fail ("s->bit_left==32", "libavcodec/put_bits.h", 312, __PRETTY_FUNCTION__), (void) (0)));
    s->buf_ptr += n;

}






static inline void skip_put_bits(PutBitContext *s, int n)
{



    s->bit_left -= n;
    s->buf_ptr-= 4*(s->bit_left>>5);
    s->bit_left &= 31;

}






static inline void set_put_bits_buffer_size(PutBitContext *s, int size)
{
    s->buf_end= s->buf + size;
}
# 38 "libavcodec/mjpeg.h" 2



typedef enum
{

    SOF0 = 0xc0,
    SOF1 = 0xc1,
    SOF2 = 0xc2,
    SOF3 = 0xc3,

    SOF5 = 0xc5,
    SOF6 = 0xc6,
    SOF7 = 0xc7,
    JPG = 0xc8,
    SOF9 = 0xc9,
    SOF10 = 0xca,
    SOF11 = 0xcb,

    SOF13 = 0xcd,
    SOF14 = 0xce,
    SOF15 = 0xcf,

    DHT = 0xc4,

    DAC = 0xcc,


    RST0 = 0xd0,
    RST1 = 0xd1,
    RST2 = 0xd2,
    RST3 = 0xd3,
    RST4 = 0xd4,
    RST5 = 0xd5,
    RST6 = 0xd6,
    RST7 = 0xd7,

    SOI = 0xd8,
    EOI = 0xd9,
    SOS = 0xda,
    DQT = 0xdb,
    DNL = 0xdc,
    DRI = 0xdd,
    DHP = 0xde,
    EXP = 0xdf,

    APP0 = 0xe0,
    APP1 = 0xe1,
    APP2 = 0xe2,
    APP3 = 0xe3,
    APP4 = 0xe4,
    APP5 = 0xe5,
    APP6 = 0xe6,
    APP7 = 0xe7,
    APP8 = 0xe8,
    APP9 = 0xe9,
    APP10 = 0xea,
    APP11 = 0xeb,
    APP12 = 0xec,
    APP13 = 0xed,
    APP14 = 0xee,
    APP15 = 0xef,

    JPG0 = 0xf0,
    JPG1 = 0xf1,
    JPG2 = 0xf2,
    JPG3 = 0xf3,
    JPG4 = 0xf4,
    JPG5 = 0xf5,
    JPG6 = 0xf6,
    SOF48 = 0xf7,
    LSE = 0xf8,
    JPG9 = 0xf9,
    JPG10 = 0xfa,
    JPG11 = 0xfb,
    JPG12 = 0xfc,
    JPG13 = 0xfd,

    COM = 0xfe,

    TEM = 0x01,


} JPEG_MARKER;

static inline void put_marker(PutBitContext *p, int code)
{
    put_bits(p, 8, 0xff);
    put_bits(p, 8, code);
}
# 140 "libavcodec/mjpeg.h"
extern const uint8_t ff_mjpeg_bits_dc_luminance[];
extern const uint8_t ff_mjpeg_val_dc[];

extern const uint8_t ff_mjpeg_bits_dc_chrominance[];

extern const uint8_t ff_mjpeg_bits_ac_luminance[];
extern const uint8_t ff_mjpeg_val_ac_luminance[];

extern const uint8_t ff_mjpeg_bits_ac_chrominance[];
extern const uint8_t ff_mjpeg_val_ac_chrominance[];

void ff_mjpeg_build_huffman_codes(uint8_t *huff_size, uint16_t *huff_code,
                                  const uint8_t *bits_table,
                                  const uint8_t *val_table);
# 39 "libavcodec/mjpegdec.c" 2
# 1 "libavcodec/mjpegdec.h" 1
# 33 "libavcodec/mjpegdec.h"
# 1 "libavcodec/get_bits.h" 1
# 31 "libavcodec/get_bits.h"
# 1 "/usr/include/assert.h" 1 3 4
# 65 "/usr/include/assert.h" 3 4



extern void __assert_fail (__const char *__assertion, __const char *__file,
                           unsigned int __line, __const char *__function)
__attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, __const char *__file,
                                  unsigned int __line,
                                  __const char *__function)
__attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
__attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



# 32 "libavcodec/get_bits.h" 2
# 54 "libavcodec/get_bits.h"
typedef struct GetBitContext
{
    const uint8_t *buffer, *buffer_end;

    int index;
# 68 "libavcodec/get_bits.h"
    int size_in_bits;
} GetBitContext;



typedef struct VLC
{
    int bits;
    int16_t (*table)[2];
    int table_size, table_allocated;
} VLC;

typedef struct RL_VLC_ELEM
{
    int16_t level;
    int8_t len;
    uint8_t run;
} RL_VLC_ELEM;
# 184 "libavcodec/get_bits.h"
static inline int get_bits_count(const GetBitContext *s)
{
    return s->index;
}

static inline void skip_bits_long(GetBitContext *s, int n)
{
    s->index += n;
}
# 336 "libavcodec/get_bits.h"
static inline int get_xbits(GetBitContext *s, int n)
{
    register int sign;
    register int32_t cache;
    unsigned int re_index= (s)->index;
    int re_cache= 0;
    re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(s)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);
    cache = ((uint32_t)re_cache);
    sign=(~cache)>>31;
    re_index += (n);
    (s)->index= re_index;
    return (NEG_USR32(sign ^ cache, n) ^ sign) - sign;
}

static inline int get_sbits(GetBitContext *s, int n)
{
    register int tmp;
    unsigned int re_index= (s)->index;
    int re_cache= 0;
    re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(s)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);
    tmp= NEG_SSR32(re_cache, n);
    re_index += (n);
    (s)->index= re_index;
    return tmp;
}





static inline unsigned int get_bits(GetBitContext *s, int n)
{
    register int tmp;
    unsigned int re_index= (s)->index;
    int re_cache= 0;
    re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(s)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);
    tmp= NEG_USR32(re_cache, n);
    re_index += (n);
    (s)->index= re_index;
    return tmp;
}





static inline unsigned int show_bits(GetBitContext *s, int n)
{
    register int tmp;
    unsigned int re_index= (s)->index;
    int re_cache= 0;
    re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(s)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);
    tmp= NEG_USR32(re_cache, n);

    return tmp;
}

static inline void skip_bits(GetBitContext *s, int n)
{

    unsigned int re_index= (s)->index;
    int re_cache= 0;
    re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(s)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);
    re_index += (n);
    (s)->index= re_index;
}

static inline unsigned int get_bits1(GetBitContext *s)
{

    unsigned int index= s->index;
    uint8_t result= s->buffer[ index>>3 ];




    result<<= (index&0x07);
    result>>= 8 - 1;

    index++;
    s->index= index;

    return result;



}

static inline unsigned int show_bits1(GetBitContext *s)
{
    return show_bits(s, 1);
}

static inline void skip_bits1(GetBitContext *s)
{
    skip_bits(s, 1);
}




static inline unsigned int get_bits_long(GetBitContext *s, int n)
{
    if(n<=25) return get_bits(s, n);
    else
    {




        int ret= get_bits(s, 16) << (n-16);
        return ret | get_bits(s, n-16);

    }
}




static inline int get_sbits_long(GetBitContext *s, int n)
{
    return sign_extend(get_bits_long(s, n), n);
}




static inline unsigned int show_bits_long(GetBitContext *s, int n)
{
    if(n<=25) return show_bits(s, n);
    else
    {
        GetBitContext gb= *s;
        return get_bits_long(&gb, n);
    }
}

static inline int check_marker(GetBitContext *s, const char *msg)
{
    int bit= get_bits1(s);
    if(!bit)
        av_log(((void *)0), 32, "Marker bit missing %s\n", msg);

    return bit;
}
# 473 "libavcodec/get_bits.h"
static inline void init_get_bits(GetBitContext *s,
                                 const uint8_t *buffer, int bit_size)
{
    int buffer_size= (bit_size+7)>>3;
    if(buffer_size < 0 || bit_size < 0)
    {
        buffer_size = bit_size = 0;
        buffer = ((void *)0);
    }

    s->buffer= buffer;
    s->size_in_bits= bit_size;
    s->buffer_end= buffer + buffer_size;

    s->index=0;
# 496 "libavcodec/get_bits.h"
}

static inline void align_get_bits(GetBitContext *s)
{
    int n= (-get_bits_count(s)) & 7;
    if(n) skip_bits(s, n);
}
# 513 "libavcodec/get_bits.h"
int init_vlc_sparse(VLC *vlc, int nb_bits, int nb_codes,
                    const void *bits, int bits_wrap, int bits_size,
                    const void *codes, int codes_wrap, int codes_size,
                    const void *symbols, int symbols_wrap, int symbols_size,
                    int flags);


void free_vlc(VLC *vlc);
# 603 "libavcodec/get_bits.h"
static __attribute__((always_inline)) inline int get_vlc2(GetBitContext *s, int16_t (*table)[2],
        int bits, int max_depth)
{
    int code;

    unsigned int re_index= (s)->index;
    int re_cache= 0;
    re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(s)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);

    {
        int n, nb_bits;
        unsigned int index;
        index= NEG_USR32(re_cache, bits);
        code = table[index][0];
        n = table[index][1];
        if(max_depth > 1 && n < 0)
        {
            re_index += (bits);
            re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(s)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);
            nb_bits = -n;
            index= NEG_USR32(re_cache, nb_bits) + code;
            code = table[index][0];
            n = table[index][1];
            if(max_depth > 2 && n < 0)
            {
                re_index += (nb_bits);
                re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(s)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);
                nb_bits = -n;
                index= NEG_USR32(re_cache, nb_bits) + code;
                code = table[index][0];
                n = table[index][1];
            }
        }
        {
            re_cache <<= (n);
            re_index += (n);
        }
    }

    (s)->index= re_index;
    return code;
}
# 670 "libavcodec/get_bits.h"
static inline int decode012(GetBitContext *gb)
{
    int n;
    n = get_bits1(gb);
    if (n == 0)
        return 0;
    else
        return get_bits1(gb) + 1;
}

static inline int decode210(GetBitContext *gb)
{
    if (get_bits1(gb))
        return 0;
    else
        return 2 - get_bits1(gb);
}

static inline int get_bits_left(GetBitContext *gb)
{
    return gb->size_in_bits - get_bits_count(gb);
}
# 34 "libavcodec/mjpegdec.h" 2




typedef struct MJpegDecodeContext
{
    AVCodecContext *avctx;
    GetBitContext gb;

    int start_code;
    int buffer_size;
    uint8_t *buffer;

    int16_t quant_matrixes[4][64];
    VLC vlcs[2][4];
    int qscale[4];

    int org_height;
    int first_picture;
    int interlaced;
    int bottom_field;
    int lossless;
    int ls;
    int progressive;
    int rgb;
    int rct;
    int pegasus_rct;
    int bits;

    int maxval;
    int near;
    int t1,t2,t3;
    int reset;

    int width, height;
    int mb_width, mb_height;
    int nb_components;
    int block_stride[4];
    int component_id[4];
    int h_count[4];
    int v_count[4];
    int comp_index[4];
    int dc_index[4];
    int ac_index[4];
    int nb_blocks[4];
    int h_scount[4];
    int v_scount[4];
    int h_max, v_max;
    int quant_index[4];
    int last_dc[4];
    AVFrame picture;
    int got_picture;
    int linesize[4];
    int8_t *qscale_table;
    DCTELEM __attribute__ ((aligned (16))) block[64];
    DCTELEM (*blocks[4])[64];
    uint8_t *last_nnz[4];
    uint64_t coefs_finished[4];
    ScanTable scantable;
    DSPContext dsp;

    int restart_interval;
    int restart_count;

    int buggy_avid;
    int cs_itu601;
    int interlace_polarity;

    int mjpb_skiptosod;

    int cur_scan;
    int flipped;

    uint16_t (*ljpeg_buffer)[4];
    unsigned int ljpeg_buffer_size;
} MJpegDecodeContext;

int ff_mjpeg_decode_init(AVCodecContext *avctx);
int ff_mjpeg_decode_end(AVCodecContext *avctx);
int ff_mjpeg_decode_frame(AVCodecContext *avctx,
                          void *data, int *data_size,
                          AVPacket *avpkt);
int ff_mjpeg_decode_dqt(MJpegDecodeContext *s);
int ff_mjpeg_decode_dht(MJpegDecodeContext *s);
int ff_mjpeg_decode_sof(MJpegDecodeContext *s);
int ff_mjpeg_decode_sos(MJpegDecodeContext *s);
# 40 "libavcodec/mjpegdec.c" 2
# 1 "libavcodec/jpeglsdec.h" 1
# 37 "libavcodec/jpeglsdec.h"
int ff_jpegls_decode_lse(MJpegDecodeContext *s);

int ff_jpegls_decode_picture(MJpegDecodeContext *s, int near, int point_transform, int ilv);
# 41 "libavcodec/mjpegdec.c" 2


static int build_vlc(VLC *vlc, const uint8_t *bits_table, const uint8_t *val_table,
                     int nb_codes, int use_static, int is_ac)
{
    uint8_t huff_size[256+16];
    uint16_t huff_code[256+16];

    ((nb_codes <= 256) ? (void) (0) : (__assert_fail ("nb_codes <= 256", "libavcodec/mjpegdec.c", 49, __PRETTY_FUNCTION__), (void) (0)));

    memset(huff_size, 0, sizeof(huff_size));
    ff_mjpeg_build_huffman_codes(huff_size, huff_code, bits_table, val_table);

    if(is_ac)
    {
        memmove(huff_size+16, huff_size, sizeof(uint8_t)*nb_codes);
        memmove(huff_code+16, huff_code, sizeof(uint16_t)*nb_codes);
        memset(huff_size, 0, sizeof(uint8_t)*16);
        memset(huff_code, 0, sizeof(uint16_t)*16);
        nb_codes += 16;
    }

    return init_vlc_sparse(vlc, 9, nb_codes, huff_size, 1, 1, huff_code, 2, 2, ((void *)0), 0, 0, use_static);
}

static void build_basic_mjpeg_vlc(MJpegDecodeContext * s)
{
    build_vlc(&s->vlcs[0][0], ff_mjpeg_bits_dc_luminance,
              ff_mjpeg_val_dc, 12, 0, 0);
    build_vlc(&s->vlcs[0][1], ff_mjpeg_bits_dc_chrominance,
              ff_mjpeg_val_dc, 12, 0, 0);
    build_vlc(&s->vlcs[1][0], ff_mjpeg_bits_ac_luminance,
              ff_mjpeg_val_ac_luminance, 251, 0, 1);
    build_vlc(&s->vlcs[1][1], ff_mjpeg_bits_ac_chrominance,
              ff_mjpeg_val_ac_chrominance, 251, 0, 1);
}

int ff_mjpeg_decode_init(AVCodecContext *avctx)
{
    MJpegDecodeContext *s = avctx->priv_data;

    s->avctx = avctx;
    dsputil_init(&s->dsp, avctx);
    ff_init_scantable(s->dsp.idct_permutation, &s->scantable, ff_zigzag_direct);
    s->buffer_size = 0;
    s->buffer = ((void *)0);
    s->start_code = -1;
    s->first_picture = 1;
    s->org_height = avctx->coded_height;
    avctx->chroma_sample_location = AVCHROMA_LOC_CENTER;

    build_basic_mjpeg_vlc(s);

    if (avctx->flags & 0x1000)
    {
        av_log(avctx, 32, "mjpeg: using external huffman table\n");
        init_get_bits(&s->gb, avctx->extradata, avctx->extradata_size*8);
        if (ff_mjpeg_decode_dht(s))
        {
            av_log(avctx, 16, "mjpeg: error using external huffman table, switching back to internal\n");
            build_basic_mjpeg_vlc(s);
        }
    }
    if (avctx->extradata_size > 9 &&
            (((const union unaligned_32 *) (avctx->extradata + 4))->l) == ('f' | ('i' << 8) | ('e' << 16) | ('l' << 24)))
    {
        if (avctx->extradata[9] == 6)
        {
            s->interlace_polarity = 1;
            av_log(avctx, 48, "mjpeg bottom field first\n");
        }
    }
    if (avctx->codec->id == CODEC_ID_AMV)
        s->flipped = 1;

    return 0;
}



int ff_mjpeg_decode_dqt(MJpegDecodeContext *s)
{
    int len, index, i, j;

    len = get_bits(&s->gb, 16) - 2;

    while (len >= 65)
    {

        if (get_bits(&s->gb, 4) != 0)
        {
            av_log(s->avctx, 16, "dqt: 16bit precision\n");
            return -1;
        }
        index = get_bits(&s->gb, 4);
        if (index >= 4)
            return -1;
        av_log(s->avctx, 48, "index=%d\n", index);

        for(i=0; i<64; i++)
        {
            j = s->scantable.permutated[i];
            s->quant_matrixes[index][j] = get_bits(&s->gb, 8);
        }


        s->qscale[index]= ((s->quant_matrixes[index][s->scantable.permutated[1]]) > (s->quant_matrixes[index][s->scantable.permutated[8]]) ? (s->quant_matrixes[index][s->scantable.permutated[1]]) : (s->quant_matrixes[index][s->scantable.permutated[8]])) >> 1;


        av_log(s->avctx, 48, "qscale[%d]: %d\n", index, s->qscale[index]);
        len -= 65;
    }

    return 0;
}


int ff_mjpeg_decode_dht(MJpegDecodeContext *s)
{
    int len, index, i, class, n, v, code_max;
    uint8_t bits_table[17];
    uint8_t val_table[256];

    len = get_bits(&s->gb, 16) - 2;

    while (len > 0)
    {
        if (len < 17)
            return -1;
        class = get_bits(&s->gb, 4);
        if (class >= 2)
            return -1;
        index = get_bits(&s->gb, 4);
        if (index >= 4)
            return -1;
        n = 0;
        for(i=1; i<=16; i++)
        {
            bits_table[i] = get_bits(&s->gb, 8);
            n += bits_table[i];
        }
        len -= 17;
        if (len < n || n > 256)
            return -1;

        code_max = 0;
        for(i=0; i<n; i++)
        {
            v = get_bits(&s->gb, 8);
            if (v > code_max)
                code_max = v;
            val_table[i] = v;
        }
        len -= n;


        free_vlc(&s->vlcs[class][index]);
        av_log(s->avctx, 48, "class=%d index=%d nb_codes=%d\n",
               class, index, code_max + 1);
        if(build_vlc(&s->vlcs[class][index], bits_table, val_table, code_max + 1, 0, class > 0) < 0)
        {
            return -1;
        }
    }
    return 0;
}

int ff_mjpeg_decode_sof(MJpegDecodeContext *s)
{
    int len, nb_components, i, width, height, pix_fmt_id;


    len = get_bits(&s->gb, 16);
    s->bits= get_bits(&s->gb, 8);

    if(s->pegasus_rct) s->bits=9;
    if(s->bits==9 && !s->pegasus_rct) s->rct=1;

    if (s->bits != 8 && !s->lossless)
    {
        av_log(s->avctx, 16, "only 8 bits/component accepted\n");
        return -1;
    }

    height = get_bits(&s->gb, 16);
    width = get_bits(&s->gb, 16);


    if(s->interlaced && s->width == width && s->height == height + 1)
        height= s->height;

    av_log(s->avctx, 48, "sof0: picture: %dx%d\n", width, height);
    if(avcodec_check_dimensions(s->avctx, width, height))
        return -1;

    nb_components = get_bits(&s->gb, 8);
    if (nb_components <= 0 ||
            nb_components > 4)
        return -1;
    if (s->ls && !(s->bits <= 8 || nb_components == 1))
    {
        av_log(s->avctx, 16, "only <= 8 bits/component or 16-bit gray accepted for JPEG-LS\n");
        return -1;
    }
    s->nb_components = nb_components;
    s->h_max = 1;
    s->v_max = 1;
    for(i=0; i<nb_components; i++)
    {

        s->component_id[i] = get_bits(&s->gb, 8) - 1;
        s->h_count[i] = get_bits(&s->gb, 4);
        s->v_count[i] = get_bits(&s->gb, 4);

        if (s->h_count[i] > s->h_max)
            s->h_max = s->h_count[i];
        if (s->v_count[i] > s->v_max)
            s->v_max = s->v_count[i];
        s->quant_index[i] = get_bits(&s->gb, 8);
        if (s->quant_index[i] >= 4)
            return -1;
        av_log(s->avctx, 48, "component %d %d:%d id: %d quant:%d\n", i, s->h_count[i],
               s->v_count[i], s->component_id[i], s->quant_index[i]);
    }

    if(s->ls && (s->h_max > 1 || s->v_max > 1))
    {
        av_log(s->avctx, 16, "Subsampling in JPEG-LS is not supported.\n");
        return -1;
    }

    if(s->v_max==1 && s->h_max==1 && s->lossless==1) s->rgb=1;



    if (width != s->width || height != s->height)
    {
        av_freep(&s->qscale_table);

        s->width = width;
        s->height = height;
        s->interlaced = 0;


        if (s->first_picture &&
                s->org_height != 0 &&
                s->height < ((s->org_height * 3) / 4))
        {
            s->interlaced = 1;
            s->bottom_field = s->interlace_polarity;
            s->picture.interlaced_frame = 1;
            s->picture.top_field_first = !s->interlace_polarity;
            height *= 2;
        }

        avcodec_set_dimensions(s->avctx, width, height);

        s->qscale_table= av_mallocz((s->width+15)/16);

        s->first_picture = 0;
    }

    if(s->interlaced && (s->bottom_field == !s->interlace_polarity))
        return 0;


    pix_fmt_id = (s->h_count[0] << 28) | (s->v_count[0] << 24) |
                 (s->h_count[1] << 20) | (s->v_count[1] << 16) |
                 (s->h_count[2] << 12) | (s->v_count[2] << 8) |
                 (s->h_count[3] << 4) | s->v_count[3];
    av_log(s->avctx, 48, "pix fmt id %x\n", pix_fmt_id);

    if(!(pix_fmt_id & 0xD0D0D0D0))
        pix_fmt_id-= (pix_fmt_id & 0xF0F0F0F0)>>1;
    if(!(pix_fmt_id & 0x0D0D0D0D))
        pix_fmt_id-= (pix_fmt_id & 0x0F0F0F0F)>>1;

    switch(pix_fmt_id)
    {
    case 0x11111100:
        if(s->rgb)
        {
            s->avctx->pix_fmt = PIX_FMT_BGRA;
        }
        else
            s->avctx->pix_fmt = s->cs_itu601 ? PIX_FMT_YUV444P : PIX_FMT_YUVJ444P;
        ((s->nb_components==3) ? (void) (0) : (__assert_fail ("s->nb_components==3", "libavcodec/mjpegdec.c", 307, __PRETTY_FUNCTION__), (void) (0)));
        break;
    case 0x11000000:
        s->avctx->pix_fmt = PIX_FMT_GRAY8;
        break;
    case 0x12111100:
        s->avctx->pix_fmt = s->cs_itu601 ? PIX_FMT_YUV440P : PIX_FMT_YUVJ440P;
        break;
    case 0x21111100:
        s->avctx->pix_fmt = s->cs_itu601 ? PIX_FMT_YUV422P : PIX_FMT_YUVJ422P;
        break;
    case 0x22111100:
        s->avctx->pix_fmt = s->cs_itu601 ? PIX_FMT_YUV420P : PIX_FMT_YUVJ420P;
        break;
    default:
        av_log(s->avctx, 16, "Unhandled pixel format 0x%x\n", pix_fmt_id);
        return -1;
    }
    if(s->ls)
    {
        if(s->nb_components > 1)
            s->avctx->pix_fmt = PIX_FMT_RGB24;
        else if(s->bits <= 8)
            s->avctx->pix_fmt = PIX_FMT_GRAY8;
        else
            s->avctx->pix_fmt = PIX_FMT_GRAY16LE;
    }

    if(s->picture.data[0])
        s->avctx->release_buffer(s->avctx, &s->picture);

    s->picture.reference= 0;
    if(s->avctx->get_buffer(s->avctx, &s->picture) < 0)
    {
        av_log(s->avctx, 16, "get_buffer() failed\n");
        return -1;
    }
    s->picture.pict_type= 1;
    s->picture.key_frame= 1;
    s->got_picture = 1;

    for(i=0; i<3; i++)
    {
        s->linesize[i]= s->picture.linesize[i] << s->interlaced;
    }



    if (len != (8+(3*nb_components)))
    {
        av_log(s->avctx, 48, "decode_sof0: error, len(%d) mismatch\n", len);
    }


    if(s->progressive)
    {
        int bw = (width + s->h_max*8-1) / (s->h_max*8);
        int bh = (height + s->v_max*8-1) / (s->v_max*8);
        for(i=0; i<s->nb_components; i++)
        {
            int size = bw * bh * s->h_count[i] * s->v_count[i];
            av_freep(&s->blocks[i]);
            av_freep(&s->last_nnz[i]);
            s->blocks[i] = av_malloc(size * sizeof(**s->blocks));
            s->last_nnz[i] = av_mallocz(size * sizeof(**s->last_nnz));
            s->block_stride[i] = bw * s->h_count[i];
        }
        memset(s->coefs_finished, 0, sizeof(s->coefs_finished));
    }
    return 0;
}

static inline int mjpeg_decode_dc(MJpegDecodeContext *s, int dc_index)
{
    int code;
    code = get_vlc2(&s->gb, s->vlcs[0][dc_index].table, 9, 2);
    if (code < 0)
    {
        av_log(s->avctx, 24, "mjpeg_decode_dc: bad vlc: %d:%d (%p)\n", 0, dc_index,
               &s->vlcs[0][dc_index]);
        return 0xffff;
    }

    if(code)
        return get_xbits(&s->gb, code);
    else
        return 0;
}


static int decode_block(MJpegDecodeContext *s, DCTELEM *block,
                        int component, int dc_index, int ac_index, int16_t *quant_matrix)
{
    int code, i, j, level, val;


    val = mjpeg_decode_dc(s, dc_index);
    if (val == 0xffff)
    {
        av_log(s->avctx, 16, "error dc\n");
        return -1;
    }
    val = val * quant_matrix[0] + s->last_dc[component];
    s->last_dc[component] = val;
    block[0] = val;

    i = 0;
    {
        unsigned int re_index= (&s->gb)->index;
        int re_cache= 0;
        for(;;)
        {
            re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(&s->gb)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);;
            {
                int n, nb_bits;
                unsigned int index;
                index= NEG_USR32(re_cache, 9);
                code = s->vlcs[1][ac_index].table[index][0];
                n = s->vlcs[1][ac_index].table[index][1];
                if(2 > 1 && n < 0)
                {
                    re_index += (9);
                    re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(&s->gb)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);
                    nb_bits = -n;
                    index= NEG_USR32(re_cache, nb_bits) + code;
                    code = s->vlcs[1][ac_index].table[index][0];
                    n = s->vlcs[1][ac_index].table[index][1];
                    if(2 > 2 && n < 0)
                    {
                        re_index += (nb_bits);
                        re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(&s->gb)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);
                        nb_bits = -n;
                        index= NEG_USR32(re_cache, nb_bits) + code;
                        code = s->vlcs[1][ac_index].table[index][0];
                        n = s->vlcs[1][ac_index].table[index][1];
                    }
                }
                {
                    re_cache <<= (n);
                    re_index += (n);
                }
            }


            if (code == 0x10)
                break;
            i += ((unsigned)code) >> 4;
            if(code != 0x100)
            {
                code &= 0xf;
                if(code > 25 - 16)
                {
                    re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(&s->gb)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);
                }
                {
                    int cache=((uint32_t)re_cache);
                    int sign=(~cache)>>31;
                    level = (NEG_USR32(sign ^ cache,code) ^ sign) - sign;
                }

                re_index += (code);

                if (i >= 63)
                {
                    if(i == 63)
                    {
                        j = s->scantable.permutated[63];
                        block[j] = level * quant_matrix[j];
                        break;
                    }
                    av_log(s->avctx, 16, "error count: %d\n", i);
                    return -1;
                }
                j = s->scantable.permutated[i];
                block[j] = level * quant_matrix[j];
            }
        }
        (&s->gb)->index= re_index;
    }

    return 0;
}

static int decode_dc_progressive(MJpegDecodeContext *s, DCTELEM *block, int component,
                                 int dc_index, int16_t *quant_matrix, int Al)
{
    int val;
    s->dsp.clear_block(block);
    val = mjpeg_decode_dc(s, dc_index);
    if (val == 0xffff)
    {
        av_log(s->avctx, 16, "error dc\n");
        return -1;
    }
    val = (val * quant_matrix[0] << Al) + s->last_dc[component];
    s->last_dc[component] = val;
    block[0] = val;
    return 0;
}


static int decode_block_progressive(MJpegDecodeContext *s, DCTELEM *block, uint8_t *last_nnz,
                                    int ac_index, int16_t *quant_matrix,
                                    int ss, int se, int Al, int *EOBRUN)
{
    int code, i, j, level, val, run;

    if(*EOBRUN)
    {
        (*EOBRUN)--;
        return 0;
    }
    {
        unsigned int re_index= (&s->gb)->index;
        int re_cache= 0;
        for(i=ss;; i++)
        {
            re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(&s->gb)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);;
            {
                int n, nb_bits;
                unsigned int index;
                index= NEG_USR32(re_cache, 9);
                code = s->vlcs[1][ac_index].table[index][0];
                n = s->vlcs[1][ac_index].table[index][1];
                if(2 > 1 && n < 0)
                {
                    re_index += (9);
                    re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(&s->gb)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);
                    nb_bits = -n;
                    index= NEG_USR32(re_cache, nb_bits) + code;
                    code = s->vlcs[1][ac_index].table[index][0];
                    n = s->vlcs[1][ac_index].table[index][1];
                    if(2 > 2 && n < 0)
                    {
                        re_index += (nb_bits);
                        re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(&s->gb)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);
                        nb_bits = -n;
                        index= NEG_USR32(re_cache, nb_bits) + code;
                        code = s->vlcs[1][ac_index].table[index][0];
                        n = s->vlcs[1][ac_index].table[index][1];
                    }
                }
                {
                    re_cache <<= (n);
                    re_index += (n);
                }
            }

            code -= 16;
            if(code & 0xF)
            {
                i += ((unsigned) code) >> 4;
                code &= 0xf;
                if(code > 25 - 16)
                {
                    re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(&s->gb)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);
                }
                {
                    int cache=((uint32_t)re_cache);
                    int sign=(~cache)>>31;
                    level = (NEG_USR32(sign ^ cache,code) ^ sign) - sign;
                }

                re_index += (code);

                if (i >= se)
                {
                    if(i == se)
                    {
                        j = s->scantable.permutated[se];
                        block[j] = level * quant_matrix[j] << Al;
                        break;
                    }
                    av_log(s->avctx, 16, "error count: %d\n", i);
                    return -1;
                }
                j = s->scantable.permutated[i];
                block[j] = level * quant_matrix[j] << Al;
            }
            else
            {
                run = ((unsigned) code) >> 4;
                if(run == 0xF)
                {
                    i += 15;
                }
                else
                {
                    val = run;
                    run = (1 << run);
                    re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(&s->gb)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);;
                    run += (((uint32_t)re_cache) >> (32 - val)) & (run - 1);
                    if(val)
                        re_index += (val);;
                    *EOBRUN = run - 1;
                    break;
                }
            }
        }
        (&s->gb)->index= re_index;
    }
    if(i > *last_nnz)
        *last_nnz = i;
    return 0;
}
# 553 "libavcodec/mjpegdec.c"
static int decode_block_refinement(MJpegDecodeContext *s, DCTELEM *block, uint8_t *last_nnz,
                                   int ac_index, int16_t *quant_matrix,
                                   int ss, int se, int Al, int *EOBRUN)
{
    int code, i=ss, j, sign, val, run;
    int last = ((se) > (*last_nnz) ? (*last_nnz) : (se));

    unsigned int re_index= (&s->gb)->index;
    int re_cache= 0;;
    if(*EOBRUN)
        (*EOBRUN)--;
    else
    {
        for(;; i++)
        {
            re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(&s->gb)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);;
            {
                int n, nb_bits;
                unsigned int index;
                index= NEG_USR32(re_cache, 9);
                code = s->vlcs[1][ac_index].table[index][0];
                n = s->vlcs[1][ac_index].table[index][1];
                if(2 > 1 && n < 0)
                {
                    re_index += (9);
                    re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(&s->gb)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);
                    nb_bits = -n;
                    index= NEG_USR32(re_cache, nb_bits) + code;
                    code = s->vlcs[1][ac_index].table[index][0];
                    n = s->vlcs[1][ac_index].table[index][1];
                    if(2 > 2 && n < 0)
                    {
                        re_index += (nb_bits);
                        re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(&s->gb)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);
                        nb_bits = -n;
                        index= NEG_USR32(re_cache, nb_bits) + code;
                        code = s->vlcs[1][ac_index].table[index][0];
                        n = s->vlcs[1][ac_index].table[index][1];
                    }
                }
                {
                    re_cache <<= (n);
                    re_index += (n);
                }
            }

            code -= 16;
            if(code & 0xF)
            {
                run = ((unsigned) code) >> 4;
                re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(&s->gb)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);;
                val = NEG_USR32(re_cache, 1);
                re_index += (1);;
                for(;; i++)
                {
                    if(i > last)
                    {
                        i += run;
                        if(i > se)
                        {
                            av_log(s->avctx, 16, "error count: %d\n", i);
                            return -1;
                        }
                        break;
                    }
                    j = s->scantable.permutated[i];
                    if(block[j])
                    {
                        re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(&s->gb)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);;
                        sign = block[j]>>15;
                        block[j] += NEG_USR32(re_cache, 1) * ((quant_matrix[j]^sign)-sign) << Al;
                        re_index += (1);;
                    }
                    else if(run-- == 0) break;
                };
                j = s->scantable.permutated[i];
                val--;
                block[j] = ((quant_matrix[j]^val)-val) << Al;
                if(i == se)
                {
                    if(i > *last_nnz)
                        *last_nnz = i;
                    (&s->gb)->index= re_index;
                    return 0;
                }
            }
            else
            {
                run = ((unsigned) code) >> 4;
                if(run == 0xF)
                {
                    for(;; i++)
                    {
                        if(i > last)
                        {
                            i += run;
                            if(i > se)
                            {
                                av_log(s->avctx, 16, "error count: %d\n", i);
                                return -1;
                            }
                            break;
                        }
                        j = s->scantable.permutated[i];
                        if(block[j])
                        {
                            re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(&s->gb)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);;
                            sign = block[j]>>15;
                            block[j] += NEG_USR32(re_cache, 1) * ((quant_matrix[j]^sign)-sign) << Al;
                            re_index += (1);;
                        }
                        else if(run-- == 0) break;
                    };
                }
                else
                {
                    val = run;
                    run = (1 << run);
                    if(val)
                    {
                        re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(&s->gb)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);;
                        run += NEG_USR32(re_cache, val);
                        re_index += (val);;
                    }
                    *EOBRUN = run - 1;
                    break;
                }
            }
        }

        if(i > *last_nnz)
            *last_nnz = i;
    }

    for(; i<=last; i++)
    {
        j = s->scantable.permutated[i];
        if(block[j])
        {
            re_cache= bswap_32((((const union unaligned_32 *) (((const uint8_t *)(&s->gb)->buffer)+(re_index>>3)))->l)) << (re_index&0x07);;
            sign = block[j]>>15;
            block[j] += NEG_USR32(re_cache, 1) * ((quant_matrix[j]^sign)-sign) << Al;
            re_index += (1);;
        }
    }
    (&s->gb)->index= re_index;;

    return 0;
}



static int ljpeg_decode_rgb_scan(MJpegDecodeContext *s, int predictor, int point_transform)
{
    int i, mb_x, mb_y;
    uint16_t (*buffer)[4];
    int left[3], top[3], topleft[3];
    const int linesize= s->linesize[0];
    const int mask= (1<<s->bits)-1;

    av_fast_malloc(&s->ljpeg_buffer, &s->ljpeg_buffer_size, (unsigned)s->mb_width * 4 * sizeof(s->ljpeg_buffer[0][0]));
    buffer= s->ljpeg_buffer;

    for(i=0; i<3; i++)
    {
        buffer[0][i]= 1 << (s->bits + point_transform - 1);
    }
    for(mb_y = 0; mb_y < s->mb_height; mb_y++)
    {
        const int modified_predictor= mb_y ? predictor : 1;
        uint8_t *ptr = s->picture.data[0] + (linesize * mb_y);

        if (s->interlaced && s->bottom_field)
            ptr += linesize >> 1;

        for(i=0; i<3; i++)
        {
            top[i]= left[i]= topleft[i]= buffer[0][i];
        }
        for(mb_x = 0; mb_x < s->mb_width; mb_x++)
        {
            if (s->restart_interval && !s->restart_count)
                s->restart_count = s->restart_interval;

            for(i=0; i<3; i++)
            {
                int pred;

                topleft[i]= top[i];
                top[i]= buffer[mb_x][i];

                switch(modified_predictor)
                {
                case 1:
                    pred= left[i];
                    break;
                case 2:
                    pred= top[i];
                    break;
                case 3:
                    pred= topleft[i];
                    break;
                case 4:
                    pred= left[i] + top[i] - topleft[i];
                    break;
                case 5:
                    pred= left[i] + ((top[i] - topleft[i])>>1);
                    break;
                case 6:
                    pred= top[i] + ((left[i] - topleft[i])>>1);
                    break;
                default:
                case 7:
                    pred= (left[i] + top[i])>>1;
                    break;
                };

                left[i]=
                    buffer[mb_x][i]= mask & (pred + (mjpeg_decode_dc(s, s->dc_index[i]) << point_transform));
            }

            if (s->restart_interval && !--s->restart_count)
            {
                align_get_bits(&s->gb);
                skip_bits(&s->gb, 16);
            }
        }

        if(s->rct)
        {
            for(mb_x = 0; mb_x < s->mb_width; mb_x++)
            {
                ptr[4*mb_x+1] = buffer[mb_x][0] - ((buffer[mb_x][1] + buffer[mb_x][2] - 0x200)>>2);
                ptr[4*mb_x+0] = buffer[mb_x][1] + ptr[4*mb_x+1];
                ptr[4*mb_x+2] = buffer[mb_x][2] + ptr[4*mb_x+1];
            }
        }
        else if(s->pegasus_rct)
        {
            for(mb_x = 0; mb_x < s->mb_width; mb_x++)
            {
                ptr[4*mb_x+1] = buffer[mb_x][0] - ((buffer[mb_x][1] + buffer[mb_x][2])>>2);
                ptr[4*mb_x+0] = buffer[mb_x][1] + ptr[4*mb_x+1];
                ptr[4*mb_x+2] = buffer[mb_x][2] + ptr[4*mb_x+1];
            }
        }
        else
        {
            for(mb_x = 0; mb_x < s->mb_width; mb_x++)
            {
                ptr[4*mb_x+0] = buffer[mb_x][2];
                ptr[4*mb_x+1] = buffer[mb_x][1];
                ptr[4*mb_x+2] = buffer[mb_x][0];
            }
        }
    }
    return 0;
}

static int ljpeg_decode_yuv_scan(MJpegDecodeContext *s, int predictor, int point_transform)
{
    int i, mb_x, mb_y;
    const int nb_components=3;

    for(mb_y = 0; mb_y < s->mb_height; mb_y++)
    {
        for(mb_x = 0; mb_x < s->mb_width; mb_x++)
        {
            if (s->restart_interval && !s->restart_count)
                s->restart_count = s->restart_interval;

            if(mb_x==0 || mb_y==0 || s->interlaced)
            {
                for(i=0; i<nb_components; i++)
                {
                    uint8_t *ptr;
                    int n, h, v, x, y, c, j, linesize;
                    n = s->nb_blocks[i];
                    c = s->comp_index[i];
                    h = s->h_scount[i];
                    v = s->v_scount[i];
                    x = 0;
                    y = 0;
                    linesize= s->linesize[c];

                    for(j=0; j<n; j++)
                    {
                        int pred;

                        ptr = s->picture.data[c] + (linesize * (v * mb_y + y)) + (h * mb_x + x);
                        if(y==0 && mb_y==0)
                        {
                            if(x==0 && mb_x==0)
                            {
                                pred= 128 << point_transform;
                            }
                            else
                            {
                                pred= ptr[-1];
                            }
                        }
                        else
                        {
                            if(x==0 && mb_x==0)
                            {
                                pred= ptr[-linesize];
                            }
                            else
                            {
                                switch(predictor)
                                {
                                case 1:
                                    pred= ptr[-1];
                                    break;
                                case 2:
                                    pred= ptr[-linesize];
                                    break;
                                case 3:
                                    pred= ptr[-linesize-1];
                                    break;
                                case 4:
                                    pred= ptr[-1] + ptr[-linesize] - ptr[-linesize-1];
                                    break;
                                case 5:
                                    pred= ptr[-1] + ((ptr[-linesize] - ptr[-linesize-1])>>1);
                                    break;
                                case 6:
                                    pred= ptr[-linesize] + ((ptr[-1] - ptr[-linesize-1])>>1);
                                    break;
                                default:
                                case 7:
                                    pred= (ptr[-1] + ptr[-linesize])>>1;
                                    break;
                                };
                            }
                        }

                        if (s->interlaced && s->bottom_field)
                            ptr += linesize >> 1;
                        *ptr= pred + (mjpeg_decode_dc(s, s->dc_index[i]) << point_transform);

                        if (++x == h)
                        {
                            x = 0;
                            y++;
                        }
                    }
                }
            }
            else
            {
                for(i=0; i<nb_components; i++)
                {
                    uint8_t *ptr;
                    int n, h, v, x, y, c, j, linesize;
                    n = s->nb_blocks[i];
                    c = s->comp_index[i];
                    h = s->h_scount[i];
                    v = s->v_scount[i];
                    x = 0;
                    y = 0;
                    linesize= s->linesize[c];

                    for(j=0; j<n; j++)
                    {
                        int pred;

                        ptr = s->picture.data[c] + (linesize * (v * mb_y + y)) + (h * mb_x + x);
                        switch(predictor)
                        {
                        case 1:
                            pred= ptr[-1];
                            break;
                        case 2:
                            pred= ptr[-linesize];
                            break;
                        case 3:
                            pred= ptr[-linesize-1];
                            break;
                        case 4:
                            pred= ptr[-1] + ptr[-linesize] - ptr[-linesize-1];
                            break;
                        case 5:
                            pred= ptr[-1] + ((ptr[-linesize] - ptr[-linesize-1])>>1);
                            break;
                        case 6:
                            pred= ptr[-linesize] + ((ptr[-1] - ptr[-linesize-1])>>1);
                            break;
                        default:
                        case 7:
                            pred= (ptr[-1] + ptr[-linesize])>>1;
                            break;
                        };
                        *ptr= pred + (mjpeg_decode_dc(s, s->dc_index[i]) << point_transform);
                        if (++x == h)
                        {
                            x = 0;
                            y++;
                        }
                    }
                }
            }
            if (s->restart_interval && !--s->restart_count)
            {
                align_get_bits(&s->gb);
                skip_bits(&s->gb, 16);
            }
        }
    }
    return 0;
}

static int mjpeg_decode_scan(MJpegDecodeContext *s, int nb_components, int Ah, int Al)
{
    int i, mb_x, mb_y;
    uint8_t* data[4];
    int linesize[4];

    if(s->flipped && s->avctx->flags & 0x4000)
    {
        av_log(s->avctx, 16, "Can not flip image with CODEC_FLAG_EMU_EDGE set!\n");
        s->flipped = 0;
    }
    for(i=0; i < nb_components; i++)
    {
        int c = s->comp_index[i];
        data[c] = s->picture.data[c];
        linesize[c]=s->linesize[c];
        s->coefs_finished[c] |= 1;
        if(s->flipped)
        {

            data[c] += (linesize[c] * (s->v_scount[i] * (8 * s->mb_height -((s->height/s->v_max)&7)) - 1 ));
            linesize[c] *= -1;
        }
    }

    for(mb_y = 0; mb_y < s->mb_height; mb_y++)
    {
        for(mb_x = 0; mb_x < s->mb_width; mb_x++)
        {
            if (s->restart_interval && !s->restart_count)
                s->restart_count = s->restart_interval;

            for(i=0; i<nb_components; i++)
            {
                uint8_t *ptr;
                int n, h, v, x, y, c, j;
                n = s->nb_blocks[i];
                c = s->comp_index[i];
                h = s->h_scount[i];
                v = s->v_scount[i];
                x = 0;
                y = 0;
                for(j=0; j<n; j++)
                {
                    ptr = data[c] +
                          (((linesize[c] * (v * mb_y + y) * 8) +
                            (h * mb_x + x) * 8) >> s->avctx->lowres);
                    if(s->interlaced && s->bottom_field)
                        ptr += linesize[c] >> 1;
                    if(!s->progressive)
                    {
                        s->dsp.clear_block(s->block);
                        if(decode_block(s, s->block, i,
                                        s->dc_index[i], s->ac_index[i],
                                        s->quant_matrixes[ s->quant_index[c] ]) < 0)
                        {
                            av_log(s->avctx, 16, "error y=%d x=%d\n", mb_y, mb_x);
                            return -1;
                        }
                        s->dsp.idct_put(ptr, linesize[c], s->block);
                    }
                    else
                    {
                        int block_idx = s->block_stride[c] * (v * mb_y + y) + (h * mb_x + x);
                        DCTELEM *block = s->blocks[c][block_idx];
                        if(Ah)
                            block[0] += get_bits1(&s->gb) * s->quant_matrixes[ s->quant_index[c] ][0] << Al;
                        else if(decode_dc_progressive(s, block, i, s->dc_index[i], s->quant_matrixes[ s->quant_index[c] ], Al) < 0)
                        {
                            av_log(s->avctx, 16, "error y=%d x=%d\n", mb_y, mb_x);
                            return -1;
                        }
                    }


                    if (++x == h)
                    {
                        x = 0;
                        y++;
                    }
                }
            }

            if (s->restart_interval && !--s->restart_count)
            {
                align_get_bits(&s->gb);
                skip_bits(&s->gb, 16);
                for (i=0; i<nb_components; i++)
                    s->last_dc[i] = 1024;
            }
        }
    }
    return 0;
}

static int mjpeg_decode_scan_progressive_ac(MJpegDecodeContext *s, int ss, int se, int Ah, int Al)
{
    int mb_x, mb_y;
    int EOBRUN = 0;
    int c = s->comp_index[0];
    uint8_t* data = s->picture.data[c];
    int linesize = s->linesize[c];
    int last_scan = 0;
    int16_t *quant_matrix = s->quant_matrixes[ s->quant_index[c] ];

    if(!Al)
    {
        s->coefs_finished[c] |= (1LL<<(se+1))-(1LL<<ss);
        last_scan = !~s->coefs_finished[c];
    }

    if(s->interlaced && s->bottom_field)
        data += linesize >> 1;

    for(mb_y = 0; mb_y < s->mb_height; mb_y++)
    {
        uint8_t *ptr = data + (mb_y*linesize*8 >> s->avctx->lowres);
        int block_idx = mb_y * s->block_stride[c];
        DCTELEM (*block)[64] = &s->blocks[c][block_idx];
        uint8_t *last_nnz = &s->last_nnz[c][block_idx];
        for(mb_x = 0; mb_x < s->mb_width; mb_x++, block++, last_nnz++)
        {
            int ret;
            if(Ah)
                ret = decode_block_refinement(s, *block, last_nnz, s->ac_index[0],
                                              quant_matrix, ss, se, Al, &EOBRUN);
            else
                ret = decode_block_progressive(s, *block, last_nnz, s->ac_index[0],
                                               quant_matrix, ss, se, Al, &EOBRUN);
            if(ret < 0)
            {
                av_log(s->avctx, 16, "error y=%d x=%d\n", mb_y, mb_x);
                return -1;
            }
            if(last_scan)
            {
                s->dsp.idct_put(ptr, linesize, *block);
                ptr += 8 >> s->avctx->lowres;
            }
        }
    }
    return 0;
}

int ff_mjpeg_decode_sos(MJpegDecodeContext *s)
{
    int len, nb_components, i, h, v, predictor, point_transform;
    int index, id;
    const int block_size= s->lossless ? 1 : 8;
    int ilv, prev_shift;


    len = get_bits(&s->gb, 16);
    nb_components = get_bits(&s->gb, 8);
    if (nb_components == 0 || nb_components > 4)
    {
        av_log(s->avctx, 16, "decode_sos: nb_components (%d) unsupported\n", nb_components);
        return -1;
    }
    if (len != 6+2*nb_components)
    {
        av_log(s->avctx, 16, "decode_sos: invalid len (%d)\n", len);
        return -1;
    }
    for(i=0; i<nb_components; i++)
    {
        id = get_bits(&s->gb, 8) - 1;
        av_log(s->avctx, 48, "component: %d\n", id);

        for(index=0; index<s->nb_components; index++)
            if (id == s->component_id[index])
                break;
        if (index == s->nb_components)
        {
            av_log(s->avctx, 16, "decode_sos: index(%d) out of components\n", index);
            return -1;
        }

        if (s->avctx->codec_tag == ('M' | ('T' << 8) | ('S' << 16) | ('J' << 24))
                && nb_components == 3 && s->nb_components == 3 && i)
            index = 3 - i;

        s->comp_index[i] = index;

        s->nb_blocks[i] = s->h_count[index] * s->v_count[index];
        s->h_scount[i] = s->h_count[index];
        s->v_scount[i] = s->v_count[index];

        s->dc_index[i] = get_bits(&s->gb, 4);
        s->ac_index[i] = get_bits(&s->gb, 4);

        if (s->dc_index[i] < 0 || s->ac_index[i] < 0 ||
                s->dc_index[i] >= 4 || s->ac_index[i] >= 4)
            goto out_of_range;
        if (!s->vlcs[0][s->dc_index[i]].table || !s->vlcs[1][s->ac_index[i]].table)
            goto out_of_range;
    }

    predictor= get_bits(&s->gb, 8);
    ilv= get_bits(&s->gb, 8);
    prev_shift = get_bits(&s->gb, 4);
    point_transform= get_bits(&s->gb, 4);

    for(i=0; i<nb_components; i++)
        s->last_dc[i] = 1024;

    if (nb_components > 1)
    {

        s->mb_width = (s->width + s->h_max * block_size - 1) / (s->h_max * block_size);
        s->mb_height = (s->height + s->v_max * block_size - 1) / (s->v_max * block_size);
    }
    else if(!s->ls)
    {
        h = s->h_max / s->h_scount[0];
        v = s->v_max / s->v_scount[0];
        s->mb_width = (s->width + h * block_size - 1) / (h * block_size);
        s->mb_height = (s->height + v * block_size - 1) / (v * block_size);
        s->nb_blocks[0] = 1;
        s->h_scount[0] = 1;
        s->v_scount[0] = 1;
    }

    if(s->avctx->debug & 1)
        av_log(s->avctx, 48, "%s %s p:%d >>:%d ilv:%d bits:%d %s\n", s->lossless ? "lossless" : "sequential DCT", s->rgb ? "RGB" : "",
               predictor, point_transform, ilv, s->bits,
               s->pegasus_rct ? "PRCT" : (s->rct ? "RCT" : ""));



    for (i = s->mjpb_skiptosod; i > 0; i--)
        skip_bits(&s->gb, 8);

    if(s->lossless)
    {
        if(0 && s->ls)
        {



            if(ff_jpegls_decode_picture(s, predictor, point_transform, ilv) < 0)
                return -1;
        }
        else
        {
            if(s->rgb)
            {
                if(ljpeg_decode_rgb_scan(s, predictor, point_transform) < 0)
                    return -1;
            }
            else
            {
                if(ljpeg_decode_yuv_scan(s, predictor, point_transform) < 0)
                    return -1;
            }
        }
    }
    else
    {
        if(s->progressive && predictor)
        {
            if(mjpeg_decode_scan_progressive_ac(s, predictor, ilv, prev_shift, point_transform) < 0)
                return -1;
        }
        else
        {
            if(mjpeg_decode_scan(s, nb_components, prev_shift, point_transform) < 0)
                return -1;
        }
    }
    {
        if (mm_flags & 0x0001) emms();
    };
    return 0;
out_of_range:
    av_log(s->avctx, 16, "decode_sos: ac/dc index out of range\n");
    return -1;
}

static int mjpeg_decode_dri(MJpegDecodeContext *s)
{
    if (get_bits(&s->gb, 16) != 4)
        return -1;
    s->restart_interval = get_bits(&s->gb, 16);
    s->restart_count = 0;
    av_log(s->avctx, 48, "restart interval: %d\n", s->restart_interval);

    return 0;
}

static int mjpeg_decode_app(MJpegDecodeContext *s)
{
    int len, id, i;

    len = get_bits(&s->gb, 16);
    if (len < 5)
        return -1;
    if(8*len + get_bits_count(&s->gb) > s->gb.size_in_bits)
        return -1;

    id = (get_bits(&s->gb, 16) << 16) | get_bits(&s->gb, 16);
    id = bswap_32(id);
    len -= 6;

    if(s->avctx->debug & 0x00000100)
    {
        av_log(s->avctx, 48, "APPx %8X\n", id);
    }




    if (id == (((const union unaligned_32 *) ("AVI1"))->l))
    {







        s->buggy_avid = 1;


        i = get_bits(&s->gb, 8);
        if (i==2) s->bottom_field= 1;
        else if(i==1) s->bottom_field= 0;
# 1063 "libavcodec/mjpegdec.c"
        goto out;
    }



    if (id == (((const union unaligned_32 *) ("JFIF"))->l))
    {
        int t_w, t_h, v1, v2;
        skip_bits(&s->gb, 8);
        v1= get_bits(&s->gb, 8);
        v2= get_bits(&s->gb, 8);
        skip_bits(&s->gb, 8);

        s->avctx->sample_aspect_ratio.num= get_bits(&s->gb, 16);
        s->avctx->sample_aspect_ratio.den= get_bits(&s->gb, 16);

        if (s->avctx->debug & 1)
            av_log(s->avctx, 32, "mjpeg: JFIF header found (version: %x.%x) SAR=%d/%d\n",
                   v1, v2,
                   s->avctx->sample_aspect_ratio.num,
                   s->avctx->sample_aspect_ratio.den
                  );

        t_w = get_bits(&s->gb, 8);
        t_h = get_bits(&s->gb, 8);
        if (t_w && t_h)
        {

            if (len-10-(t_w*t_h*3) > 0)
                len -= t_w*t_h*3;
        }
        len -= 10;
        goto out;
    }

    if (id == (((const union unaligned_32 *) ("Adob"))->l) && (get_bits(&s->gb, 8) == 'e'))
    {
        if (s->avctx->debug & 1)
            av_log(s->avctx, 32, "mjpeg: Adobe header found\n");
        skip_bits(&s->gb, 16);
        skip_bits(&s->gb, 16);
        skip_bits(&s->gb, 16);
        skip_bits(&s->gb, 8);
        len -= 7;
        goto out;
    }

    if (id == (((const union unaligned_32 *) ("LJIF"))->l))
    {
        if (s->avctx->debug & 1)
            av_log(s->avctx, 32, "Pegasus lossless jpeg header found\n");
        skip_bits(&s->gb, 16);
        skip_bits(&s->gb, 16);
        skip_bits(&s->gb, 16);
        skip_bits(&s->gb, 16);
        switch( get_bits(&s->gb, 8))
        {
        case 1:
            s->rgb= 1;
            s->pegasus_rct=0;
            break;
        case 2:
            s->rgb= 1;
            s->pegasus_rct=1;
            break;
        default:
            av_log(s->avctx, 16, "unknown colorspace\n");
        }
        len -= 9;
        goto out;
    }


    if ((s->start_code == APP1) && (len > (0x28 - 8)))
    {
        id = (get_bits(&s->gb, 16) << 16) | get_bits(&s->gb, 16);
        id = bswap_32(id);
        len -= 4;
        if (id == (((const union unaligned_32 *) ("mjpg"))->l))
        {
# 1151 "libavcodec/mjpegdec.c"
            if (s->avctx->debug & 1)
                av_log(s->avctx, 32, "mjpeg: Apple MJPEG-A header found\n");
        }
    }

out:

    if (len < 0)
        av_log(s->avctx, 16, "mjpeg: error, decode_app parser read over the end\n");
    while(--len > 0)
        skip_bits(&s->gb, 8);

    return 0;
}

static int mjpeg_decode_com(MJpegDecodeContext *s)
{
    int len = get_bits(&s->gb, 16);
    if (len >= 2 && 8*len - 16 + get_bits_count(&s->gb) <= s->gb.size_in_bits)
    {
        char *cbuf = av_malloc(len - 1);
        if (cbuf)
        {
            int i;
            for (i = 0; i < len - 2; i++)
                cbuf[i] = get_bits(&s->gb, 8);
            if (i > 0 && cbuf[i-1] == '\n')
                cbuf[i-1] = 0;
            else
                cbuf[i] = 0;

            if(s->avctx->debug & 1)
                av_log(s->avctx, 32, "mjpeg comment: '%s'\n", cbuf);


            if (!strcmp(cbuf, "AVID"))
            {
                s->buggy_avid = 1;


            }
            else if(!strcmp(cbuf, "CS=ITU601"))
            {
                s->cs_itu601= 1;
            }
            else if((len > 20 && !strncmp(cbuf, "Intel(R) JPEG Library", 21)) ||
                    (len > 19 && !strncmp(cbuf, "Metasoft MJPEG Codec", 20)))
            {
                s->flipped = 1;
            }

            av_free(cbuf);
        }
    }

    return 0;
}
# 1230 "libavcodec/mjpegdec.c"
static int find_marker(const uint8_t **pbuf_ptr, const uint8_t *buf_end)
{
    const uint8_t *buf_ptr;
    unsigned int v, v2;
    int val;




    buf_ptr = *pbuf_ptr;
    while (buf_ptr < buf_end)
    {
        v = *buf_ptr++;
        v2 = *buf_ptr;
        if ((v == 0xff) && (v2 >= 0xc0) && (v2 <= 0xfe) && buf_ptr < buf_end)
        {
            val = *buf_ptr++;
            goto found;
        }



    }
    val = -1;
found:
    dprintf(((void *)0), "find_marker skipped %d bytes\n", skipped);
    *pbuf_ptr = buf_ptr;
    return val;
}

int ff_mjpeg_decode_frame(AVCodecContext *avctx,
                          void *data, int *data_size,
                          AVPacket *avpkt)
{
    const uint8_t *buf = avpkt->data;
    int buf_size = avpkt->size;
    MJpegDecodeContext *s = avctx->priv_data;
    const uint8_t *buf_end, *buf_ptr;
    int start_code;
    AVFrame *picture = data;

    s->got_picture = 0;
    buf_ptr = buf;
    buf_end = buf + buf_size;
    while (buf_ptr < buf_end)
    {

        start_code = find_marker(&buf_ptr, buf_end);
        {

            if (start_code < 0)
            {
                goto the_end;
            }
            else
            {
                av_log(avctx, 48, "marker=%x avail_size_in_buf=%td\n", start_code, buf_end - buf_ptr);

                if ((buf_end - buf_ptr) > s->buffer_size)
                {
                    av_free(s->buffer);
                    s->buffer_size = buf_end-buf_ptr;
                    s->buffer = av_malloc(s->buffer_size + 8);
                    av_log(avctx, 48, "buffer too small, expanding to %d bytes\n",
                           s->buffer_size);
                }


                if (start_code == SOS && !s->ls)
                {
                    const uint8_t *src = buf_ptr;
                    uint8_t *dst = s->buffer;

                    while (src<buf_end)
                    {
                        uint8_t x = *(src++);

                        *(dst++) = x;
                        if (avctx->codec_id != CODEC_ID_THP)
                        {
                            if (x == 0xff)
                            {
                                while (src < buf_end && x == 0xff)
                                    x = *(src++);

                                if (x >= 0xd0 && x <= 0xd7)
                                    *(dst++) = x;
                                else if (x)
                                    break;
                            }
                        }
                    }
                    init_get_bits(&s->gb, s->buffer, (dst - s->buffer)*8);

                    av_log(avctx, 48, "escaping removed %td bytes\n",
                           (buf_end - buf_ptr) - (dst - s->buffer));
                }
                else if(start_code == SOS && s->ls)
                {
                    const uint8_t *src = buf_ptr;
                    uint8_t *dst = s->buffer;
                    int bit_count = 0;
                    int t = 0, b = 0;
                    PutBitContext pb;

                    s->cur_scan++;


                    while (src + t < buf_end)
                    {
                        uint8_t x = src[t++];
                        if (x == 0xff)
                        {
                            while((src + t < buf_end) && x == 0xff)
                                x = src[t++];
                            if (x & 0x80)
                            {
                                t -= 2;
                                break;
                            }
                        }
                    }
                    bit_count = t * 8;

                    init_put_bits(&pb, dst, t);


                    while(b < t)
                    {
                        uint8_t x = src[b++];
                        put_bits(&pb, 8, x);
                        if(x == 0xFF)
                        {
                            x = src[b++];
                            put_bits(&pb, 7, x);
                            bit_count--;
                        }
                    }
                    flush_put_bits(&pb);

                    init_get_bits(&s->gb, dst, bit_count);
                }
                else
                    init_get_bits(&s->gb, buf_ptr, (buf_end - buf_ptr)*8);

                s->start_code = start_code;
                if(s->avctx->debug & 0x00000100)
                {
                    av_log(avctx, 48, "startcode: %X\n", start_code);
                }


                if (start_code >= 0xd0 && start_code <= 0xd7)
                {
                    av_log(avctx, 48, "restart marker: %d\n", start_code&0x0f);

                }
                else if (start_code >= APP0 && start_code <= APP15)
                {
                    mjpeg_decode_app(s);

                }
                else if (start_code == COM)
                {
                    mjpeg_decode_com(s);
                }

                switch(start_code)
                {
                case SOI:
                    s->restart_interval = 0;

                    s->restart_count = 0;

                    break;
                case DQT:

                    if (ff_mjpeg_decode_dqt(s) < 0)
                        return -1;
                    break;
                case DHT:
                    if(ff_mjpeg_decode_dht(s) < 0)
                    {
                        av_log(avctx, 16, "huffman table decode error\n");
                        return -1;
                    }
                    break;
                case SOF0:
                case SOF1:
                    s->lossless=0;
                    s->ls=0;
                    s->progressive=0;
                    if (ff_mjpeg_decode_sof(s) < 0)
                        return -1;
                    break;
                case SOF2:
                    s->lossless=0;
                    s->ls=0;
                    s->progressive=1;
                    if (ff_mjpeg_decode_sof(s) < 0)
                        return -1;
                    break;
                case SOF3:
                    s->lossless=1;
                    s->ls=0;
                    s->progressive=0;
                    if (ff_mjpeg_decode_sof(s) < 0)
                        return -1;
                    break;
                case SOF48:
                    s->lossless=1;
                    s->ls=1;
                    s->progressive=0;
                    if (ff_mjpeg_decode_sof(s) < 0)
                        return -1;
                    break;
                case LSE:
                    if (!0 || ff_jpegls_decode_lse(s) < 0)
                        return -1;
                    break;
                case EOI:
                    s->cur_scan = 0;
                    if ((s->buggy_avid && !s->interlaced) || s->restart_interval)
                        break;
eoi_parser:
                    if (!s->got_picture)
                    {
                        av_log(avctx, 24, "Found EOI before any SOF, ignoring\n");
                        break;
                    }
                    {
                        if (s->interlaced)
                        {
                            s->bottom_field ^= 1;

                            if (s->bottom_field == !s->interlace_polarity)
                                goto not_the_end;
                        }
                        *picture = s->picture;
                        *data_size = sizeof(AVFrame);

                        if(!s->lossless)
                        {
                            picture->quality= ((((s->qscale[0]) > (s->qscale[1]) ? (s->qscale[0]) : (s->qscale[1]))) > (s->qscale[2]) ? (((s->qscale[0]) > (s->qscale[1]) ? (s->qscale[0]) : (s->qscale[1]))) : (s->qscale[2]));
                            picture->qstride= 0;
                            picture->qscale_table= s->qscale_table;
                            memset(picture->qscale_table, picture->quality, (s->width+15)/16);
                            if(avctx->debug & 16)
                                av_log(avctx, 48, "QP: %d\n", picture->quality);
                            picture->quality*= 118;
                        }

                        goto the_end;
                    }
                    break;
                case SOS:
                    if (!s->got_picture)
                    {
                        av_log(avctx, 24, "Can not process SOS before SOF, skipping\n");
                        break;
                    }
                    ff_mjpeg_decode_sos(s);


                    if ((s->buggy_avid && !s->interlaced) || s->restart_interval)
                        goto eoi_parser;
                    break;
                case DRI:
                    mjpeg_decode_dri(s);
                    break;
                case SOF5:
                case SOF6:
                case SOF7:
                case SOF9:
                case SOF10:
                case SOF11:
                case SOF13:
                case SOF14:
                case SOF15:
                case JPG:
                    av_log(avctx, 16, "mjpeg: unsupported coding type (%x)\n", start_code);
                    break;



                }

not_the_end:

                buf_ptr += (get_bits_count(&s->gb)+7)/8;
                av_log(avctx, 48, "marker parser used %d bytes (%d bits)\n",
                       (get_bits_count(&s->gb)+7)/8, get_bits_count(&s->gb));
            }
        }
    }
    if (s->got_picture)
    {
        av_log(avctx, 24, "EOI missing, emulating\n");
        goto eoi_parser;
    }
    av_log(avctx, 8, "No JPEG data found in image\n");
    return -1;
the_end:
    av_log(avctx, 48, "mjpeg decode frame unused %td bytes\n", buf_end - buf_ptr);

    return buf_ptr - buf;
}

int ff_mjpeg_decode_end(AVCodecContext *avctx)
{
    MJpegDecodeContext *s = avctx->priv_data;
    int i, j;

    if (s->picture.data[0])
        avctx->release_buffer(avctx, &s->picture);

    av_free(s->buffer);
    av_free(s->qscale_table);
    av_freep(&s->ljpeg_buffer);
    s->ljpeg_buffer_size=0;

    for(i=0; i<2; i++)
    {
        for(j=0; j<4; j++)
            free_vlc(&s->vlcs[i][j]);
    }
    for(i=0; i<4; i++)
    {
        av_freep(&s->blocks[i]);
        av_freep(&s->last_nnz[i]);
    }
    return 0;
}

AVCodec mjpeg_decoder =
{
    "mjpeg",
    AVMEDIA_TYPE_VIDEO,
    CODEC_ID_MJPEG,
    sizeof(MJpegDecodeContext),
    ff_mjpeg_decode_init,
    ((void *)0),
    ff_mjpeg_decode_end,
    ff_mjpeg_decode_frame,
    0x0002,
    ((void *)0),
    .long_name = NULL_IF_CONFIG_SMALL("MJPEG (Motion JPEG)"),
};

AVCodec thp_decoder =
{
    "thp",
    AVMEDIA_TYPE_VIDEO,
    CODEC_ID_THP,
    sizeof(MJpegDecodeContext),
    ff_mjpeg_decode_init,
    ((void *)0),
    ff_mjpeg_decode_end,
    ff_mjpeg_decode_frame,
    0x0002,
    ((void *)0),
    .long_name = NULL_IF_CONFIG_SMALL("Nintendo Gamecube THP video"),
};
