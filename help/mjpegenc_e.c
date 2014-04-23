# 1 "libavcodec/mjpegenc.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "libavcodec/mjpegenc.c"
# 33 "libavcodec/mjpegenc.c"
# 1 "libavcodec/avcodec.h" 1
# 29 "libavcodec/avcodec.h"
# 1 "/usr/include/errno.h" 1 3 4
# 29 "/usr/include/errno.h" 3 4
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
# 30 "/usr/include/errno.h" 2 3 4






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
# 1 "./libavutil/samplefmt.h" 1
# 22 "./libavutil/samplefmt.h"
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
# 23 "./libavutil/samplefmt.h" 2

# 1 "./libavutil/avutil.h" 1
# 120 "./libavutil/avutil.h"
unsigned avutil_version(void);




const char *avutil_configuration(void);




const char *avutil_license(void);
# 141 "./libavutil/avutil.h"
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





const char *av_get_media_type_string(enum AVMediaType media_type);
# 214 "./libavutil/avutil.h"
enum AVPictureType
{
    AV_PICTURE_TYPE_NONE = 0,
    AV_PICTURE_TYPE_I,
    AV_PICTURE_TYPE_P,
    AV_PICTURE_TYPE_B,
    AV_PICTURE_TYPE_S,
    AV_PICTURE_TYPE_SI,
    AV_PICTURE_TYPE_SP,
    AV_PICTURE_TYPE_BI,
};
# 232 "./libavutil/avutil.h"
char av_get_picture_type_char(enum AVPictureType pict_type);





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
# 35 "/usr/include/inttypes.h" 3 4
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
# 39 "./libavutil/common.h" 2
# 1 "./libavutil/version.h" 1
# 40 "./libavutil/common.h" 2
# 1 "./libavutil/avconfig.h" 1
# 41 "./libavutil/common.h" 2
# 72 "./libavutil/common.h"
extern __attribute__((deprecated)) const uint8_t av_reverse[256];
# 81 "./libavutil/common.h"
# 1 "./libavutil/common.h" 1
# 82 "./libavutil/common.h" 2


__attribute__((const)) int av_log2(unsigned v);



__attribute__((const)) int av_log2_16bit(unsigned v);
# 98 "./libavutil/common.h"
static __attribute__((always_inline)) inline __attribute__((const)) int av_clip_c(int a, int amin, int amax)
{



    if (a < amin) return amin;
    else if (a > amax) return amax;
    else return a;
}
# 115 "./libavutil/common.h"
static __attribute__((always_inline)) inline __attribute__((const)) int64_t av_clip64_c(int64_t a, int64_t amin, int64_t amax)
{



    if (a < amin) return amin;
    else if (a > amax) return amax;
    else return a;
}






static __attribute__((always_inline)) inline __attribute__((const)) uint8_t av_clip_uint8_c(int a)
{
    if (a&(~0xFF)) return (-a)>>31;
    else return a;
}






static __attribute__((always_inline)) inline __attribute__((const)) int8_t av_clip_int8_c(int a)
{
    if ((a+0x80) & ~0xFF) return (a>>31) ^ 0x7F;
    else return a;
}






static __attribute__((always_inline)) inline __attribute__((const)) uint16_t av_clip_uint16_c(int a)
{
    if (a&(~0xFFFF)) return (-a)>>31;
    else return a;
}






static __attribute__((always_inline)) inline __attribute__((const)) int16_t av_clip_int16_c(int a)
{
    if ((a+0x8000) & ~0xFFFF) return (a>>31) ^ 0x7FFF;
    else return a;
}






static __attribute__((always_inline)) inline __attribute__((const)) int32_t av_clipl_int32_c(int64_t a)
{
    if ((a+0x80000000u) & ~0xFFFFFFFFUL) return (a>>63) ^ 0x7FFFFFFF;
    else return (int32_t)a;
}







static __attribute__((always_inline)) inline __attribute__((const)) unsigned av_clip_uintp2_c(int a, int p)
{
    if (a & ~((1<<p) - 1)) return -a >> 31 & ((1<<p) - 1);
    else return a;
}
# 199 "./libavutil/common.h"
static __attribute__((always_inline)) inline int av_sat_add32_c(int a, int b)
{
    return av_clipl_int32_c((int64_t)a + b);
}
# 211 "./libavutil/common.h"
static __attribute__((always_inline)) inline int av_sat_dadd32_c(int a, int b)
{
    return av_sat_add32_c(a, av_sat_add32_c(b, b));
}
# 223 "./libavutil/common.h"
static __attribute__((always_inline)) inline __attribute__((const)) float av_clipf_c(float a, float amin, float amax)
{



    if (a < amin) return amin;
    else if (a > amax) return amax;
    else return a;
}





static __attribute__((always_inline)) inline __attribute__((const)) int av_ceil_log2_c(int x)
{
    return av_log2((x - 1) << 1);
}






static __attribute__((always_inline)) inline __attribute__((const)) int av_popcount_c(uint32_t x)
{
    x -= (x >> 1) & 0x55555555;
    x = (x & 0x33333333) + ((x >> 2) & 0x33333333);
    x = (x + (x >> 4)) & 0x0F0F0F0F;
    x += x >> 8;
    return (x + (x >> 16)) & 0x3F;
}






static __attribute__((always_inline)) inline __attribute__((const)) int av_popcount64_c(uint64_t x)
{
    return av_popcount_c((uint32_t)x) + av_popcount_c(x >> 32);
}
# 383 "./libavutil/common.h"
# 1 "./libavutil/mem.h" 1
# 29 "./libavutil/mem.h"
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h" 1 3 4
# 30 "./libavutil/mem.h" 2



# 1 "./libavutil/error.h" 1
# 27 "./libavutil/error.h"
# 1 "/usr/include/errno.h" 1 3 4
# 28 "./libavutil/error.h" 2
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 152 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 29 "./libavutil/error.h" 2
# 88 "./libavutil/error.h"
int av_strerror(int errnum, char *errbuf, size_t errbuf_size);
# 100 "./libavutil/error.h"
static inline char *av_make_error_string(char *errbuf, size_t errbuf_size, int errnum)
{
    av_strerror(errnum, errbuf, errbuf_size);
    return errbuf;
}
# 34 "./libavutil/mem.h" 2
# 1 "./libavutil/avutil.h" 1
# 35 "./libavutil/mem.h" 2
# 83 "./libavutil/mem.h"
void *av_malloc(size_t size) __attribute__((__malloc__)) ;
# 94 "./libavutil/mem.h"
static inline void *av_malloc_array(size_t nmemb, size_t size)
{
    if (size <= 0 || nmemb >= 2147483647 / size)
        return ((void *)0);
    return av_malloc(nmemb * size);
}
# 113 "./libavutil/mem.h"
void *av_realloc(void *ptr, size_t size) ;
# 123 "./libavutil/mem.h"
void *av_realloc_f(void *ptr, size_t nelem, size_t elsize);
# 133 "./libavutil/mem.h"
void av_free(void *ptr);
# 143 "./libavutil/mem.h"
void *av_mallocz(size_t size) __attribute__((__malloc__)) ;
# 155 "./libavutil/mem.h"
void *av_calloc(size_t nmemb, size_t size) __attribute__((__malloc__));
# 167 "./libavutil/mem.h"
static inline void *av_mallocz_array(size_t nmemb, size_t size)
{
    if (size <= 0 || nmemb >= 2147483647 / size)
        return ((void *)0);
    return av_mallocz(nmemb * size);
}







char *av_strdup(const char *s) __attribute__((__malloc__));
# 189 "./libavutil/mem.h"
void av_freep(void *ptr);
# 198 "./libavutil/mem.h"
void av_dynarray_add(void *tab_ptr, int *nb_ptr, void *elem);





static inline int av_size_mult(size_t a, size_t b, size_t *r)
{
    size_t t = a * b;


    if ((a | b) >= ((size_t)1 << (sizeof(size_t) * 4)) && a && t / a != b)
        return (-(22));
    *r = t;
    return 0;
}




void av_max_alloc(size_t max);
# 229 "./libavutil/mem.h"
void av_memcpy_backptr(uint8_t *dst, int back, int cnt);
# 384 "./libavutil/common.h" 2
# 239 "./libavutil/avutil.h" 2


# 1 "./libavutil/mathematics.h" 1
# 27 "./libavutil/mathematics.h"
# 1 "./libavutil/rational.h" 1
# 32 "./libavutil/rational.h"
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h" 1 3 4
# 33 "./libavutil/rational.h" 2
# 43 "./libavutil/rational.h"
typedef struct AVRational
{
    int num;
    int den;
} AVRational;
# 55 "./libavutil/rational.h"
static inline int av_cmp_q(AVRational a, AVRational b)
{
    const int64_t tmp= a.num * (int64_t)b.den - b.num * (int64_t)a.den;

    if(tmp) return ((tmp ^ a.den ^ b.den)>>63)|1;
    else if(b.den && a.den) return 0;
    else if(a.num && b.num) return (a.num>>31) - (b.num>>31);
    else return (-2147483647 - 1);
}






static inline double av_q2d(AVRational a)
{
    return a.num / (double) a.den;
}
# 83 "./libavutil/rational.h"
int av_reduce(int *dst_num, int *dst_den, int64_t num, int64_t den, int64_t max);







AVRational av_mul_q(AVRational b, AVRational c) __attribute__((const));







AVRational av_div_q(AVRational b, AVRational c) __attribute__((const));







AVRational av_add_q(AVRational b, AVRational c) __attribute__((const));







AVRational av_sub_q(AVRational b, AVRational c) __attribute__((const));






static __attribute__((always_inline)) inline AVRational av_inv_q(AVRational q)
{
    AVRational r = { q.den, q.num };
    return r;
}
# 136 "./libavutil/rational.h"
AVRational av_d2q(double d, int max) __attribute__((const));





int av_nearer_q(AVRational q, AVRational q1, AVRational q2);






int av_find_nearest_q_idx(AVRational q, const AVRational* q_list);
# 28 "./libavutil/mathematics.h" 2
# 1 "./libavutil/intfloat.h" 1
# 27 "./libavutil/intfloat.h"
union av_intfloat32
{
    uint32_t i;
    float f;
};

union av_intfloat64
{
    uint64_t i;
    double f;
};




static __attribute__((always_inline)) inline float av_int2float(uint32_t i)
{
    union av_intfloat32 v;
    v.i = i;
    return v.f;
}




static __attribute__((always_inline)) inline uint32_t av_float2int(float f)
{
    union av_intfloat32 v;
    v.f = f;
    return v.i;
}




static __attribute__((always_inline)) inline double av_int2double(uint64_t i)
{
    union av_intfloat64 v;
    v.i = i;
    return v.f;
}




static __attribute__((always_inline)) inline uint64_t av_double2int(double f)
{
    union av_intfloat64 v;
    v.f = f;
    return v.i;
}
# 29 "./libavutil/mathematics.h" 2
# 67 "./libavutil/mathematics.h"
enum AVRounding
{
    AV_ROUND_ZERO = 0,
    AV_ROUND_INF = 1,
    AV_ROUND_DOWN = 2,
    AV_ROUND_UP = 3,
    AV_ROUND_NEAR_INF = 5,
    AV_ROUND_PASS_MINMAX = 8192,
};






int64_t __attribute__((const)) av_gcd(int64_t a, int64_t b);





int64_t av_rescale(int64_t a, int64_t b, int64_t c) __attribute__((const));
# 96 "./libavutil/mathematics.h"
int64_t av_rescale_rnd(int64_t a, int64_t b, int64_t c, enum AVRounding) __attribute__((const));




int64_t av_rescale_q(int64_t a, AVRational bq, AVRational cq) __attribute__((const));







int64_t av_rescale_q_rnd(int64_t a, AVRational bq, AVRational cq,
                         enum AVRounding) __attribute__((const));







int av_compare_ts(int64_t ts_a, AVRational tb_a, int64_t ts_b, AVRational tb_b);
# 130 "./libavutil/mathematics.h"
int64_t av_compare_mod(uint64_t a, uint64_t b, uint64_t mod);
# 141 "./libavutil/mathematics.h"
int64_t av_rescale_delta(AVRational in_tb, int64_t in_ts, AVRational fs_tb, int duration, int64_t *last, AVRational out_tb);
# 242 "./libavutil/avutil.h" 2

# 1 "./libavutil/intfloat_readwrite.h" 1
# 28 "./libavutil/intfloat_readwrite.h"
typedef struct AVExtFloat
{
    uint8_t exponent[2];
    uint8_t mantissa[8];
} AVExtFloat;

__attribute__((deprecated)) double av_int2dbl(int64_t v) __attribute__((const));
__attribute__((deprecated)) float av_int2flt(int32_t v) __attribute__((const));
__attribute__((deprecated)) double av_ext2dbl(const AVExtFloat ext) __attribute__((const));
__attribute__((deprecated)) int64_t av_dbl2int(double d) __attribute__((const));
__attribute__((deprecated)) int32_t av_flt2int(float d) __attribute__((const));
__attribute__((deprecated)) AVExtFloat av_dbl2ext(double d) __attribute__((const));
# 244 "./libavutil/avutil.h" 2
# 1 "./libavutil/log.h" 1
# 24 "./libavutil/log.h"
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h" 1 3 4
# 105 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 25 "./libavutil/log.h" 2



typedef enum
{
    AV_CLASS_CATEGORY_NA = 0,
    AV_CLASS_CATEGORY_INPUT,
    AV_CLASS_CATEGORY_OUTPUT,
    AV_CLASS_CATEGORY_MUXER,
    AV_CLASS_CATEGORY_DEMUXER,
    AV_CLASS_CATEGORY_ENCODER,
    AV_CLASS_CATEGORY_DECODER,
    AV_CLASS_CATEGORY_FILTER,
    AV_CLASS_CATEGORY_BITSTREAM_FILTER,
    AV_CLASS_CATEGORY_SWSCALER,
    AV_CLASS_CATEGORY_SWRESAMPLER,
    AV_CLASS_CATEGORY_NB,
} AVClassCategory;

struct AVOptionRanges;






typedef struct AVClass
{




    const char* class_name;





    const char* (*item_name)(void* ctx);






    const struct AVOption *option;







    int version;





    int log_level_offset_offset;
# 91 "./libavutil/log.h"
    int parent_log_context_offset;




    void* (*child_next)(void *obj, void *prev);
# 106 "./libavutil/log.h"
    const struct AVClass* (*child_class_next)(const struct AVClass *prev);






    AVClassCategory category;





    AVClassCategory (*get_category)(void* ctx);





    int (*query_ranges)(struct AVOptionRanges **, void *obj, const char *key, int flags);
} AVClass;
# 180 "./libavutil/log.h"
void av_log(void *avcl, int level, const char *fmt, ...) __attribute__((__format__(__printf__, 3, 4)));

void av_vlog(void *avcl, int level, const char *fmt, va_list);
int av_log_get_level(void);
void av_log_set_level(int);
void av_log_set_callback(void (*)(void*, int, const char*, va_list));
void av_log_default_callback(void* ptr, int level, const char* fmt, va_list vl);
const char* av_default_item_name(void* ctx);
AVClassCategory av_default_get_category(void *ptr);
# 197 "./libavutil/log.h"
void av_log_format_line(void *ptr, int level, const char *fmt, va_list vl,
                        char *line, int line_size, int *print_prefix);
# 220 "./libavutil/log.h"
void av_log_set_flags(int arg);
# 245 "./libavutil/avutil.h" 2
# 1 "./libavutil/pixfmt.h" 1
# 31 "./libavutil/pixfmt.h"
# 1 "./libavutil/version.h" 1
# 32 "./libavutil/pixfmt.h" 2
# 66 "./libavutil/pixfmt.h"
enum AVPixelFormat
{
    AV_PIX_FMT_NONE = -1,
    AV_PIX_FMT_YUV420P,
    AV_PIX_FMT_YUYV422,
    AV_PIX_FMT_RGB24,
    AV_PIX_FMT_BGR24,
    AV_PIX_FMT_YUV422P,
    AV_PIX_FMT_YUV444P,
    AV_PIX_FMT_YUV410P,
    AV_PIX_FMT_YUV411P,
    AV_PIX_FMT_GRAY8,
    AV_PIX_FMT_MONOWHITE,
    AV_PIX_FMT_MONOBLACK,
    AV_PIX_FMT_PAL8,
    AV_PIX_FMT_YUVJ420P,
    AV_PIX_FMT_YUVJ422P,
    AV_PIX_FMT_YUVJ444P,
    AV_PIX_FMT_XVMC_MPEG2_MC,
    AV_PIX_FMT_XVMC_MPEG2_IDCT,
    AV_PIX_FMT_UYVY422,
    AV_PIX_FMT_UYYVYY411,
    AV_PIX_FMT_BGR8,
    AV_PIX_FMT_BGR4,
    AV_PIX_FMT_BGR4_BYTE,
    AV_PIX_FMT_RGB8,
    AV_PIX_FMT_RGB4,
    AV_PIX_FMT_RGB4_BYTE,
    AV_PIX_FMT_NV12,
    AV_PIX_FMT_NV21,

    AV_PIX_FMT_ARGB,
    AV_PIX_FMT_RGBA,
    AV_PIX_FMT_ABGR,
    AV_PIX_FMT_BGRA,

    AV_PIX_FMT_GRAY16BE,
    AV_PIX_FMT_GRAY16LE,
    AV_PIX_FMT_YUV440P,
    AV_PIX_FMT_YUVJ440P,
    AV_PIX_FMT_YUVA420P,
    AV_PIX_FMT_VDPAU_H264,
    AV_PIX_FMT_VDPAU_MPEG1,
    AV_PIX_FMT_VDPAU_MPEG2,
    AV_PIX_FMT_VDPAU_WMV3,
    AV_PIX_FMT_VDPAU_VC1,
    AV_PIX_FMT_RGB48BE,
    AV_PIX_FMT_RGB48LE,

    AV_PIX_FMT_RGB565BE,
    AV_PIX_FMT_RGB565LE,
    AV_PIX_FMT_RGB555BE,
    AV_PIX_FMT_RGB555LE,

    AV_PIX_FMT_BGR565BE,
    AV_PIX_FMT_BGR565LE,
    AV_PIX_FMT_BGR555BE,
    AV_PIX_FMT_BGR555LE,

    AV_PIX_FMT_VAAPI_MOCO,
    AV_PIX_FMT_VAAPI_IDCT,
    AV_PIX_FMT_VAAPI_VLD,

    AV_PIX_FMT_YUV420P16LE,
    AV_PIX_FMT_YUV420P16BE,
    AV_PIX_FMT_YUV422P16LE,
    AV_PIX_FMT_YUV422P16BE,
    AV_PIX_FMT_YUV444P16LE,
    AV_PIX_FMT_YUV444P16BE,
    AV_PIX_FMT_VDPAU_MPEG4,
    AV_PIX_FMT_DXVA2_VLD,

    AV_PIX_FMT_RGB444LE,
    AV_PIX_FMT_RGB444BE,
    AV_PIX_FMT_BGR444LE,
    AV_PIX_FMT_BGR444BE,
    AV_PIX_FMT_GRAY8A,
    AV_PIX_FMT_BGR48BE,
    AV_PIX_FMT_BGR48LE,




    AV_PIX_FMT_YUV420P9BE,
    AV_PIX_FMT_YUV420P9LE,
    AV_PIX_FMT_YUV420P10BE,
    AV_PIX_FMT_YUV420P10LE,
    AV_PIX_FMT_YUV422P10BE,
    AV_PIX_FMT_YUV422P10LE,
    AV_PIX_FMT_YUV444P9BE,
    AV_PIX_FMT_YUV444P9LE,
    AV_PIX_FMT_YUV444P10BE,
    AV_PIX_FMT_YUV444P10LE,
    AV_PIX_FMT_YUV422P9BE,
    AV_PIX_FMT_YUV422P9LE,
    AV_PIX_FMT_VDA_VLD,







    AV_PIX_FMT_GBRP,
    AV_PIX_FMT_GBRP9BE,
    AV_PIX_FMT_GBRP9LE,
    AV_PIX_FMT_GBRP10BE,
    AV_PIX_FMT_GBRP10LE,
    AV_PIX_FMT_GBRP16BE,
    AV_PIX_FMT_GBRP16LE,






    AV_PIX_FMT_YUVA422P_LIBAV,
    AV_PIX_FMT_YUVA444P_LIBAV,

    AV_PIX_FMT_YUVA420P9BE,
    AV_PIX_FMT_YUVA420P9LE,
    AV_PIX_FMT_YUVA422P9BE,
    AV_PIX_FMT_YUVA422P9LE,
    AV_PIX_FMT_YUVA444P9BE,
    AV_PIX_FMT_YUVA444P9LE,
    AV_PIX_FMT_YUVA420P10BE,
    AV_PIX_FMT_YUVA420P10LE,
    AV_PIX_FMT_YUVA422P10BE,
    AV_PIX_FMT_YUVA422P10LE,
    AV_PIX_FMT_YUVA444P10BE,
    AV_PIX_FMT_YUVA444P10LE,
    AV_PIX_FMT_YUVA420P16BE,
    AV_PIX_FMT_YUVA420P16LE,
    AV_PIX_FMT_YUVA422P16BE,
    AV_PIX_FMT_YUVA422P16LE,
    AV_PIX_FMT_YUVA444P16BE,
    AV_PIX_FMT_YUVA444P16LE,


    AV_PIX_FMT_RGBA64BE=0x123,
    AV_PIX_FMT_RGBA64LE,
    AV_PIX_FMT_BGRA64BE,
    AV_PIX_FMT_BGRA64LE,

    AV_PIX_FMT_0RGB=0x123+4,
    AV_PIX_FMT_RGB0,
    AV_PIX_FMT_0BGR,
    AV_PIX_FMT_BGR0,
    AV_PIX_FMT_YUVA444P,
    AV_PIX_FMT_YUVA422P,

    AV_PIX_FMT_YUV420P12BE,
    AV_PIX_FMT_YUV420P12LE,
    AV_PIX_FMT_YUV420P14BE,
    AV_PIX_FMT_YUV420P14LE,
    AV_PIX_FMT_YUV422P12BE,
    AV_PIX_FMT_YUV422P12LE,
    AV_PIX_FMT_YUV422P14BE,
    AV_PIX_FMT_YUV422P14LE,
    AV_PIX_FMT_YUV444P12BE,
    AV_PIX_FMT_YUV444P12LE,
    AV_PIX_FMT_YUV444P14BE,
    AV_PIX_FMT_YUV444P14LE,
    AV_PIX_FMT_GBRP12BE,
    AV_PIX_FMT_GBRP12LE,
    AV_PIX_FMT_GBRP14BE,
    AV_PIX_FMT_GBRP14LE,

    AV_PIX_FMT_NB,


# 1 "./libavutil/old_pix_fmts.h" 1
# 31 "./libavutil/old_pix_fmts.h"
    PIX_FMT_NONE = AV_PIX_FMT_NONE,
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

    PIX_FMT_RGB444LE,
    PIX_FMT_RGB444BE,
    PIX_FMT_BGR444LE,
    PIX_FMT_BGR444BE,
    PIX_FMT_GRAY8A,
    PIX_FMT_BGR48BE,
    PIX_FMT_BGR48LE,




    PIX_FMT_YUV420P9BE,
    PIX_FMT_YUV420P9LE,
    PIX_FMT_YUV420P10BE,
    PIX_FMT_YUV420P10LE,
    PIX_FMT_YUV422P10BE,
    PIX_FMT_YUV422P10LE,
    PIX_FMT_YUV444P9BE,
    PIX_FMT_YUV444P9LE,
    PIX_FMT_YUV444P10BE,
    PIX_FMT_YUV444P10LE,
    PIX_FMT_YUV422P9BE,
    PIX_FMT_YUV422P9LE,
    PIX_FMT_VDA_VLD,







    PIX_FMT_GBRP,
    PIX_FMT_GBRP9BE,
    PIX_FMT_GBRP9LE,
    PIX_FMT_GBRP10BE,
    PIX_FMT_GBRP10LE,
    PIX_FMT_GBRP16BE,
    PIX_FMT_GBRP16LE,


    PIX_FMT_RGBA64BE=0x123,
    PIX_FMT_RGBA64LE,
    PIX_FMT_BGRA64BE,
    PIX_FMT_BGRA64LE,

    PIX_FMT_0RGB=0x123+4,
    PIX_FMT_RGB0,
    PIX_FMT_0BGR,
    PIX_FMT_BGR0,
    PIX_FMT_YUVA444P,
    PIX_FMT_YUVA422P,

    PIX_FMT_YUV420P12BE,
    PIX_FMT_YUV420P12LE,
    PIX_FMT_YUV420P14BE,
    PIX_FMT_YUV420P14LE,
    PIX_FMT_YUV422P12BE,
    PIX_FMT_YUV422P12LE,
    PIX_FMT_YUV422P14BE,
    PIX_FMT_YUV422P14LE,
    PIX_FMT_YUV444P12BE,
    PIX_FMT_YUV444P12LE,
    PIX_FMT_YUV444P14BE,
    PIX_FMT_YUV444P14LE,
    PIX_FMT_GBRP12BE,
    PIX_FMT_GBRP12LE,
    PIX_FMT_GBRP14BE,
    PIX_FMT_GBRP14LE,

    PIX_FMT_NB,
# 237 "./libavutil/pixfmt.h" 2

};
# 246 "./libavutil/avutil.h" 2




static inline void *av_x_if_null(const void *p, const void *x)
{
    return (void *)(intptr_t)(p ? p : x);
}
# 25 "./libavutil/samplefmt.h" 2
# 49 "./libavutil/samplefmt.h"
enum AVSampleFormat
{
    AV_SAMPLE_FMT_NONE = -1,
    AV_SAMPLE_FMT_U8,
    AV_SAMPLE_FMT_S16,
    AV_SAMPLE_FMT_S32,
    AV_SAMPLE_FMT_FLT,
    AV_SAMPLE_FMT_DBL,

    AV_SAMPLE_FMT_U8P,
    AV_SAMPLE_FMT_S16P,
    AV_SAMPLE_FMT_S32P,
    AV_SAMPLE_FMT_FLTP,
    AV_SAMPLE_FMT_DBLP,

    AV_SAMPLE_FMT_NB
};





const char *av_get_sample_fmt_name(enum AVSampleFormat sample_fmt);





enum AVSampleFormat av_get_sample_fmt(const char *name);







enum AVSampleFormat av_get_alt_sample_fmt(enum AVSampleFormat sample_fmt, int planar);
# 95 "./libavutil/samplefmt.h"
enum AVSampleFormat av_get_packed_sample_fmt(enum AVSampleFormat sample_fmt);
# 106 "./libavutil/samplefmt.h"
enum AVSampleFormat av_get_planar_sample_fmt(enum AVSampleFormat sample_fmt);
# 120 "./libavutil/samplefmt.h"
char *av_get_sample_fmt_string(char *buf, int buf_size, enum AVSampleFormat sample_fmt);





__attribute__((deprecated))
int av_get_bits_per_sample_fmt(enum AVSampleFormat sample_fmt);
# 137 "./libavutil/samplefmt.h"
int av_get_bytes_per_sample(enum AVSampleFormat sample_fmt);







int av_sample_fmt_is_planar(enum AVSampleFormat sample_fmt);
# 157 "./libavutil/samplefmt.h"
int av_samples_get_buffer_size(int *linesize, int nb_channels, int nb_samples,
                               enum AVSampleFormat sample_fmt, int align);
# 190 "./libavutil/samplefmt.h"
int av_samples_fill_arrays(uint8_t **audio_data, int *linesize,
                           const uint8_t *buf,
                           int nb_channels, int nb_samples,
                           enum AVSampleFormat sample_fmt, int align);
# 213 "./libavutil/samplefmt.h"
int av_samples_alloc(uint8_t **audio_data, int *linesize, int nb_channels,
                     int nb_samples, enum AVSampleFormat sample_fmt, int align);
# 227 "./libavutil/samplefmt.h"
int av_samples_copy(uint8_t **dst, uint8_t * const *src, int dst_offset,
                    int src_offset, int nb_samples, int nb_channels,
                    enum AVSampleFormat sample_fmt);
# 240 "./libavutil/samplefmt.h"
int av_samples_set_silence(uint8_t **audio_data, int offset, int nb_samples,
                           int nb_channels, enum AVSampleFormat sample_fmt);
# 31 "libavcodec/avcodec.h" 2
# 1 "./libavutil/avutil.h" 1
# 32 "libavcodec/avcodec.h" 2
# 1 "./libavutil/cpu.h" 1
# 67 "./libavutil/cpu.h"
int av_get_cpu_flags(void);





void av_force_cpu_flags(int flags);
# 82 "./libavutil/cpu.h"
__attribute__((deprecated)) void av_set_cpu_flags_mask(int mask);
# 93 "./libavutil/cpu.h"
__attribute__((deprecated))
int av_parse_cpu_flags(const char *s);






int av_parse_cpu_caps(unsigned *flags, const char *s);


int ff_get_cpu_flags_arm(void);
int ff_get_cpu_flags_ppc(void);
int ff_get_cpu_flags_x86(void);
# 33 "libavcodec/avcodec.h" 2
# 1 "./libavutil/channel_layout.h" 1
# 113 "./libavutil/channel_layout.h"
enum AVMatrixEncoding
{
    AV_MATRIX_ENCODING_NONE,
    AV_MATRIX_ENCODING_DOLBY,
    AV_MATRIX_ENCODING_DPLII,
    AV_MATRIX_ENCODING_NB
};
# 141 "./libavutil/channel_layout.h"
uint64_t av_get_channel_layout(const char *name);
# 150 "./libavutil/channel_layout.h"
void av_get_channel_layout_string(char *buf, int buf_size, int nb_channels, uint64_t channel_layout);

struct AVBPrint;



void av_bprint_channel_layout(struct AVBPrint *bp, int nb_channels, uint64_t channel_layout);




int av_get_channel_layout_nb_channels(uint64_t channel_layout);




int64_t av_get_default_channel_layout(int nb_channels);
# 177 "./libavutil/channel_layout.h"
int av_get_channel_layout_channel_index(uint64_t channel_layout,
                                        uint64_t channel);




uint64_t av_channel_layout_extract_channel(uint64_t channel_layout, int index);






const char *av_get_channel_name(uint64_t channel);







const char *av_get_channel_description(uint64_t channel);
# 209 "./libavutil/channel_layout.h"
int av_get_standard_channel_layout(unsigned index, uint64_t *layout,
                                   const char **name);
# 34 "libavcodec/avcodec.h" 2
# 1 "./libavutil/dict.h" 1
# 77 "./libavutil/dict.h"
typedef struct AVDictionaryEntry
{
    char *key;
    char *value;
} AVDictionaryEntry;

typedef struct AVDictionary AVDictionary;
# 92 "./libavutil/dict.h"
AVDictionaryEntry *
av_dict_get(AVDictionary *m, const char *key, const AVDictionaryEntry *prev, int flags);







int av_dict_count(const AVDictionary *m);
# 113 "./libavutil/dict.h"
int av_dict_set(AVDictionary **pm, const char *key, const char *value, int flags);
# 123 "./libavutil/dict.h"
void av_dict_copy(AVDictionary **dst, AVDictionary *src, int flags);





void av_dict_free(AVDictionary **m);
# 35 "libavcodec/avcodec.h" 2
# 1 "./libavutil/log.h" 1
# 36 "libavcodec/avcodec.h" 2
# 1 "./libavutil/pixfmt.h" 1
# 37 "libavcodec/avcodec.h" 2
# 1 "./libavutil/rational.h" 1
# 38 "libavcodec/avcodec.h" 2

# 1 "./libavcodec/version.h" 1
# 29 "./libavcodec/version.h"
# 1 "./libavutil/avutil.h" 1
# 30 "./libavcodec/version.h" 2
# 40 "libavcodec/avcodec.h" 2
# 97 "libavcodec/avcodec.h"
enum AVCodecID
{
    AV_CODEC_ID_NONE,


    AV_CODEC_ID_MPEG1VIDEO,
    AV_CODEC_ID_MPEG2VIDEO,
    AV_CODEC_ID_MPEG2VIDEO_XVMC,
    AV_CODEC_ID_H261,
    AV_CODEC_ID_H263,
    AV_CODEC_ID_RV10,
    AV_CODEC_ID_RV20,
    AV_CODEC_ID_MJPEG,
    AV_CODEC_ID_MJPEGB,
    AV_CODEC_ID_LJPEG,
    AV_CODEC_ID_SP5X,
    AV_CODEC_ID_JPEGLS,
    AV_CODEC_ID_MPEG4,
    AV_CODEC_ID_RAWVIDEO,
    AV_CODEC_ID_MSMPEG4V1,
    AV_CODEC_ID_MSMPEG4V2,
    AV_CODEC_ID_MSMPEG4V3,
    AV_CODEC_ID_WMV1,
    AV_CODEC_ID_WMV2,
    AV_CODEC_ID_H263P,
    AV_CODEC_ID_H263I,
    AV_CODEC_ID_FLV1,
    AV_CODEC_ID_SVQ1,
    AV_CODEC_ID_SVQ3,
    AV_CODEC_ID_DVVIDEO,
    AV_CODEC_ID_HUFFYUV,
    AV_CODEC_ID_CYUV,
    AV_CODEC_ID_H264,
    AV_CODEC_ID_INDEO3,
    AV_CODEC_ID_VP3,
    AV_CODEC_ID_THEORA,
    AV_CODEC_ID_ASV1,
    AV_CODEC_ID_ASV2,
    AV_CODEC_ID_FFV1,
    AV_CODEC_ID_4XM,
    AV_CODEC_ID_VCR1,
    AV_CODEC_ID_CLJR,
    AV_CODEC_ID_MDEC,
    AV_CODEC_ID_ROQ,
    AV_CODEC_ID_INTERPLAY_VIDEO,
    AV_CODEC_ID_XAN_WC3,
    AV_CODEC_ID_XAN_WC4,
    AV_CODEC_ID_RPZA,
    AV_CODEC_ID_CINEPAK,
    AV_CODEC_ID_WS_VQA,
    AV_CODEC_ID_MSRLE,
    AV_CODEC_ID_MSVIDEO1,
    AV_CODEC_ID_IDCIN,
    AV_CODEC_ID_8BPS,
    AV_CODEC_ID_SMC,
    AV_CODEC_ID_FLIC,
    AV_CODEC_ID_TRUEMOTION1,
    AV_CODEC_ID_VMDVIDEO,
    AV_CODEC_ID_MSZH,
    AV_CODEC_ID_ZLIB,
    AV_CODEC_ID_QTRLE,
    AV_CODEC_ID_SNOW,
    AV_CODEC_ID_TSCC,
    AV_CODEC_ID_ULTI,
    AV_CODEC_ID_QDRAW,
    AV_CODEC_ID_VIXL,
    AV_CODEC_ID_QPEG,
    AV_CODEC_ID_PNG,
    AV_CODEC_ID_PPM,
    AV_CODEC_ID_PBM,
    AV_CODEC_ID_PGM,
    AV_CODEC_ID_PGMYUV,
    AV_CODEC_ID_PAM,
    AV_CODEC_ID_FFVHUFF,
    AV_CODEC_ID_RV30,
    AV_CODEC_ID_RV40,
    AV_CODEC_ID_VC1,
    AV_CODEC_ID_WMV3,
    AV_CODEC_ID_LOCO,
    AV_CODEC_ID_WNV1,
    AV_CODEC_ID_AASC,
    AV_CODEC_ID_INDEO2,
    AV_CODEC_ID_FRAPS,
    AV_CODEC_ID_TRUEMOTION2,
    AV_CODEC_ID_BMP,
    AV_CODEC_ID_CSCD,
    AV_CODEC_ID_MMVIDEO,
    AV_CODEC_ID_ZMBV,
    AV_CODEC_ID_AVS,
    AV_CODEC_ID_SMACKVIDEO,
    AV_CODEC_ID_NUV,
    AV_CODEC_ID_KMVC,
    AV_CODEC_ID_FLASHSV,
    AV_CODEC_ID_CAVS,
    AV_CODEC_ID_JPEG2000,
    AV_CODEC_ID_VMNC,
    AV_CODEC_ID_VP5,
    AV_CODEC_ID_VP6,
    AV_CODEC_ID_VP6F,
    AV_CODEC_ID_TARGA,
    AV_CODEC_ID_DSICINVIDEO,
    AV_CODEC_ID_TIERTEXSEQVIDEO,
    AV_CODEC_ID_TIFF,
    AV_CODEC_ID_GIF,
    AV_CODEC_ID_DXA,
    AV_CODEC_ID_DNXHD,
    AV_CODEC_ID_THP,
    AV_CODEC_ID_SGI,
    AV_CODEC_ID_C93,
    AV_CODEC_ID_BETHSOFTVID,
    AV_CODEC_ID_PTX,
    AV_CODEC_ID_TXD,
    AV_CODEC_ID_VP6A,
    AV_CODEC_ID_AMV,
    AV_CODEC_ID_VB,
    AV_CODEC_ID_PCX,
    AV_CODEC_ID_SUNRAST,
    AV_CODEC_ID_INDEO4,
    AV_CODEC_ID_INDEO5,
    AV_CODEC_ID_MIMIC,
    AV_CODEC_ID_RL2,
    AV_CODEC_ID_ESCAPE124,
    AV_CODEC_ID_DIRAC,
    AV_CODEC_ID_BFI,
    AV_CODEC_ID_CMV,
    AV_CODEC_ID_MOTIONPIXELS,
    AV_CODEC_ID_TGV,
    AV_CODEC_ID_TGQ,
    AV_CODEC_ID_TQI,
    AV_CODEC_ID_AURA,
    AV_CODEC_ID_AURA2,
    AV_CODEC_ID_V210X,
    AV_CODEC_ID_TMV,
    AV_CODEC_ID_V210,
    AV_CODEC_ID_DPX,
    AV_CODEC_ID_MAD,
    AV_CODEC_ID_FRWU,
    AV_CODEC_ID_FLASHSV2,
    AV_CODEC_ID_CDGRAPHICS,
    AV_CODEC_ID_R210,
    AV_CODEC_ID_ANM,
    AV_CODEC_ID_BINKVIDEO,
    AV_CODEC_ID_IFF_ILBM,
    AV_CODEC_ID_IFF_BYTERUN1,
    AV_CODEC_ID_KGV1,
    AV_CODEC_ID_YOP,
    AV_CODEC_ID_VP8,
    AV_CODEC_ID_PICTOR,
    AV_CODEC_ID_ANSI,
    AV_CODEC_ID_A64_MULTI,
    AV_CODEC_ID_A64_MULTI5,
    AV_CODEC_ID_R10K,
    AV_CODEC_ID_MXPEG,
    AV_CODEC_ID_LAGARITH,
    AV_CODEC_ID_PRORES,
    AV_CODEC_ID_JV,
    AV_CODEC_ID_DFA,
    AV_CODEC_ID_WMV3IMAGE,
    AV_CODEC_ID_VC1IMAGE,
    AV_CODEC_ID_UTVIDEO,
    AV_CODEC_ID_BMV_VIDEO,
    AV_CODEC_ID_VBLE,
    AV_CODEC_ID_DXTORY,
    AV_CODEC_ID_V410,
    AV_CODEC_ID_XWD,
    AV_CODEC_ID_CDXL,
    AV_CODEC_ID_XBM,
    AV_CODEC_ID_ZEROCODEC,
    AV_CODEC_ID_MSS1,
    AV_CODEC_ID_MSA1,
    AV_CODEC_ID_TSCC2,
    AV_CODEC_ID_MTS2,
    AV_CODEC_ID_CLLC,
    AV_CODEC_ID_MSS2,
    AV_CODEC_ID_BRENDER_PIX= (('X') | (('I') << 8) | (('P') << 16) | ((unsigned)('B') << 24)),
    AV_CODEC_ID_Y41P = (('P') | (('1') << 8) | (('4') << 16) | ((unsigned)('Y') << 24)),
    AV_CODEC_ID_ESCAPE130 = (('0') | (('3') << 8) | (('1') << 16) | ((unsigned)('E') << 24)),
    AV_CODEC_ID_EXR = (('R') | (('X') << 8) | (('E') << 16) | ((unsigned)('0') << 24)),
    AV_CODEC_ID_AVRP = (('P') | (('R') << 8) | (('V') << 16) | ((unsigned)('A') << 24)),

    AV_CODEC_ID_012V = (('V') | (('2') << 8) | (('1') << 16) | ((unsigned)('0') << 24)),
    AV_CODEC_ID_G2M = (('M') | (('2') << 8) | (('G') << 16) | ((unsigned)(0) << 24)),
    AV_CODEC_ID_AVUI = (('I') | (('U') << 8) | (('V') << 16) | ((unsigned)('A') << 24)),
    AV_CODEC_ID_AYUV = (('V') | (('U') << 8) | (('Y') << 16) | ((unsigned)('A') << 24)),
    AV_CODEC_ID_TARGA_Y216 = (('6') | (('1') << 8) | (('2') << 16) | ((unsigned)('T') << 24)),
    AV_CODEC_ID_V308 = (('8') | (('0') << 8) | (('3') << 16) | ((unsigned)('V') << 24)),
    AV_CODEC_ID_V408 = (('8') | (('0') << 8) | (('4') << 16) | ((unsigned)('V') << 24)),
    AV_CODEC_ID_YUV4 = (('4') | (('V') << 8) | (('U') << 16) | ((unsigned)('Y') << 24)),
    AV_CODEC_ID_SANM = (('M') | (('N') << 8) | (('A') << 16) | ((unsigned)('S') << 24)),
    AV_CODEC_ID_PAF_VIDEO = (('V') | (('F') << 8) | (('A') << 16) | ((unsigned)('P') << 24)),
    AV_CODEC_ID_AVRN = (('n') | (('R') << 8) | (('V') << 16) | ((unsigned)('A') << 24)),
    AV_CODEC_ID_CPIA = (('A') | (('I') << 8) | (('P') << 16) | ((unsigned)('C') << 24)),
    AV_CODEC_ID_XFACE = (('C') | (('A') << 8) | (('F') << 16) | ((unsigned)('X') << 24)),
    AV_CODEC_ID_SGIRLE = (('R') | (('I') << 8) | (('G') << 16) | ((unsigned)('S') << 24)),
    AV_CODEC_ID_MVC1 = (('1') | (('C') << 8) | (('V') << 16) | ((unsigned)('M') << 24)),
    AV_CODEC_ID_MVC2 = (('2') | (('C') << 8) | (('V') << 16) | ((unsigned)('M') << 24)),


    AV_CODEC_ID_FIRST_AUDIO = 0x10000,
    AV_CODEC_ID_PCM_S16LE = 0x10000,
    AV_CODEC_ID_PCM_S16BE,
    AV_CODEC_ID_PCM_U16LE,
    AV_CODEC_ID_PCM_U16BE,
    AV_CODEC_ID_PCM_S8,
    AV_CODEC_ID_PCM_U8,
    AV_CODEC_ID_PCM_MULAW,
    AV_CODEC_ID_PCM_ALAW,
    AV_CODEC_ID_PCM_S32LE,
    AV_CODEC_ID_PCM_S32BE,
    AV_CODEC_ID_PCM_U32LE,
    AV_CODEC_ID_PCM_U32BE,
    AV_CODEC_ID_PCM_S24LE,
    AV_CODEC_ID_PCM_S24BE,
    AV_CODEC_ID_PCM_U24LE,
    AV_CODEC_ID_PCM_U24BE,
    AV_CODEC_ID_PCM_S24DAUD,
    AV_CODEC_ID_PCM_ZORK,
    AV_CODEC_ID_PCM_S16LE_PLANAR,
    AV_CODEC_ID_PCM_DVD,
    AV_CODEC_ID_PCM_F32BE,
    AV_CODEC_ID_PCM_F32LE,
    AV_CODEC_ID_PCM_F64BE,
    AV_CODEC_ID_PCM_F64LE,
    AV_CODEC_ID_PCM_BLURAY,
    AV_CODEC_ID_PCM_LXF,
    AV_CODEC_ID_S302M,
    AV_CODEC_ID_PCM_S8_PLANAR,
    AV_CODEC_ID_PCM_S24LE_PLANAR = (('P') | (('S') << 8) | (('P') << 16) | ((unsigned)(24) << 24)),
    AV_CODEC_ID_PCM_S32LE_PLANAR = (('P') | (('S') << 8) | (('P') << 16) | ((unsigned)(32) << 24)),
    AV_CODEC_ID_PCM_S16BE_PLANAR = ((16) | (('P') << 8) | (('S') << 16) | ((unsigned)('P') << 24)),


    AV_CODEC_ID_ADPCM_IMA_QT = 0x11000,
    AV_CODEC_ID_ADPCM_IMA_WAV,
    AV_CODEC_ID_ADPCM_IMA_DK3,
    AV_CODEC_ID_ADPCM_IMA_DK4,
    AV_CODEC_ID_ADPCM_IMA_WS,
    AV_CODEC_ID_ADPCM_IMA_SMJPEG,
    AV_CODEC_ID_ADPCM_MS,
    AV_CODEC_ID_ADPCM_4XM,
    AV_CODEC_ID_ADPCM_XA,
    AV_CODEC_ID_ADPCM_ADX,
    AV_CODEC_ID_ADPCM_EA,
    AV_CODEC_ID_ADPCM_G726,
    AV_CODEC_ID_ADPCM_CT,
    AV_CODEC_ID_ADPCM_SWF,
    AV_CODEC_ID_ADPCM_YAMAHA,
    AV_CODEC_ID_ADPCM_SBPRO_4,
    AV_CODEC_ID_ADPCM_SBPRO_3,
    AV_CODEC_ID_ADPCM_SBPRO_2,
    AV_CODEC_ID_ADPCM_THP,
    AV_CODEC_ID_ADPCM_IMA_AMV,
    AV_CODEC_ID_ADPCM_EA_R1,
    AV_CODEC_ID_ADPCM_EA_R3,
    AV_CODEC_ID_ADPCM_EA_R2,
    AV_CODEC_ID_ADPCM_IMA_EA_SEAD,
    AV_CODEC_ID_ADPCM_IMA_EA_EACS,
    AV_CODEC_ID_ADPCM_EA_XAS,
    AV_CODEC_ID_ADPCM_EA_MAXIS_XA,
    AV_CODEC_ID_ADPCM_IMA_ISS,
    AV_CODEC_ID_ADPCM_G722,
    AV_CODEC_ID_ADPCM_IMA_APC,
    AV_CODEC_ID_VIMA = (('A') | (('M') << 8) | (('I') << 16) | ((unsigned)('V') << 24)),
    AV_CODEC_ID_ADPCM_AFC = ((' ') | (('C') << 8) | (('F') << 16) | ((unsigned)('A') << 24)),
    AV_CODEC_ID_ADPCM_IMA_OKI = ((' ') | (('I') << 8) | (('K') << 16) | ((unsigned)('O') << 24)),


    AV_CODEC_ID_AMR_NB = 0x12000,
    AV_CODEC_ID_AMR_WB,


    AV_CODEC_ID_RA_144 = 0x13000,
    AV_CODEC_ID_RA_288,


    AV_CODEC_ID_ROQ_DPCM = 0x14000,
    AV_CODEC_ID_INTERPLAY_DPCM,
    AV_CODEC_ID_XAN_DPCM,
    AV_CODEC_ID_SOL_DPCM,


    AV_CODEC_ID_MP2 = 0x15000,
    AV_CODEC_ID_MP3,
    AV_CODEC_ID_AAC,
    AV_CODEC_ID_AC3,
    AV_CODEC_ID_DTS,
    AV_CODEC_ID_VORBIS,
    AV_CODEC_ID_DVAUDIO,
    AV_CODEC_ID_WMAV1,
    AV_CODEC_ID_WMAV2,
    AV_CODEC_ID_MACE3,
    AV_CODEC_ID_MACE6,
    AV_CODEC_ID_VMDAUDIO,
    AV_CODEC_ID_FLAC,
    AV_CODEC_ID_MP3ADU,
    AV_CODEC_ID_MP3ON4,
    AV_CODEC_ID_SHORTEN,
    AV_CODEC_ID_ALAC,
    AV_CODEC_ID_WESTWOOD_SND1,
    AV_CODEC_ID_GSM,
    AV_CODEC_ID_QDM2,
    AV_CODEC_ID_COOK,
    AV_CODEC_ID_TRUESPEECH,
    AV_CODEC_ID_TTA,
    AV_CODEC_ID_SMACKAUDIO,
    AV_CODEC_ID_QCELP,
    AV_CODEC_ID_WAVPACK,
    AV_CODEC_ID_DSICINAUDIO,
    AV_CODEC_ID_IMC,
    AV_CODEC_ID_MUSEPACK7,
    AV_CODEC_ID_MLP,
    AV_CODEC_ID_GSM_MS,
    AV_CODEC_ID_ATRAC3,
    AV_CODEC_ID_VOXWARE,
    AV_CODEC_ID_APE,
    AV_CODEC_ID_NELLYMOSER,
    AV_CODEC_ID_MUSEPACK8,
    AV_CODEC_ID_SPEEX,
    AV_CODEC_ID_WMAVOICE,
    AV_CODEC_ID_WMAPRO,
    AV_CODEC_ID_WMALOSSLESS,
    AV_CODEC_ID_ATRAC3P,
    AV_CODEC_ID_EAC3,
    AV_CODEC_ID_SIPR,
    AV_CODEC_ID_MP1,
    AV_CODEC_ID_TWINVQ,
    AV_CODEC_ID_TRUEHD,
    AV_CODEC_ID_MP4ALS,
    AV_CODEC_ID_ATRAC1,
    AV_CODEC_ID_BINKAUDIO_RDFT,
    AV_CODEC_ID_BINKAUDIO_DCT,
    AV_CODEC_ID_AAC_LATM,
    AV_CODEC_ID_QDMC,
    AV_CODEC_ID_CELT,
    AV_CODEC_ID_G723_1,
    AV_CODEC_ID_G729,
    AV_CODEC_ID_8SVX_EXP,
    AV_CODEC_ID_8SVX_FIB,
    AV_CODEC_ID_BMV_AUDIO,
    AV_CODEC_ID_RALF,
    AV_CODEC_ID_IAC,
    AV_CODEC_ID_ILBC,
    AV_CODEC_ID_OPUS_DEPRECATED,
    AV_CODEC_ID_COMFORT_NOISE,
    AV_CODEC_ID_TAK_DEPRECATED,
    AV_CODEC_ID_FFWAVESYNTH = (('S') | (('W') << 8) | (('F') << 16) | ((unsigned)('F') << 24)),

    AV_CODEC_ID_8SVX_RAW = (('X') | (('V') << 8) | (('S') << 16) | ((unsigned)('8') << 24)),

    AV_CODEC_ID_SONIC = (('C') | (('N') << 8) | (('O') << 16) | ((unsigned)('S') << 24)),
    AV_CODEC_ID_SONIC_LS = (('L') | (('N') << 8) | (('O') << 16) | ((unsigned)('S') << 24)),
    AV_CODEC_ID_PAF_AUDIO = (('A') | (('F') << 8) | (('A') << 16) | ((unsigned)('P') << 24)),
    AV_CODEC_ID_OPUS = (('S') | (('U') << 8) | (('P') << 16) | ((unsigned)('O') << 24)),
    AV_CODEC_ID_TAK = (('K') | (('a') << 8) | (('B') << 16) | ((unsigned)('t') << 24)),


    AV_CODEC_ID_FIRST_SUBTITLE = 0x17000,
    AV_CODEC_ID_DVD_SUBTITLE = 0x17000,
    AV_CODEC_ID_DVB_SUBTITLE,
    AV_CODEC_ID_TEXT,
    AV_CODEC_ID_XSUB,
    AV_CODEC_ID_SSA,
    AV_CODEC_ID_MOV_TEXT,
    AV_CODEC_ID_HDMV_PGS_SUBTITLE,
    AV_CODEC_ID_DVB_TELETEXT,
    AV_CODEC_ID_SRT,
    AV_CODEC_ID_MICRODVD = (('D') | (('V') << 8) | (('D') << 16) | ((unsigned)('m') << 24)),
    AV_CODEC_ID_EIA_608 = (('8') | (('0') << 8) | (('6') << 16) | ((unsigned)('c') << 24)),
    AV_CODEC_ID_JACOSUB = (('B') | (('U') << 8) | (('S') << 16) | ((unsigned)('J') << 24)),
    AV_CODEC_ID_SAMI = (('I') | (('M') << 8) | (('A') << 16) | ((unsigned)('S') << 24)),
    AV_CODEC_ID_REALTEXT = (('T') | (('X') << 8) | (('T') << 16) | ((unsigned)('R') << 24)),
    AV_CODEC_ID_SUBVIEWER1 = (('1') | (('V') << 8) | (('b') << 16) | ((unsigned)('S') << 24)),
    AV_CODEC_ID_SUBVIEWER = (('V') | (('b') << 8) | (('u') << 16) | ((unsigned)('S') << 24)),
    AV_CODEC_ID_SUBRIP = (('p') | (('i') << 8) | (('R') << 16) | ((unsigned)('S') << 24)),
    AV_CODEC_ID_WEBVTT = (('T') | (('T') << 8) | (('V') << 16) | ((unsigned)('W') << 24)),
    AV_CODEC_ID_MPL2 = (('2') | (('L') << 8) | (('P') << 16) | ((unsigned)('M') << 24)),
    AV_CODEC_ID_VPLAYER = (('r') | (('l') << 8) | (('P') << 16) | ((unsigned)('V') << 24)),
    AV_CODEC_ID_PJS = (('S') | (('J') << 8) | (('h') << 16) | ((unsigned)('P') << 24)),


    AV_CODEC_ID_FIRST_UNKNOWN = 0x18000,
    AV_CODEC_ID_TTF = 0x18000,
    AV_CODEC_ID_BINTEXT = (('T') | (('X') << 8) | (('T') << 16) | ((unsigned)('B') << 24)),
    AV_CODEC_ID_XBIN = (('N') | (('I') << 8) | (('B') << 16) | ((unsigned)('X') << 24)),
    AV_CODEC_ID_IDF = (('F') | (('D') << 8) | (('I') << 16) | ((unsigned)(0) << 24)),
    AV_CODEC_ID_OTF = (('F') | (('T') << 8) | (('O') << 16) | ((unsigned)(0) << 24)),
    AV_CODEC_ID_SMPTE_KLV = (('A') | (('V') << 8) | (('L') << 16) | ((unsigned)('K') << 24)),

    AV_CODEC_ID_PROBE = 0x19000,

    AV_CODEC_ID_MPEG2TS = 0x20000,

    AV_CODEC_ID_MPEG4SYSTEMS = 0x20001,

    AV_CODEC_ID_FFMETADATA = 0x21000,


# 1 "libavcodec/old_codec_ids.h" 1
# 22 "libavcodec/old_codec_ids.h"
# 1 "./libavutil/common.h" 1
# 23 "libavcodec/old_codec_ids.h" 2
# 32 "libavcodec/old_codec_ids.h"
    CODEC_ID_NONE = AV_CODEC_ID_NONE,


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
    CODEC_ID_PICTOR,
    CODEC_ID_ANSI,
    CODEC_ID_A64_MULTI,
    CODEC_ID_A64_MULTI5,
    CODEC_ID_R10K,
    CODEC_ID_MXPEG,
    CODEC_ID_LAGARITH,
    CODEC_ID_PRORES,
    CODEC_ID_JV,
    CODEC_ID_DFA,
    CODEC_ID_WMV3IMAGE,
    CODEC_ID_VC1IMAGE,
    CODEC_ID_UTVIDEO,
    CODEC_ID_BMV_VIDEO,
    CODEC_ID_VBLE,
    CODEC_ID_DXTORY,
    CODEC_ID_V410,
    CODEC_ID_XWD,
    CODEC_ID_CDXL,
    CODEC_ID_XBM,
    CODEC_ID_ZEROCODEC,
    CODEC_ID_MSS1,
    CODEC_ID_MSA1,
    CODEC_ID_TSCC2,
    CODEC_ID_MTS2,
    CODEC_ID_CLLC,
    CODEC_ID_Y41P = (('P') | (('1') << 8) | (('4') << 16) | ((unsigned)('Y') << 24)),
    CODEC_ID_ESCAPE130 = (('0') | (('3') << 8) | (('1') << 16) | ((unsigned)('E') << 24)),
    CODEC_ID_EXR = (('R') | (('X') << 8) | (('E') << 16) | ((unsigned)('0') << 24)),
    CODEC_ID_AVRP = (('P') | (('R') << 8) | (('V') << 16) | ((unsigned)('A') << 24)),

    CODEC_ID_G2M = (('M') | (('2') << 8) | (('G') << 16) | ((unsigned)(0) << 24)),
    CODEC_ID_AVUI = (('I') | (('U') << 8) | (('V') << 16) | ((unsigned)('A') << 24)),
    CODEC_ID_AYUV = (('V') | (('U') << 8) | (('Y') << 16) | ((unsigned)('A') << 24)),
    CODEC_ID_V308 = (('8') | (('0') << 8) | (('3') << 16) | ((unsigned)('V') << 24)),
    CODEC_ID_V408 = (('8') | (('0') << 8) | (('4') << 16) | ((unsigned)('V') << 24)),
    CODEC_ID_YUV4 = (('4') | (('V') << 8) | (('U') << 16) | ((unsigned)('Y') << 24)),
    CODEC_ID_SANM = (('M') | (('N') << 8) | (('A') << 16) | ((unsigned)('S') << 24)),
    CODEC_ID_PAF_VIDEO = (('V') | (('F') << 8) | (('A') << 16) | ((unsigned)('P') << 24)),


    CODEC_ID_FIRST_AUDIO = 0x10000,
    CODEC_ID_PCM_S16LE = 0x10000,
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
    CODEC_ID_PCM_LXF,
    CODEC_ID_S302M,
    CODEC_ID_PCM_S8_PLANAR,


    CODEC_ID_ADPCM_IMA_QT = 0x11000,
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
    CODEC_ID_ADPCM_G722,
    CODEC_ID_ADPCM_IMA_APC,
    CODEC_ID_VIMA = (('A') | (('M') << 8) | (('I') << 16) | ((unsigned)('V') << 24)),


    CODEC_ID_AMR_NB = 0x12000,
    CODEC_ID_AMR_WB,


    CODEC_ID_RA_144 = 0x13000,
    CODEC_ID_RA_288,


    CODEC_ID_ROQ_DPCM = 0x14000,
    CODEC_ID_INTERPLAY_DPCM,
    CODEC_ID_XAN_DPCM,
    CODEC_ID_SOL_DPCM,


    CODEC_ID_MP2 = 0x15000,
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
    CODEC_ID_AAC_LATM,
    CODEC_ID_QDMC,
    CODEC_ID_CELT,
    CODEC_ID_G723_1,
    CODEC_ID_G729,
    CODEC_ID_8SVX_EXP,
    CODEC_ID_8SVX_FIB,
    CODEC_ID_BMV_AUDIO,
    CODEC_ID_RALF,
    CODEC_ID_IAC,
    CODEC_ID_ILBC,
    CODEC_ID_FFWAVESYNTH = (('S') | (('W') << 8) | (('F') << 16) | ((unsigned)('F') << 24)),
    CODEC_ID_8SVX_RAW = (('X') | (('V') << 8) | (('S') << 16) | ((unsigned)('8') << 24)),
    CODEC_ID_SONIC = (('C') | (('N') << 8) | (('O') << 16) | ((unsigned)('S') << 24)),
    CODEC_ID_SONIC_LS = (('L') | (('N') << 8) | (('O') << 16) | ((unsigned)('S') << 24)),
    CODEC_ID_PAF_AUDIO = (('A') | (('F') << 8) | (('A') << 16) | ((unsigned)('P') << 24)),
    CODEC_ID_OPUS = (('S') | (('U') << 8) | (('P') << 16) | ((unsigned)('O') << 24)),


    CODEC_ID_FIRST_SUBTITLE = 0x17000,
    CODEC_ID_DVD_SUBTITLE = 0x17000,
    CODEC_ID_DVB_SUBTITLE,
    CODEC_ID_TEXT,
    CODEC_ID_XSUB,
    CODEC_ID_SSA,
    CODEC_ID_MOV_TEXT,
    CODEC_ID_HDMV_PGS_SUBTITLE,
    CODEC_ID_DVB_TELETEXT,
    CODEC_ID_SRT,
    CODEC_ID_MICRODVD = (('D') | (('V') << 8) | (('D') << 16) | ((unsigned)('m') << 24)),
    CODEC_ID_EIA_608 = (('8') | (('0') << 8) | (('6') << 16) | ((unsigned)('c') << 24)),
    CODEC_ID_JACOSUB = (('B') | (('U') << 8) | (('S') << 16) | ((unsigned)('J') << 24)),
    CODEC_ID_SAMI = (('I') | (('M') << 8) | (('A') << 16) | ((unsigned)('S') << 24)),
    CODEC_ID_REALTEXT = (('T') | (('X') << 8) | (('T') << 16) | ((unsigned)('R') << 24)),
    CODEC_ID_SUBVIEWER = (('V') | (('b') << 8) | (('u') << 16) | ((unsigned)('S') << 24)),


    CODEC_ID_FIRST_UNKNOWN = 0x18000,
    CODEC_ID_TTF = 0x18000,
    CODEC_ID_BINTEXT = (('T') | (('X') << 8) | (('T') << 16) | ((unsigned)('B') << 24)),
    CODEC_ID_XBIN = (('N') | (('I') << 8) | (('B') << 16) | ((unsigned)('X') << 24)),
    CODEC_ID_IDF = (('F') | (('D') << 8) | (('I') << 16) | ((unsigned)(0) << 24)),
    CODEC_ID_OTF = (('F') | (('T') << 8) | (('O') << 16) | ((unsigned)(0) << 24)),

    CODEC_ID_PROBE = 0x19000,

    CODEC_ID_MPEG2TS = 0x20000,

    CODEC_ID_MPEG4SYSTEMS = 0x20001,

    CODEC_ID_FFMETADATA = 0x21000,
# 494 "libavcodec/avcodec.h" 2

};
# 506 "libavcodec/avcodec.h"
typedef struct AVCodecDescriptor
{
    enum AVCodecID id;
    enum AVMediaType type;





    const char *name;



    const char *long_name;



    int props;
} AVCodecDescriptor;
# 568 "libavcodec/avcodec.h"
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
    AVDISCARD_DEFAULT = 0,
    AVDISCARD_NONREF = 8,
    AVDISCARD_BIDIR = 16,
    AVDISCARD_NONKEY = 32,
    AVDISCARD_ALL = 48,
};

enum AVColorPrimaries
{
    AVCOL_PRI_BT709 = 1,
    AVCOL_PRI_UNSPECIFIED = 2,
    AVCOL_PRI_BT470M = 4,
    AVCOL_PRI_BT470BG = 5,
    AVCOL_PRI_SMPTE170M = 6,
    AVCOL_PRI_SMPTE240M = 7,
    AVCOL_PRI_FILM = 8,
    AVCOL_PRI_NB ,
};

enum AVColorTransferCharacteristic
{
    AVCOL_TRC_BT709 = 1,
    AVCOL_TRC_UNSPECIFIED = 2,
    AVCOL_TRC_GAMMA22 = 4,
    AVCOL_TRC_GAMMA28 = 5,
    AVCOL_TRC_SMPTE240M = 7,
    AVCOL_TRC_NB ,
};

enum AVColorSpace
{
    AVCOL_SPC_RGB = 0,
    AVCOL_SPC_BT709 = 1,
    AVCOL_SPC_UNSPECIFIED = 2,
    AVCOL_SPC_FCC = 4,
    AVCOL_SPC_BT470BG = 5,
    AVCOL_SPC_SMPTE170M = 6,
    AVCOL_SPC_SMPTE240M = 7,
    AVCOL_SPC_YCOCG = 8,
    AVCOL_SPC_NB ,
};


enum AVColorRange
{
    AVCOL_RANGE_UNSPECIFIED = 0,
    AVCOL_RANGE_MPEG = 1,
    AVCOL_RANGE_JPEG = 2,
    AVCOL_RANGE_NB ,
};






enum AVChromaLocation
{
    AVCHROMA_LOC_UNSPECIFIED = 0,
    AVCHROMA_LOC_LEFT = 1,
    AVCHROMA_LOC_CENTER = 2,
    AVCHROMA_LOC_TOPLEFT = 3,
    AVCHROMA_LOC_TOP = 4,
    AVCHROMA_LOC_BOTTOMLEFT = 5,
    AVCHROMA_LOC_BOTTOM = 6,
    AVCHROMA_LOC_NB ,
};

enum AVAudioServiceType
{
    AV_AUDIO_SERVICE_TYPE_MAIN = 0,
    AV_AUDIO_SERVICE_TYPE_EFFECTS = 1,
    AV_AUDIO_SERVICE_TYPE_VISUALLY_IMPAIRED = 2,
    AV_AUDIO_SERVICE_TYPE_HEARING_IMPAIRED = 3,
    AV_AUDIO_SERVICE_TYPE_DIALOGUE = 4,
    AV_AUDIO_SERVICE_TYPE_COMMENTARY = 5,
    AV_AUDIO_SERVICE_TYPE_EMERGENCY = 6,
    AV_AUDIO_SERVICE_TYPE_VOICE_OVER = 7,
    AV_AUDIO_SERVICE_TYPE_KARAOKE = 8,
    AV_AUDIO_SERVICE_TYPE_NB ,
};




typedef struct RcOverride
{
    int start_frame;
    int end_frame;
    int qscale;
    float quality_factor;
} RcOverride;
# 857 "libavcodec/avcodec.h"
typedef struct AVPanScan
{





    int id;






    int width;
    int height;






    int16_t position[3][2];
} AVPanScan;
# 902 "libavcodec/avcodec.h"
enum AVPacketSideDataType
{
    AV_PKT_DATA_PALETTE,
    AV_PKT_DATA_NEW_EXTRADATA,
# 921 "libavcodec/avcodec.h"
    AV_PKT_DATA_PARAM_CHANGE,
# 942 "libavcodec/avcodec.h"
    AV_PKT_DATA_H263_MB_INFO,
# 953 "libavcodec/avcodec.h"
    AV_PKT_DATA_SKIP_SAMPLES=70,
# 963 "libavcodec/avcodec.h"
    AV_PKT_DATA_JP_DUALMONO,





    AV_PKT_DATA_STRINGS_METADATA,
# 980 "libavcodec/avcodec.h"
    AV_PKT_DATA_SUBTITLE_POSITION,
};
# 1005 "libavcodec/avcodec.h"
typedef struct AVPacket
{
# 1015 "libavcodec/avcodec.h"
    int64_t pts;





    int64_t dts;
    uint8_t *data;
    int size;
    int stream_index;



    int flags;




    struct
    {
        uint8_t *data;
        int size;
        enum AVPacketSideDataType type;
    } *side_data;
    int side_data_elems;





    int duration;
    void (*destruct)(struct AVPacket *);
    void *priv;
    int64_t pos;
# 1066 "libavcodec/avcodec.h"
    int64_t convergence_duration;
} AVPacket;



enum AVSideDataParamChangeFlags
{
    AV_SIDE_DATA_PARAM_CHANGE_CHANNEL_COUNT = 0x0001,
    AV_SIDE_DATA_PARAM_CHANGE_CHANNEL_LAYOUT = 0x0002,
    AV_SIDE_DATA_PARAM_CHANGE_SAMPLE_RATE = 0x0004,
    AV_SIDE_DATA_PARAM_CHANGE_DIMENSIONS = 0x0008,
};
# 1099 "libavcodec/avcodec.h"
typedef struct AVFrame
{







    uint8_t *data[8];
# 1118 "libavcodec/avcodec.h"
    int linesize[8];
# 1138 "libavcodec/avcodec.h"
    uint8_t **extended_data;






    int width, height;






    int nb_samples;
# 1161 "libavcodec/avcodec.h"
    int format;






    int key_frame;






    enum AVPictureType pict_type;







    uint8_t *base[8];






    AVRational sample_aspect_ratio;







    int64_t pts;






    int64_t pkt_pts;






    int64_t pkt_dts;






    int coded_picture_number;





    int display_picture_number;






    int quality;
# 1242 "libavcodec/avcodec.h"
    int reference;






    int8_t *qscale_table;





    int qstride;




    int qscale_type;







    uint8_t *mbskip_table;
# 1282 "libavcodec/avcodec.h"
    int16_t (*motion_val[2])[2];







    uint32_t *mb_type;






    short *dct_coeff;







    int8_t *ref_index[2];






    void *opaque;






    uint64_t error[8];







    int type;







    int repeat_pict;






    int interlaced_frame;






    int top_field_first;






    int palette_has_changed;






    int buffer_hints;






    AVPanScan *pan_scan;
# 1383 "libavcodec/avcodec.h"
    int64_t reordered_opaque;






    void *hwaccel_picture_private;






    struct AVCodecContext *owner;






    void *thread_opaque;







    uint8_t motion_subsample_log2;







    int sample_rate;







    uint64_t channel_layout;
# 1437 "libavcodec/avcodec.h"
    int64_t best_effort_timestamp;
# 1446 "libavcodec/avcodec.h"
    int64_t pkt_pos;
# 1456 "libavcodec/avcodec.h"
    int64_t pkt_duration;
# 1465 "libavcodec/avcodec.h"
    AVDictionary *metadata;
# 1476 "libavcodec/avcodec.h"
    int decode_error_flags;
# 1487 "libavcodec/avcodec.h"
    int64_t channels;
# 1497 "libavcodec/avcodec.h"
    int pkt_size;
} AVFrame;






int64_t av_frame_get_best_effort_timestamp(const AVFrame *frame);
void av_frame_set_best_effort_timestamp(AVFrame *frame, int64_t val);
int64_t av_frame_get_pkt_duration (const AVFrame *frame);
void av_frame_set_pkt_duration (AVFrame *frame, int64_t val);
int64_t av_frame_get_pkt_pos (const AVFrame *frame);
void av_frame_set_pkt_pos (AVFrame *frame, int64_t val);
int64_t av_frame_get_channel_layout (const AVFrame *frame);
void av_frame_set_channel_layout (AVFrame *frame, int64_t val);
int av_frame_get_channels (const AVFrame *frame);
void av_frame_set_channels (AVFrame *frame, int val);
int av_frame_get_sample_rate (const AVFrame *frame);
void av_frame_set_sample_rate (AVFrame *frame, int val);
AVDictionary *av_frame_get_metadata (const AVFrame *frame);
void av_frame_set_metadata (AVFrame *frame, AVDictionary *val);
int av_frame_get_decode_error_flags (const AVFrame *frame);
void av_frame_set_decode_error_flags (AVFrame *frame, int val);
int av_frame_get_pkt_size(const AVFrame *frame);
void av_frame_set_pkt_size(AVFrame *frame, int val);

struct AVCodecInternal;

enum AVFieldOrder
{
    AV_FIELD_UNKNOWN,
    AV_FIELD_PROGRESSIVE,
    AV_FIELD_TT,
    AV_FIELD_BB,
    AV_FIELD_TB,
    AV_FIELD_BT,
};
# 1544 "libavcodec/avcodec.h"
typedef struct AVCodecContext
{




    const AVClass *av_class;
    int log_level_offset;

    enum AVMediaType codec_type;
    const struct AVCodec *codec;
    char codec_name[32];
    enum AVCodecID codec_id;
# 1570 "libavcodec/avcodec.h"
    unsigned int codec_tag;







    unsigned int stream_codec_tag;





    __attribute__((deprecated)) int sub_id;


    void *priv_data;







    struct AVCodecInternal *internal;






    void *opaque;






    int bit_rate;







    int bit_rate_tolerance;







    int global_quality;





    int compression_level;







    int flags;






    int flags2;
# 1659 "libavcodec/avcodec.h"
    uint8_t *extradata;
    int extradata_size;
# 1670 "libavcodec/avcodec.h"
    AVRational time_base;
# 1679 "libavcodec/avcodec.h"
    int ticks_per_frame;
# 1707 "libavcodec/avcodec.h"
    int delay;
# 1718 "libavcodec/avcodec.h"
    int width, height;






    int coded_width, coded_height;
# 1734 "libavcodec/avcodec.h"
    int gop_size;
# 1743 "libavcodec/avcodec.h"
    enum AVPixelFormat pix_fmt;
# 1752 "libavcodec/avcodec.h"
    int me_method;
# 1777 "libavcodec/avcodec.h"
    void (*draw_horiz_band)(struct AVCodecContext *s,
                            const AVFrame *src, int offset[8],
                            int y, int type, int height);
# 1790 "libavcodec/avcodec.h"
    enum AVPixelFormat (*get_format)(struct AVCodecContext *s, const enum AVPixelFormat * fmt);







    int max_b_frames;
# 1807 "libavcodec/avcodec.h"
    float b_quant_factor;


    int rc_strategy;


    int b_frame_strategy;







    __attribute__((deprecated)) int luma_elim_threshold;






    __attribute__((deprecated)) int chroma_elim_threshold;







    float b_quant_offset;







    int has_b_frames;






    int mpeg_quant;
# 1860 "libavcodec/avcodec.h"
    float i_quant_factor;






    float i_quant_offset;






    float lumi_masking;






    float temporal_cplx_masking;






    float spatial_cplx_masking;






    float p_masking;






    float dark_masking;






    int slice_count;





    int prediction_method;
# 1925 "libavcodec/avcodec.h"
    int *slice_offset;
# 1934 "libavcodec/avcodec.h"
    AVRational sample_aspect_ratio;






    int me_cmp;





    int me_sub_cmp;





    int mb_cmp;





    int ildct_cmp;
# 1982 "libavcodec/avcodec.h"
    int dia_size;






    int last_predictor_count;






    int pre_me;






    int me_pre_cmp;






    int pre_dia_size;






    int me_subpel_quality;
# 2027 "libavcodec/avcodec.h"
    int dtg_active_format;
# 2043 "libavcodec/avcodec.h"
    int me_range;






    int intra_quant_bias;







    int inter_quant_bias;
# 2067 "libavcodec/avcodec.h"
    __attribute__((deprecated)) int color_table_id;







    int slice_flags;
# 2085 "libavcodec/avcodec.h"
    int xvmc_acceleration;






    int mb_decision;
# 2102 "libavcodec/avcodec.h"
    uint16_t *intra_matrix;






    uint16_t *inter_matrix;







    int scenechange_threshold;






    int noise_reduction;





    __attribute__((deprecated)) int inter_threshold;






    __attribute__((deprecated)) int quantizer_noise_shaping;
# 2147 "libavcodec/avcodec.h"
    int me_threshold;






    int mb_threshold;






    int intra_dc_precision;






    int skip_top;






    int skip_bottom;







    float border_masking;






    int mb_lmin;






    int mb_lmax;






    int me_penalty_compensation;






    int bidir_refine;






    int brd_scale;






    int keyint_min;






    int refs;






    int chromaoffset;






    int scenechange_factor;







    int mv0_threshold;






    int b_sensitivity;






    enum AVColorPrimaries color_primaries;






    enum AVColorTransferCharacteristic color_trc;






    enum AVColorSpace colorspace;






    enum AVColorRange color_range;






    enum AVChromaLocation chroma_sample_location;
# 2305 "libavcodec/avcodec.h"
    int slices;





    enum AVFieldOrder field_order;


    int sample_rate;
    int channels;






    enum AVSampleFormat sample_fmt;
# 2334 "libavcodec/avcodec.h"
    int frame_size;
# 2345 "libavcodec/avcodec.h"
    int frame_number;





    int block_align;






    int cutoff;
# 2367 "libavcodec/avcodec.h"
    int request_channels;







    uint64_t channel_layout;






    uint64_t request_channel_layout;






    enum AVAudioServiceType audio_service_type;







    enum AVSampleFormat request_sample_fmt;
# 2459 "libavcodec/avcodec.h"
    int (*get_buffer)(struct AVCodecContext *c, AVFrame *pic);
# 2470 "libavcodec/avcodec.h"
    void (*release_buffer)(struct AVCodecContext *c, AVFrame *pic);
# 2484 "libavcodec/avcodec.h"
    int (*reget_buffer)(struct AVCodecContext *c, AVFrame *pic);



    float qcompress;
    float qblur;






    int qmin;






    int qmax;






    int max_qdiff;







    float rc_qsquish;

    float rc_qmod_amp;
    int rc_qmod_freq;






    int rc_buffer_size;






    int rc_override_count;
    RcOverride *rc_override;






    const char *rc_eq;






    int rc_max_rate;






    int rc_min_rate;

    float rc_buffer_aggressivity;






    float rc_initial_cplx;






    float rc_max_available_vbv_use;






    float rc_min_vbv_overflow_use;






    int rc_initial_buffer_occupancy;
# 2599 "libavcodec/avcodec.h"
    int coder_type;






    int context_model;






    int lmin;






    int lmax;






    int frame_skip_threshold;






    int frame_skip_factor;






    int frame_skip_exp;






    int frame_skip_cmp;






    int trellis;





    int min_prediction_order;





    int max_prediction_order;






    int64_t timecode_frame_start;







    void (*rtp_callback)(struct AVCodecContext *avctx, void *data, int size, int mb_nb);

    int rtp_payload_size;







    int mv_bits;
    int header_bits;
    int i_tex_bits;
    int p_tex_bits;
    int i_count;
    int p_count;
    int skip_count;
    int misc_bits;






    int frame_bits;






    char *stats_out;







    char *stats_in;






    int workaround_bugs;
# 2758 "libavcodec/avcodec.h"
    int strict_std_compliance;
# 2770 "libavcodec/avcodec.h"
    int error_concealment;
# 2779 "libavcodec/avcodec.h"
    int debug;
# 2803 "libavcodec/avcodec.h"
    int debug_mv;
# 2813 "libavcodec/avcodec.h"
    int err_recognition;
# 2831 "libavcodec/avcodec.h"
    int64_t reordered_opaque;






    struct AVHWAccel *hwaccel;
# 2850 "libavcodec/avcodec.h"
    void *hwaccel_context;






    uint64_t error[8];






    int dct_algo;
# 2877 "libavcodec/avcodec.h"
    int idct_algo;
# 2910 "libavcodec/avcodec.h"
    __attribute__((deprecated)) unsigned dsp_mask;







    int bits_per_coded_sample;






    int bits_per_raw_sample;






    int lowres;






    AVFrame *coded_frame;







    int thread_count;
# 2957 "libavcodec/avcodec.h"
    int thread_type;
# 2966 "libavcodec/avcodec.h"
    int active_thread_type;
# 2976 "libavcodec/avcodec.h"
    int thread_safe_callbacks;
# 2987 "libavcodec/avcodec.h"
    int (*execute)(struct AVCodecContext *c, int (*func)(struct AVCodecContext *c2, void *arg), void *arg2, int *ret, int count, int size);
# 3007 "libavcodec/avcodec.h"
    int (*execute2)(struct AVCodecContext *c, int (*func)(struct AVCodecContext *c2, void *arg, int jobnr, int threadnr), void *arg2, int *ret, int count);







    void *thread_opaque;






    int nsse_weight;






    int profile;
# 3099 "libavcodec/avcodec.h"
    int level;







    enum AVDiscard skip_loop_filter;






    enum AVDiscard skip_idct;






    enum AVDiscard skip_frame;
# 3131 "libavcodec/avcodec.h"
    uint8_t *subtitle_header;
    int subtitle_header_size;






    int error_rate;
# 3148 "libavcodec/avcodec.h"
    AVPacket *pkt;







    uint64_t vbv_delay;
# 3165 "libavcodec/avcodec.h"
    AVRational pkt_timebase;
# 3174 "libavcodec/avcodec.h"
    const AVCodecDescriptor *codec_descriptor;






    int64_t pts_correction_num_faulty_pts;
    int64_t pts_correction_num_faulty_dts;
    int64_t pts_correction_last_pts;
    int64_t pts_correction_last_dts;






    AVDictionary *metadata;
} AVCodecContext;

AVRational av_codec_get_pkt_timebase (const AVCodecContext *avctx);
void av_codec_set_pkt_timebase (AVCodecContext *avctx, AVRational val);

const AVCodecDescriptor *av_codec_get_codec_descriptor(const AVCodecContext *avctx);
void av_codec_set_codec_descriptor(AVCodecContext *avctx, const AVCodecDescriptor *desc);




typedef struct AVProfile
{
    int profile;
    const char *name;
} AVProfile;

typedef struct AVCodecDefault AVCodecDefault;

struct AVSubtitle;




typedef struct AVCodec
{






    const char *name;




    const char *long_name;
    enum AVMediaType type;
    enum AVCodecID id;




    int capabilities;
    const AVRational *supported_framerates;
    const enum AVPixelFormat *pix_fmts;
    const int *supported_samplerates;
    const enum AVSampleFormat *sample_fmts;
    const uint64_t *channel_layouts;
    uint8_t max_lowres;
    const AVClass *priv_class;
    const AVProfile *profiles;
# 3251 "libavcodec/avcodec.h"
    int priv_data_size;
    struct AVCodec *next;
# 3262 "libavcodec/avcodec.h"
    int (*init_thread_copy)(AVCodecContext *);







    int (*update_thread_context)(AVCodecContext *dst, const AVCodecContext *src);





    const AVCodecDefault *defaults;




    void (*init_static_data)(struct AVCodec *codec);

    int (*init)(AVCodecContext *);
    int (*encode_sub)(AVCodecContext *, uint8_t *buf, int buf_size,
                      const struct AVSubtitle *sub);
# 3296 "libavcodec/avcodec.h"
    int (*encode2)(AVCodecContext *avctx, AVPacket *avpkt, const AVFrame *frame,
                   int *got_packet_ptr);
    int (*decode)(AVCodecContext *, void *outdata, int *outdata_size, AVPacket *avpkt);
    int (*close)(AVCodecContext *);




    void (*flush)(AVCodecContext *);
} AVCodec;




typedef struct AVHWAccel
{





    const char *name;






    enum AVMediaType type;






    enum AVCodecID id;






    enum AVPixelFormat pix_fmt;





    int capabilities;

    struct AVHWAccel *next;
# 3361 "libavcodec/avcodec.h"
    int (*start_frame)(AVCodecContext *avctx, const uint8_t *buf, uint32_t buf_size);
# 3374 "libavcodec/avcodec.h"
    int (*decode_slice)(AVCodecContext *avctx, const uint8_t *buf, uint32_t buf_size);
# 3385 "libavcodec/avcodec.h"
    int (*end_frame)(AVCodecContext *avctx);
# 3394 "libavcodec/avcodec.h"
    int priv_data_size;
} AVHWAccel;
# 3408 "libavcodec/avcodec.h"
typedef struct AVPicture
{
    uint8_t *data[8];
    int linesize[8];
} AVPicture;





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

    int flags;
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






AVCodec *av_codec_next(const AVCodec *c);




unsigned avcodec_version(void);




const char *avcodec_configuration(void);




const char *avcodec_license(void);
# 3502 "libavcodec/avcodec.h"
void avcodec_register(AVCodec *codec);
# 3514 "libavcodec/avcodec.h"
void avcodec_register_all(void);
# 3527 "libavcodec/avcodec.h"
__attribute__((deprecated))
AVCodecContext *avcodec_alloc_context(void);



__attribute__((deprecated))
AVCodecContext *avcodec_alloc_context2(enum AVMediaType);







__attribute__((deprecated))
void avcodec_get_context_defaults(AVCodecContext *s);



__attribute__((deprecated))
void avcodec_get_context_defaults2(AVCodecContext *s, enum AVMediaType);
# 3565 "libavcodec/avcodec.h"
AVCodecContext *avcodec_alloc_context3(const AVCodec *codec);
# 3576 "libavcodec/avcodec.h"
int avcodec_get_context_defaults3(AVCodecContext *s, const AVCodec *codec);







const AVClass *avcodec_get_class(void);







const AVClass *avcodec_get_frame_class(void);







const AVClass *avcodec_get_subtitle_rect_class(void);
# 3613 "libavcodec/avcodec.h"
int avcodec_copy_context(AVCodecContext *dest, const AVCodecContext *src);
# 3622 "libavcodec/avcodec.h"
AVFrame *avcodec_alloc_frame(void);






void avcodec_get_frame_defaults(AVFrame *frame);
# 3641 "libavcodec/avcodec.h"
void avcodec_free_frame(AVFrame **frame);
# 3673 "libavcodec/avcodec.h"
__attribute__((deprecated))
int avcodec_open(AVCodecContext *avctx, AVCodec *codec);
# 3713 "libavcodec/avcodec.h"
int avcodec_open2(AVCodecContext *avctx, const AVCodec *codec, AVDictionary **options);
# 3724 "libavcodec/avcodec.h"
int avcodec_close(AVCodecContext *avctx);






void avsubtitle_free(AVSubtitle *sub);
# 3745 "libavcodec/avcodec.h"
void av_destruct_packet(AVPacket *pkt);
# 3755 "libavcodec/avcodec.h"
void av_init_packet(AVPacket *pkt);
# 3765 "libavcodec/avcodec.h"
int av_new_packet(AVPacket *pkt, int size);







void av_shrink_packet(AVPacket *pkt, int size);







int av_grow_packet(AVPacket *pkt, int grow_by);





int av_dup_packet(AVPacket *pkt);






int av_copy_packet(AVPacket *dst, AVPacket *src);






void av_free_packet(AVPacket *pkt);
# 3811 "libavcodec/avcodec.h"
uint8_t* av_packet_new_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
                                 int size);
# 3822 "libavcodec/avcodec.h"
int av_packet_shrink_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
                               int size);
# 3833 "libavcodec/avcodec.h"
uint8_t* av_packet_get_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
                                 int *size);

int av_packet_merge_side_data(AVPacket *pkt);

int av_packet_split_side_data(AVPacket *pkt);
# 3856 "libavcodec/avcodec.h"
AVCodec *avcodec_find_decoder(enum AVCodecID id);







AVCodec *avcodec_find_decoder_by_name(const char *name);

int avcodec_default_get_buffer(AVCodecContext *s, AVFrame *pic);
void avcodec_default_release_buffer(AVCodecContext *s, AVFrame *pic);
int avcodec_default_reget_buffer(AVCodecContext *s, AVFrame *pic);
# 3877 "libavcodec/avcodec.h"
unsigned avcodec_get_edge_width(void);
# 3888 "libavcodec/avcodec.h"
void avcodec_align_dimensions(AVCodecContext *s, int *width, int *height);
# 3899 "libavcodec/avcodec.h"
void avcodec_align_dimensions2(AVCodecContext *s, int *width, int *height,
                               int linesize_align[8]);
# 3957 "libavcodec/avcodec.h"
__attribute__((deprecated)) int avcodec_decode_audio3(AVCodecContext *avctx, int16_t *samples,
        int *frame_size_ptr,
        AVPacket *avpkt);
# 3995 "libavcodec/avcodec.h"
int avcodec_decode_audio4(AVCodecContext *avctx, AVFrame *frame,
                          int *got_frame_ptr, const AVPacket *avpkt);
# 4039 "libavcodec/avcodec.h"
int avcodec_decode_video2(AVCodecContext *avctx, AVFrame *picture,
                          int *got_picture_ptr,
                          const AVPacket *avpkt);
# 4059 "libavcodec/avcodec.h"
int avcodec_decode_subtitle2(AVCodecContext *avctx, AVSubtitle *sub,
                             int *got_sub_ptr,
                             AVPacket *avpkt);






typedef struct AVCodecParserContext
{
    void *priv_data;
    struct AVCodecParser *parser;
    int64_t frame_offset;
    int64_t cur_offset;

    int64_t next_frame_offset;

    int pict_type;
# 4086 "libavcodec/avcodec.h"
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
# 4136 "libavcodec/avcodec.h"
    int64_t convergence_duration;
# 4148 "libavcodec/avcodec.h"
    int dts_sync_point;
# 4163 "libavcodec/avcodec.h"
    int dts_ref_dts_delta;
# 4177 "libavcodec/avcodec.h"
    int pts_dts_delta;






    int64_t cur_frame_pos[4];




    int64_t pos;




    int64_t last_pos;






    int duration;
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
# 4250 "libavcodec/avcodec.h"
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
# 4283 "libavcodec/avcodec.h"
AVCodec *avcodec_find_encoder(enum AVCodecID id);







AVCodec *avcodec_find_encoder_by_name(const char *name);
# 4318 "libavcodec/avcodec.h"
int __attribute__((deprecated)) avcodec_encode_audio(AVCodecContext *avctx,
        uint8_t *buf, int buf_size,
        const short *samples);
# 4362 "libavcodec/avcodec.h"
int avcodec_encode_audio2(AVCodecContext *avctx, AVPacket *avpkt,
                          const AVFrame *frame, int *got_packet_ptr);
# 4380 "libavcodec/avcodec.h"
__attribute__((deprecated))
int avcodec_encode_video(AVCodecContext *avctx, uint8_t *buf, int buf_size,
                         const AVFrame *pict);
# 4419 "libavcodec/avcodec.h"
int avcodec_encode_video2(AVCodecContext *avctx, AVPacket *avpkt,
                          const AVFrame *frame, int *got_packet_ptr);

int avcodec_encode_subtitle(AVCodecContext *avctx, uint8_t *buf, int buf_size,
                            const AVSubtitle *sub);
# 4438 "libavcodec/avcodec.h"
struct ReSampleContext;
struct AVResampleContext;

typedef struct ReSampleContext ReSampleContext;
# 4459 "libavcodec/avcodec.h"
__attribute__((deprecated))
ReSampleContext *av_audio_resample_init(int output_channels, int input_channels,
                                        int output_rate, int input_rate,
                                        enum AVSampleFormat sample_fmt_out,
                                        enum AVSampleFormat sample_fmt_in,
                                        int filter_length, int log2_phase_count,
                                        int linear, double cutoff);

__attribute__((deprecated))
int audio_resample(ReSampleContext *s, short *output, short *input, int nb_samples);







__attribute__((deprecated))
void audio_resample_close(ReSampleContext *s);
# 4489 "libavcodec/avcodec.h"
__attribute__((deprecated))
struct AVResampleContext *av_resample_init(int out_rate, int in_rate, int filter_length, int log2_phase_count, int linear, double cutoff);
# 4501 "libavcodec/avcodec.h"
__attribute__((deprecated))
int av_resample(struct AVResampleContext *c, short *dst, short *src, int *consumed, int src_size, int dst_size, int update_ctx);
# 4517 "libavcodec/avcodec.h"
__attribute__((deprecated))
void av_resample_compensate(struct AVResampleContext *c, int sample_delta, int compensation_distance);
__attribute__((deprecated))
void av_resample_close(struct AVResampleContext *c);
# 4543 "libavcodec/avcodec.h"
int avpicture_alloc(AVPicture *picture, enum AVPixelFormat pix_fmt, int width, int height);
# 4552 "libavcodec/avcodec.h"
void avpicture_free(AVPicture *picture);







int avpicture_fill(AVPicture *picture, const uint8_t *ptr,
                   enum AVPixelFormat pix_fmt, int width, int height);







int avpicture_layout(const AVPicture* src, enum AVPixelFormat pix_fmt,
                     int width, int height,
                     unsigned char *dest, int dest_size);
# 4580 "libavcodec/avcodec.h"
int avpicture_get_size(enum AVPixelFormat pix_fmt, int width, int height);




int avpicture_deinterlace(AVPicture *dst, const AVPicture *src,
                          enum AVPixelFormat pix_fmt, int width, int height);



void av_picture_copy(AVPicture *dst, const AVPicture *src,
                     enum AVPixelFormat pix_fmt, int width, int height);




int av_picture_crop(AVPicture *dst, const AVPicture *src,
                    enum AVPixelFormat pix_fmt, int top_band, int left_band);




int av_picture_pad(AVPicture *dst, const AVPicture *src, int height, int width, enum AVPixelFormat pix_fmt,
                   int padtop, int padbottom, int padleft, int padright, int *color);
# 4640 "libavcodec/avcodec.h"
void avcodec_get_chroma_sub_sample(enum AVPixelFormat pix_fmt, int *h_shift, int *v_shift);






unsigned int avcodec_pix_fmt_to_codec_tag(enum AVPixelFormat pix_fmt);
# 4674 "libavcodec/avcodec.h"
int avcodec_get_pix_fmt_loss(enum AVPixelFormat dst_pix_fmt, enum AVPixelFormat src_pix_fmt,
                             int has_alpha);
# 4704 "libavcodec/avcodec.h"
__attribute__((deprecated))
enum AVPixelFormat avcodec_find_best_pix_fmt(int64_t pix_fmt_mask, enum AVPixelFormat src_pix_fmt,
        int has_alpha, int *loss_ptr);
# 4726 "libavcodec/avcodec.h"
enum AVPixelFormat avcodec_find_best_pix_fmt_of_list(enum AVPixelFormat *pix_fmt_list,
        enum AVPixelFormat src_pix_fmt,
        int has_alpha, int *loss_ptr);
# 4760 "libavcodec/avcodec.h"
enum AVPixelFormat avcodec_find_best_pix_fmt_of_2(enum AVPixelFormat dst_pix_fmt1, enum AVPixelFormat dst_pix_fmt2,
        enum AVPixelFormat src_pix_fmt, int has_alpha, int *loss_ptr);

__attribute__((deprecated))





enum AVPixelFormat avcodec_find_best_pix_fmt2(enum AVPixelFormat dst_pix_fmt1, enum AVPixelFormat dst_pix_fmt2,
        enum AVPixelFormat src_pix_fmt, int has_alpha, int *loss_ptr);



enum AVPixelFormat avcodec_default_get_format(struct AVCodecContext *s, const enum AVPixelFormat * fmt);





void avcodec_set_dimensions(AVCodecContext *s, int width, int height);
# 4789 "libavcodec/avcodec.h"
size_t av_get_codec_tag_string(char *buf, size_t buf_size, unsigned int codec_tag);

void avcodec_string(char *buf, int buf_size, AVCodecContext *enc, int encode);
# 4800 "libavcodec/avcodec.h"
const char *av_get_profile_name(const AVCodec *codec, int profile);

int avcodec_default_execute(AVCodecContext *c, int (*func)(AVCodecContext *c2, void *arg2),void *arg, int *ret, int count, int size);
int avcodec_default_execute2(AVCodecContext *c, int (*func)(AVCodecContext *c2, void *arg2, int, int),void *arg, int *ret, int count);
# 4829 "libavcodec/avcodec.h"
int avcodec_fill_audio_frame(AVFrame *frame, int nb_channels,
                             enum AVSampleFormat sample_fmt, const uint8_t *buf,
                             int buf_size, int align);




void avcodec_flush_buffers(AVCodecContext *avctx);

void avcodec_default_free_buffers(AVCodecContext *s);







int av_get_bits_per_sample(enum AVCodecID codec_id);







enum AVCodecID av_get_pcm_codec(enum AVSampleFormat fmt, int be);
# 4864 "libavcodec/avcodec.h"
int av_get_exact_bits_per_sample(enum AVCodecID codec_id);
# 4874 "libavcodec/avcodec.h"
int av_get_audio_frame_duration(AVCodecContext *avctx, int frame_bytes);


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
# 4913 "libavcodec/avcodec.h"
void *av_fast_realloc(void *ptr, unsigned int *size, size_t min_size);
# 4927 "libavcodec/avcodec.h"
void av_fast_malloc(void *ptr, unsigned int *size, size_t min_size);
# 4936 "libavcodec/avcodec.h"
void av_fast_padded_malloc(void *ptr, unsigned int *size, size_t min_size);





void av_fast_padded_mallocz(void *ptr, unsigned int *size, size_t min_size);
# 4951 "libavcodec/avcodec.h"
unsigned int av_xiphlacing(unsigned char *s, unsigned int v);
# 4965 "libavcodec/avcodec.h"
void av_log_missing_feature(void *avc, const char *feature, int want_sample);
# 4975 "libavcodec/avcodec.h"
void av_log_ask_for_sample(void *avc, const char *msg, ...) __attribute__((__format__(__printf__, 2, 3)));




void av_register_hwaccel(AVHWAccel *hwaccel);






AVHWAccel *av_hwaccel_next(AVHWAccel *hwaccel);





enum AVLockOp
{
    AV_LOCK_CREATE,
    AV_LOCK_OBTAIN,
    AV_LOCK_RELEASE,
    AV_LOCK_DESTROY,
};
# 5013 "libavcodec/avcodec.h"
int av_lockmgr_register(int (*cb)(void **mutex, enum AVLockOp op));




enum AVMediaType avcodec_get_type(enum AVCodecID codec_id);





const char *avcodec_get_name(enum AVCodecID id);





int avcodec_is_open(AVCodecContext *s);




int av_codec_is_encoder(const AVCodec *codec);




int av_codec_is_decoder(const AVCodec *codec);




const AVCodecDescriptor *avcodec_descriptor_get(enum AVCodecID id);
# 5054 "libavcodec/avcodec.h"
const AVCodecDescriptor *avcodec_descriptor_next(const AVCodecDescriptor *prev);





const AVCodecDescriptor *avcodec_descriptor_get_by_name(const char *name);
# 34 "libavcodec/mjpegenc.c" 2
# 1 "libavcodec/dsputil.h" 1
# 33 "libavcodec/dsputil.h"
# 1 "./libavutil/intreadwrite.h" 1
# 25 "./libavutil/intreadwrite.h"
# 1 "./libavutil/bswap.h" 1
# 58 "./libavutil/bswap.h"
static __attribute__((always_inline)) inline __attribute__((const)) uint16_t av_bswap16(uint16_t x)
{
    x= (x>>8) | (x<<8);
    return x;
}



static __attribute__((always_inline)) inline __attribute__((const)) uint32_t av_bswap32(uint32_t x)
{
    return ((((x) << 8 & 0xff00) | ((x) >> 8 & 0x00ff)) << 16 | ((((x) >> 16) << 8 & 0xff00) | (((x) >> 16) >> 8 & 0x00ff)));
}



static inline uint64_t __attribute__((const)) av_bswap64(uint64_t x)
{
    return (uint64_t)av_bswap32(x) << 32 | av_bswap32(x >> 32);
}
# 26 "./libavutil/intreadwrite.h" 2

typedef union
{
    uint64_t u64;
    uint32_t u32[2];
    uint16_t u16[4];
    uint8_t u8 [8];
    double f64;
    float f32[2];
} __attribute__((may_alias)) av_alias64;

typedef union
{
    uint32_t u32;
    uint16_t u16[2];
    uint8_t u8 [4];
    float f32;
} __attribute__((may_alias)) av_alias32;

typedef union
{
    uint16_t u16;
    uint8_t u8 [2];
} __attribute__((may_alias)) av_alias16;
# 188 "./libavutil/intreadwrite.h"
union unaligned_64
{
    uint64_t l;
} __attribute__((packed)) __attribute__((may_alias));
union unaligned_32
{
    uint32_t l;
} __attribute__((packed)) __attribute__((may_alias));
union unaligned_16
{
    uint16_t l;
} __attribute__((packed)) __attribute__((may_alias));
# 34 "libavcodec/dsputil.h" 2





typedef short DCTELEM;

void ff_fdct_ifast (DCTELEM *data);
void ff_fdct_ifast248 (DCTELEM *data);
void ff_jpeg_fdct_islow_8(DCTELEM *data);
void ff_jpeg_fdct_islow_10(DCTELEM *data);
void ff_fdct248_islow_8(DCTELEM *data);
void ff_fdct248_islow_10(DCTELEM *data);

void ff_j_rev_dct (DCTELEM *data);
void ff_j_rev_dct4 (DCTELEM *data);
void ff_j_rev_dct2 (DCTELEM *data);
void ff_j_rev_dct1 (DCTELEM *data);
void ff_wmv2_idct_c(DCTELEM *data);

void ff_fdct_mmx(DCTELEM *block);
void ff_fdct_mmxext(DCTELEM *block);
void ff_fdct_sse2(DCTELEM *block);
# 72 "libavcodec/dsputil.h"
void ff_h264_idct8_add_8_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct_add_8_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct8_dc_add_8_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct_dc_add_8_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct_add16_8_c(uint8_t *dst, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct_add16intra_8_c(uint8_t *dst, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct8_add4_8_c(uint8_t *dst, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct_add8_422_8_c(uint8_t **dest, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct_add8_8_c(uint8_t **dest, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_luma_dc_dequant_idct_8_c(DCTELEM *output, DCTELEM *input, int qmul);
void ff_h264_chroma422_dc_dequant_idct_8_c(DCTELEM *block, int qmul);
void ff_h264_chroma_dc_dequant_idct_8_c(DCTELEM *block, int qmul);
void ff_h264_idct8_add_9_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct_add_9_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct8_dc_add_9_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct_dc_add_9_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct_add16_9_c(uint8_t *dst, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct_add16intra_9_c(uint8_t *dst, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct8_add4_9_c(uint8_t *dst, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct_add8_422_9_c(uint8_t **dest, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct_add8_9_c(uint8_t **dest, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_luma_dc_dequant_idct_9_c(DCTELEM *output, DCTELEM *input, int qmul);
void ff_h264_chroma422_dc_dequant_idct_9_c(DCTELEM *block, int qmul);
void ff_h264_chroma_dc_dequant_idct_9_c(DCTELEM *block, int qmul);
void ff_h264_idct8_add_10_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct_add_10_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct8_dc_add_10_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct_dc_add_10_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct_add16_10_c(uint8_t *dst, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct_add16intra_10_c(uint8_t *dst, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct8_add4_10_c(uint8_t *dst, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct_add8_422_10_c(uint8_t **dest, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct_add8_10_c(uint8_t **dest, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_luma_dc_dequant_idct_10_c(DCTELEM *output, DCTELEM *input, int qmul);
void ff_h264_chroma422_dc_dequant_idct_10_c(DCTELEM *block, int qmul);
void ff_h264_chroma_dc_dequant_idct_10_c(DCTELEM *block, int qmul);
void ff_h264_idct8_add_12_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct_add_12_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct8_dc_add_12_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct_dc_add_12_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct_add16_12_c(uint8_t *dst, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct_add16intra_12_c(uint8_t *dst, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct8_add4_12_c(uint8_t *dst, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct_add8_422_12_c(uint8_t **dest, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct_add8_12_c(uint8_t **dest, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_luma_dc_dequant_idct_12_c(DCTELEM *output, DCTELEM *input, int qmul);
void ff_h264_chroma422_dc_dequant_idct_12_c(DCTELEM *block, int qmul);
void ff_h264_chroma_dc_dequant_idct_12_c(DCTELEM *block, int qmul);
void ff_h264_idct8_add_14_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct_add_14_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct8_dc_add_14_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct_dc_add_14_c(uint8_t *dst, DCTELEM *block, int stride);
void ff_h264_idct_add16_14_c(uint8_t *dst, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct_add16intra_14_c(uint8_t *dst, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct8_add4_14_c(uint8_t *dst, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct_add8_422_14_c(uint8_t **dest, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_idct_add8_14_c(uint8_t **dest, const int *blockoffset, DCTELEM *block, int stride, const uint8_t nnzc[6*8]);
void ff_h264_luma_dc_dequant_idct_14_c(DCTELEM *output, DCTELEM *input, int qmul);
void ff_h264_chroma422_dc_dequant_idct_14_c(DCTELEM *block, int qmul);
void ff_h264_chroma_dc_dequant_idct_14_c(DCTELEM *block, int qmul);

void ff_svq3_luma_dc_dequant_idct_c(DCTELEM *output, DCTELEM *input, int qp);
void ff_svq3_add_idct_c(uint8_t *dst, DCTELEM *block, int stride, int qp, int dc);


extern const uint8_t ff_alternate_horizontal_scan[64];
extern const uint8_t ff_alternate_vertical_scan[64];
extern const uint8_t ff_zigzag_direct[64];
extern const uint8_t ff_zigzag248_direct[64];





extern uint32_t ff_squareTbl[512];
extern uint8_t ff_cropTbl[256 + 2 * 1024];







void ff_put_pixels8x8_8_c(uint8_t *dst, uint8_t *src, int stride);
void ff_avg_pixels8x8_8_c(uint8_t *dst, uint8_t *src, int stride);
void ff_put_pixels16x16_8_c(uint8_t *dst, uint8_t *src, int stride);
void ff_avg_pixels16x16_8_c(uint8_t *dst, uint8_t *src, int stride);
void ff_put_pixels8x8_9_c(uint8_t *dst, uint8_t *src, int stride);
void ff_avg_pixels8x8_9_c(uint8_t *dst, uint8_t *src, int stride);
void ff_put_pixels16x16_9_c(uint8_t *dst, uint8_t *src, int stride);
void ff_avg_pixels16x16_9_c(uint8_t *dst, uint8_t *src, int stride);
void ff_put_pixels8x8_10_c(uint8_t *dst, uint8_t *src, int stride);
void ff_avg_pixels8x8_10_c(uint8_t *dst, uint8_t *src, int stride);
void ff_put_pixels16x16_10_c(uint8_t *dst, uint8_t *src, int stride);
void ff_avg_pixels16x16_10_c(uint8_t *dst, uint8_t *src, int stride);
void ff_put_pixels8x8_12_c(uint8_t *dst, uint8_t *src, int stride);
void ff_avg_pixels8x8_12_c(uint8_t *dst, uint8_t *src, int stride);
void ff_put_pixels16x16_12_c(uint8_t *dst, uint8_t *src, int stride);
void ff_avg_pixels16x16_12_c(uint8_t *dst, uint8_t *src, int stride);
void ff_put_pixels8x8_14_c(uint8_t *dst, uint8_t *src, int stride);
void ff_avg_pixels8x8_14_c(uint8_t *dst, uint8_t *src, int stride);
void ff_put_pixels16x16_14_c(uint8_t *dst, uint8_t *src, int stride);
void ff_avg_pixels16x16_14_c(uint8_t *dst, uint8_t *src, int stride);







void ff_put_rv40_qpel16_mc33_c(uint8_t *dst, uint8_t *src, int stride);
void ff_avg_rv40_qpel16_mc33_c(uint8_t *dst, uint8_t *src, int stride);
void ff_put_rv40_qpel8_mc33_c(uint8_t *dst, uint8_t *src, int stride);
void ff_avg_rv40_qpel8_mc33_c(uint8_t *dst, uint8_t *src, int stride);


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
void ff_init_scantable_permutation(uint8_t *idct_permutation,
                                   int idct_permutation_type);






void ff_emulated_edge_mc_8 (uint8_t *buf, const uint8_t *src, ptrdiff_t linesize, int block_w, int block_h, int src_x, int src_y, int w, int h);
void ff_emulated_edge_mc_16 (uint8_t *buf, const uint8_t *src, ptrdiff_t linesize, int block_w, int block_h, int src_x, int src_y, int w, int h);




typedef struct DSPContext
{



    int dct_bits;


    void (*get_pixels)(DCTELEM *block , const uint8_t *pixels , int line_size);
    void (*diff_pixels)(DCTELEM *block , const uint8_t *s1 , const uint8_t *s2 , int stride);
    void (*put_pixels_clamped)(const DCTELEM *block , uint8_t *pixels , int line_size);
    void (*put_signed_pixels_clamped)(const DCTELEM *block , uint8_t *pixels , int line_size);
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
# 274 "libavcodec/dsputil.h"
    op_pixels_func put_pixels_tab[4][4];
# 286 "libavcodec/dsputil.h"
    op_pixels_func avg_pixels_tab[4][4];
# 298 "libavcodec/dsputil.h"
    op_pixels_func put_no_rnd_pixels_tab[4][4];
# 310 "libavcodec/dsputil.h"
    op_pixels_func avg_no_rnd_pixels_tab[4][4];

    void (*put_no_rnd_pixels_l2[2])(uint8_t *block , const uint8_t *a , const uint8_t *b , int line_size, int h);
# 324 "libavcodec/dsputil.h"
    tpel_mc_func put_tpel_pixels_tab[11];
    tpel_mc_func avg_tpel_pixels_tab[11];

    qpel_mc_func put_qpel_pixels_tab[2][16];
    qpel_mc_func avg_qpel_pixels_tab[2][16];
    qpel_mc_func put_no_rnd_qpel_pixels_tab[2][16];
    qpel_mc_func avg_no_rnd_qpel_pixels_tab[2][16];
    qpel_mc_func put_mspel_pixels_tab[8];




    h264_chroma_mc_func put_h264_chroma_pixels_tab[3];
    h264_chroma_mc_func avg_h264_chroma_pixels_tab[3];

    qpel_mc_func put_h264_qpel_pixels_tab[4][16];
    qpel_mc_func avg_h264_qpel_pixels_tab[4][16];

    qpel_mc_func put_2tap_qpel_pixels_tab[4][16];
    qpel_mc_func avg_2tap_qpel_pixels_tab[4][16];

    me_cmp_func pix_abs[2][4];


    void (*add_bytes)(uint8_t *dst , uint8_t *src , int w);
    void (*diff_bytes)(uint8_t *dst , const uint8_t *src1 , const uint8_t *src2 ,int w);




    void (*sub_hfyu_median_prediction)(uint8_t *dst, const uint8_t *src1, const uint8_t *src2, int w, int *left, int *left_top);
    void (*add_hfyu_median_prediction)(uint8_t *dst, const uint8_t *top, const uint8_t *diff, int w, int *left, int *left_top);
    int (*add_hfyu_left_prediction)(uint8_t *dst, const uint8_t *src, int w, int left);
    void (*add_hfyu_left_prediction_bgr32)(uint8_t *dst, const uint8_t *src, int w, int *red, int *green, int *blue, int *alpha);

    void (*bswap_buf)(uint32_t *dst, const uint32_t *src, int w);
    void (*bswap16_buf)(uint16_t *dst, const uint16_t *src, int len);

    void (*h263_v_loop_filter)(uint8_t *src, int stride, int qscale);
    void (*h263_h_loop_filter)(uint8_t *src, int stride, int qscale);

    void (*h261_loop_filter)(uint8_t *src, int stride);


    void (*vorbis_inverse_coupling)(float *mag, float *ang, int blocksize);

    void (*vector_fmul_reverse)(float *dst, const float *src0, const float *src1, int len);

    void (*vector_fmul_add)(float *dst, const float *src0, const float *src1, const float *src2, int len);

    void (*vector_fmul_window)(float *dst, const float *src0, const float *src1, const float *win, int len);

    void (*vector_clipf)(float *dst , const float *src , float min, float max, int len );






    float (*scalarproduct_float)(const float *v1, const float *v2, int len);






    void (*butterflies_float)(float *restrict v1, float *restrict v2, int len);
# 406 "libavcodec/dsputil.h"
    void (*butterflies_float_interleave)(float *dst, const float *src0,
                                         const float *src1, int len);


    void (*fdct)(DCTELEM *block );
    void (*fdct248)(DCTELEM *block );


    void (*idct)(DCTELEM *block );






    void (*idct_put)(uint8_t *dest , int line_size, DCTELEM *block );





    void (*idct_add)(uint8_t *dest , int line_size, DCTELEM *block );
# 441 "libavcodec/dsputil.h"
    uint8_t idct_permutation[64];
    int idct_permutation_type;







    int (*try_8x8basis)(int16_t rem[64], int16_t weight[64], int16_t basis[64], int scale);
    void (*add_8x8basis)(int16_t rem[64], int16_t basis[64], int scale);



    void (*draw_edges)(uint8_t *buf, int wrap, int width, int height, int w, int h, int sides);




    void (*shrink[4])(uint8_t *dst, int dst_wrap, const uint8_t *src, int src_wrap, int width, int height);





    int32_t (*scalarproduct_int16)(const int16_t *v1, const int16_t *v2 , int len);






    int32_t (*scalarproduct_and_madd_int16)(int16_t *v1 , const int16_t *v2, const int16_t *v3, int len, int mul);
# 486 "libavcodec/dsputil.h"
    void (*apply_window_int16)(int16_t *output, const int16_t *input,
                               const int16_t *window, unsigned int len);
# 502 "libavcodec/dsputil.h"
    void (*vector_clip_int32)(int32_t *dst, const int32_t *src, int32_t min,
                              int32_t max, unsigned int len);

    op_fill_func fill_block_tab[2];
} DSPContext;

void ff_dsputil_static_init(void);
void ff_dsputil_init(DSPContext* p, AVCodecContext *avctx);
__attribute__((deprecated)) void dsputil_init(DSPContext* c, AVCodecContext *avctx);

int ff_check_alignment(void);
# 523 "libavcodec/dsputil.h"
float ff_scalarproduct_float_c(const float *v1, const float *v2, int len);





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

static inline uint64_t rnd_avg64(uint64_t a, uint64_t b)
{
    return (a | b) - (((a ^ b) & ~((0x01)*0x0001000100010001UL)) >> 1);
}

static inline uint64_t no_rnd_avg64(uint64_t a, uint64_t b)
{
    return (a & b) + (((a ^ b) & ~((0x01)*0x0001000100010001UL)) >> 1);
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

void ff_dsputil_init_alpha(DSPContext* c, AVCodecContext *avctx);
void ff_dsputil_init_arm(DSPContext* c, AVCodecContext *avctx);
void ff_dsputil_init_bfin(DSPContext* c, AVCodecContext *avctx);
void ff_dsputil_init_mmx(DSPContext* c, AVCodecContext *avctx);
void ff_dsputil_init_ppc(DSPContext* c, AVCodecContext *avctx);
void ff_dsputil_init_sh4(DSPContext* c, AVCodecContext *avctx);
void ff_dsputil_init_vis(DSPContext* c, AVCodecContext *avctx);
void ff_dsputil_init_mips(DSPContext* c, AVCodecContext *avctx);

void ff_dsputil_init_dwt(DSPContext *c);
# 638 "libavcodec/dsputil.h"
static inline void copy_block2(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)
{
    int i;
    for(i=0; i<h; i++)
    {
        ((((union unaligned_16 *) (dst))->l) = ((((const union unaligned_16 *) (src))->l)));;
        dst+=dstStride;
        src+=srcStride;
    }
}

static inline void copy_block4(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)
{
    int i;
    for(i=0; i<h; i++)
    {
        ((((union unaligned_32 *) (dst))->l) = ((((const union unaligned_32 *) (src))->l)));;
        dst+=dstStride;
        src+=srcStride;
    }
}

static inline void copy_block8(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)
{
    int i;
    for(i=0; i<h; i++)
    {
        ((((union unaligned_64 *) (dst))->l) = ((((const union unaligned_64 *) (src))->l)));;
        dst+=dstStride;
        src+=srcStride;
    }
}

static inline void copy_block9(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)
{
    int i;
    for(i=0; i<h; i++)
    {
        ((((union unaligned_64 *) (dst))->l) = ((((const union unaligned_64 *) (src))->l)));;
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
        do
        {
            ((((union unaligned_64 *) (dst))->l) = ((((const union unaligned_64 *) (src))->l)));;
            ((((union unaligned_64 *) ((char *)(dst) + 8))->l) = ((((const union unaligned_64 *) ((const char *)(src) + 8))->l)));;
        }
        while(0);
        dst+=dstStride;
        src+=srcStride;
    }
}

static inline void copy_block17(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)
{
    int i;
    for(i=0; i<h; i++)
    {
        do
        {
            ((((union unaligned_64 *) (dst))->l) = ((((const union unaligned_64 *) (src))->l)));;
            ((((union unaligned_64 *) ((char *)(dst) + 8))->l) = ((((const union unaligned_64 *) ((const char *)(src) + 8))->l)));;
        }
        while(0);
        dst[16]= src[16];
        dst+=dstStride;
        src+=srcStride;
    }
}
# 35 "libavcodec/mjpegenc.c" 2
# 1 "libavcodec/mpegvideo.h" 1
# 33 "libavcodec/mpegvideo.h"
# 1 "libavcodec/get_bits.h" 1
# 30 "libavcodec/get_bits.h"
# 1 "./libavutil/common.h" 1
# 31 "libavcodec/get_bits.h" 2


# 1 "./libavutil/avassert.h" 1
# 34 "libavcodec/get_bits.h" 2
# 1 "libavcodec/mathops.h" 1
# 27 "libavcodec/mathops.h"
# 1 "./libavutil/common.h" 1
# 28 "libavcodec/mathops.h" 2
# 1 "./config.h" 1
# 29 "libavcodec/mathops.h" 2

extern const uint32_t ff_inverse[257];
extern const uint8_t ff_reverse[256];
extern const uint8_t ff_sqrt_tab[256];
# 45 "libavcodec/mathops.h"
# 1 "libavcodec/x86/mathops.h" 1
# 25 "libavcodec/x86/mathops.h"
# 1 "./config.h" 1
# 26 "libavcodec/x86/mathops.h" 2
# 1 "./libavutil/common.h" 1
# 27 "libavcodec/x86/mathops.h" 2
# 74 "libavcodec/x86/mathops.h"
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
# 112 "libavcodec/x86/mathops.h"
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
# 46 "libavcodec/mathops.h" 2
# 59 "libavcodec/mathops.h"
static __attribute__((always_inline)) inline int MULH(int a, int b)
{
    return ((int64_t)(a) * (int64_t)(b)) >> 32;
}



static __attribute__((always_inline)) inline unsigned UMULH(unsigned a, unsigned b)
{
    return ((uint64_t)(a) * (uint64_t)(b))>>32;
}
# 123 "libavcodec/mathops.h"
static inline __attribute__((const)) int sign_extend(int val, unsigned bits)
{
    unsigned shift = 8 * sizeof(int) - bits;
    union
    {
        unsigned u;
        int s;
    } v = { (unsigned) val << shift };
    return v.s >> shift;
}



static inline __attribute__((const)) unsigned zero_extend(unsigned val, unsigned bits)
{
    return (val << ((8 * sizeof(int)) - bits)) >> ((8 * sizeof(int)) - bits);
}
# 198 "libavcodec/mathops.h"
static inline __attribute__((const)) unsigned int ff_sqrt(unsigned int a)
{
    unsigned int b;

    if (a < 255) return (ff_sqrt_tab[a + 1] - 1) >> 4;
    else if (a < (1 << 12)) b = ff_sqrt_tab[a >> 4] >> 2;

    else if (a < (1 << 14)) b = ff_sqrt_tab[a >> 6] >> 1;
    else if (a < (1 << 16)) b = ff_sqrt_tab[a >> 8] ;

    else
    {
        int s = av_log2_16bit(a >> 16) >> 1;
        unsigned int c = a >> (s + 2);
        b = ff_sqrt_tab[c >> (s + 8)];
        b = ((uint32_t)((((uint64_t)c) * ff_inverse[b]) >> 32)) + (b << s);
    }

    return b - (a < b * b);
}
# 35 "libavcodec/get_bits.h" 2
# 53 "libavcodec/get_bits.h"
typedef struct GetBitContext
{
    const uint8_t *buffer, *buffer_end;
    int index;
    int size_in_bits;
    int size_in_bits_plus8;
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
# 191 "libavcodec/get_bits.h"
static inline int get_bits_count(const GetBitContext *s)
{
    return s->index;
}

static inline void skip_bits_long(GetBitContext *s, int n)
{



    s->index += av_clip_c(n, -s->index, s->size_in_bits_plus8 - s->index);

}






static inline int get_xbits(GetBitContext *s, int n)
{
    register int sign;
    register int32_t cache;
    unsigned int re_index = (s)->index;
    unsigned int __attribute__((unused)) re_cache = 0;
    unsigned int __attribute__((unused)) re_size_plus8 = (s)->size_in_bits_plus8;
    re_cache = av_bswap32((((const union unaligned_32 *) ((s)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
    cache = ((uint32_t)re_cache);
    sign = ~cache >> 31;
    re_index = ((re_size_plus8) > (re_index + (n)) ? (re_index + (n)) : (re_size_plus8));
    (s)->index = re_index;
    return (NEG_USR32(sign ^ cache, n) ^ sign) - sign;
}

static inline int get_sbits(GetBitContext *s, int n)
{
    register int tmp;
    unsigned int re_index = (s)->index;
    unsigned int __attribute__((unused)) re_cache = 0;
    unsigned int __attribute__((unused)) re_size_plus8 = (s)->size_in_bits_plus8;
    ((void)0);
    re_cache = av_bswap32((((const union unaligned_32 *) ((s)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
    tmp = NEG_SSR32(re_cache, n);
    re_index = ((re_size_plus8) > (re_index + (n)) ? (re_index + (n)) : (re_size_plus8));
    (s)->index = re_index;
    return tmp;
}




static inline unsigned int get_bits(GetBitContext *s, int n)
{
    register int tmp;
    unsigned int re_index = (s)->index;
    unsigned int __attribute__((unused)) re_cache = 0;
    unsigned int __attribute__((unused)) re_size_plus8 = (s)->size_in_bits_plus8;
    ((void)0);
    re_cache = av_bswap32((((const union unaligned_32 *) ((s)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
    tmp = NEG_USR32(re_cache, n);
    re_index = ((re_size_plus8) > (re_index + (n)) ? (re_index + (n)) : (re_size_plus8));
    (s)->index = re_index;
    return tmp;
}




static inline unsigned int show_bits(GetBitContext *s, int n)
{
    register int tmp;
    unsigned int re_index = (s)->index;
    unsigned int __attribute__((unused)) re_cache = 0;
    unsigned int __attribute__((unused)) re_size_plus8 = (s)->size_in_bits_plus8;
    ((void)0);
    re_cache = av_bswap32((((const union unaligned_32 *) ((s)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
    tmp = NEG_USR32(re_cache, n);
    return tmp;
}

static inline void skip_bits(GetBitContext *s, int n)
{
    unsigned int re_index = (s)->index;
    unsigned int __attribute__((unused)) re_cache = 0;
    unsigned int __attribute__((unused)) re_size_plus8 = (s)->size_in_bits_plus8;
    re_cache = av_bswap32((((const union unaligned_32 *) ((s)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
    re_index = ((re_size_plus8) > (re_index + (n)) ? (re_index + (n)) : (re_size_plus8));
    (s)->index = re_index;
}

static inline unsigned int get_bits1(GetBitContext *s)
{
    unsigned int index = s->index;
    uint8_t result = s->buffer[index>>3];




    result <<= index & 7;
    result >>= 8 - 1;


    if (s->index < s->size_in_bits_plus8)

        index++;
    s->index = index;

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
    if (!n)
    {
        return 0;
    }
    else if (n <= 25)
        return get_bits(s, n);
    else
    {




        unsigned ret = get_bits(s, 16) << (n-16);
        return ret | get_bits(s, n-16);

    }
}




static inline uint64_t get_bits64(GetBitContext *s, int n)
{
    if (n <= 32)
    {
        return get_bits_long(s, n);
    }
    else
    {




        uint64_t ret = (uint64_t)get_bits_long(s, n - 32) << 32;
        return ret | get_bits_long(s, 32);

    }
}




static inline int get_sbits_long(GetBitContext *s, int n)
{
    return sign_extend(get_bits_long(s, n), n);
}




static inline unsigned int show_bits_long(GetBitContext *s, int n)
{
    if (n <= 25)
        return show_bits(s, n);
    else
    {
        GetBitContext gb = *s;
        return get_bits_long(&gb, n);
    }
}

static inline int check_marker(GetBitContext *s, const char *msg)
{
    int bit = get_bits1(s);
    if (!bit)
        av_log(((void *)0), 32, "Marker bit missing %s\n", msg);

    return bit;
}
# 376 "libavcodec/get_bits.h"
static inline int init_get_bits(GetBitContext *s, const uint8_t *buffer,
                                int bit_size)
{
    int buffer_size;
    int ret = 0;

    if (bit_size >= 2147483647 - 7 || bit_size < 0 || !buffer)
    {
        buffer_size = bit_size = 0;
        buffer = ((void *)0);
        ret = (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
    }

    buffer_size = (bit_size + 7) >> 3;

    s->buffer = buffer;
    s->size_in_bits = bit_size;
    s->size_in_bits_plus8 = bit_size + 8;
    s->buffer_end = buffer + buffer_size;
    s->index = 0;
    return ret;
}
# 406 "libavcodec/get_bits.h"
static inline int init_get_bits8(GetBitContext *s, const uint8_t *buffer,
                                 int byte_size)
{
    if (byte_size > 2147483647 / 8 || byte_size < 0)
        byte_size = -1;
    return init_get_bits(s, buffer, byte_size * 8);
}

static inline void align_get_bits(GetBitContext *s)
{
    int n = -get_bits_count(s) & 7;
    if (n) skip_bits(s, n);
}
# 429 "libavcodec/get_bits.h"
int ff_init_vlc_sparse(VLC *vlc, int nb_bits, int nb_codes,
                       const void *bits, int bits_wrap, int bits_size,
                       const void *codes, int codes_wrap, int codes_size,
                       const void *symbols, int symbols_wrap, int symbols_size,
                       int flags);


void ff_free_vlc(VLC *vlc);
# 517 "libavcodec/get_bits.h"
static __attribute__((always_inline)) inline int get_vlc2(GetBitContext *s, int16_t (*table)[2],
        int bits, int max_depth)
{
    int code;

    unsigned int re_index = (s)->index;
    unsigned int __attribute__((unused)) re_cache = 0;
    unsigned int __attribute__((unused)) re_size_plus8 = (s)->size_in_bits_plus8;
    re_cache = av_bswap32((((const union unaligned_32 *) ((s)->buffer + (re_index >> 3)))->l)) << (re_index & 7);

    do
    {
        int n, nb_bits;
        unsigned int index;
        index = NEG_USR32(re_cache, bits);
        code = table[index][0];
        n = table[index][1];
        if (max_depth > 1 && n < 0)
        {
            re_index = ((re_size_plus8) > (re_index + (bits)) ? (re_index + (bits)) : (re_size_plus8));
            re_cache = av_bswap32((((const union unaligned_32 *) ((s)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
            nb_bits = -n;
            index = NEG_USR32(re_cache, nb_bits) + code;
            code = table[index][0];
            n = table[index][1];
            if (max_depth > 2 && n < 0)
            {
                re_index = ((re_size_plus8) > (re_index + (nb_bits)) ? (re_index + (nb_bits)) : (re_size_plus8));
                re_cache = av_bswap32((((const union unaligned_32 *) ((s)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
                nb_bits = -n;
                index = NEG_USR32(re_cache, nb_bits) + code;
                code = table[index][0];
                n = table[index][1];
            }
        }
        do
        {
            re_cache <<= (n);
            re_index = ((re_size_plus8) > (re_index + (n)) ? (re_index + (n)) : (re_size_plus8));
        }
        while (0);
    }
    while (0);

    (s)->index = re_index;
    return code;
}

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
# 34 "libavcodec/mpegvideo.h" 2
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

    if (s->bit_left < 32)
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
# 108 "libavcodec/put_bits.h"
void avpriv_align_put_bits(PutBitContext *s);






void avpriv_put_string(PutBitContext *pb, const char *string, int terminate_string);






void avpriv_copy_bits(PutBitContext *pb, const uint8_t *src, int length);






static inline void put_bits(PutBitContext *s, int n, unsigned int value)
{
    unsigned int bit_buf;
    int bit_left;

    ((void)0);

    bit_buf = s->bit_buf;
    bit_left = s->bit_left;
# 151 "libavcodec/put_bits.h"
    if (n < bit_left)
    {
        bit_buf = (bit_buf<<n) | value;
        bit_left-=n;
    }
    else
    {
        bit_buf<<=bit_left;
        bit_buf |= value >> (n - bit_left);
        ((void)0);
        ((((union unaligned_32 *) (s->buf_ptr))->l) = (av_bswap32(bit_buf)));
        s->buf_ptr+=4;
        bit_left+=32 - n;
        bit_buf = value;
    }


    s->bit_buf = bit_buf;
    s->bit_left = bit_left;
}

static inline void put_sbits(PutBitContext *pb, int n, int32_t value)
{
    ((void)0);

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
    ((void)0);
    ((void)0);
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
# 35 "libavcodec/mpegvideo.h" 2
# 1 "libavcodec/ratecontrol.h" 1
# 33 "libavcodec/ratecontrol.h"
# 1 "./libavutil/eval.h" 1
# 31 "./libavutil/eval.h"
typedef struct AVExpr AVExpr;
# 51 "./libavutil/eval.h"
int av_expr_parse_and_eval(double *res, const char *s,
                           const char * const *const_names, const double *const_values,
                           const char * const *func1_names, double (* const *funcs1)(void *, double),
                           const char * const *func2_names, double (* const *funcs2)(void *, double, double),
                           void *opaque, int log_offset, void *log_ctx);
# 74 "./libavutil/eval.h"
int av_expr_parse(AVExpr **expr, const char *s,
                  const char * const *const_names,
                  const char * const *func1_names, double (* const *funcs1)(void *, double),
                  const char * const *func2_names, double (* const *funcs2)(void *, double, double),
                  int log_offset, void *log_ctx);
# 87 "./libavutil/eval.h"
double av_expr_eval(AVExpr *e, const double *const_values, void *opaque);




void av_expr_free(AVExpr *e);
# 111 "./libavutil/eval.h"
double av_strtod(const char *numstr, char **tail);
# 34 "libavcodec/ratecontrol.h" 2

typedef struct Predictor
{
    double coeff;
    double count;
    double decay;
} Predictor;

typedef struct RateControlEntry
{
    int pict_type;
    float qscale;
    int mv_bits;
    int i_tex_bits;
    int p_tex_bits;
    int misc_bits;
    int header_bits;
    uint64_t expected_bits;
    int new_pict_type;
    float new_qscale;
    int mc_mb_var_sum;
    int mb_var_sum;
    int i_count;
    int skip_count;
    int f_code;
    int b_code;
} RateControlEntry;




typedef struct RateControlContext
{
    FILE *stats_file;
    int num_entries;
    RateControlEntry *entry;
    double buffer_index;
    Predictor pred[5];
    double short_term_qsum;
    double short_term_qcount;
    double pass1_rc_eq_output_sum;
    double pass1_wanted_bits;
    double last_qscale;
    double last_qscale_for[5];
    int last_mc_mb_var_sum;
    int last_mb_var_sum;
    uint64_t i_cplx_sum[5];
    uint64_t p_cplx_sum[5];
    uint64_t mv_bits_sum[5];
    uint64_t qscale_sum[5];
    int frame_count[5];
    int last_non_b_pict_type;

    void *non_lavc_opaque;
    float dry_run_qscale;
    int last_picture_number;
    AVExpr * rc_eq_eval;
} RateControlContext;

struct MpegEncContext;


int ff_rate_control_init(struct MpegEncContext *s);
float ff_rate_estimate_qscale(struct MpegEncContext *s, int dry_run);
void ff_write_pass1_stats(struct MpegEncContext *s);
void ff_rate_control_uninit(struct MpegEncContext *s);
int ff_vbv_update(struct MpegEncContext *s, int frame_size);
void ff_get_2pass_fcode(struct MpegEncContext *s);

int ff_xvid_rate_control_init(struct MpegEncContext *s);
void ff_xvid_rate_control_uninit(struct MpegEncContext *s);
float ff_xvid_rate_estimate_qscale(struct MpegEncContext *s, int dry_run);
# 36 "libavcodec/mpegvideo.h" 2
# 1 "libavcodec/parser.h" 1
# 28 "libavcodec/parser.h"
typedef struct ParseContext
{
    uint8_t *buffer;
    int index;
    int last_index;
    unsigned int buffer_size;
    uint32_t state;
    int frame_start_found;
    int overread;
    int overread_index;
    uint64_t state64;
} ParseContext;
# 47 "libavcodec/parser.h"
int ff_combine_frame(ParseContext *pc, int next, const uint8_t **buf, int *buf_size);
int ff_mpeg4video_split(AVCodecContext *avctx, const uint8_t *buf,
                        int buf_size);
void ff_parse_close(AVCodecParserContext *s);






void ff_fetch_timestamp(AVCodecParserContext *s, int off, int remove);
# 37 "libavcodec/mpegvideo.h" 2
# 1 "libavcodec/mpeg12data.h" 1
# 33 "libavcodec/mpeg12data.h"
# 1 "libavcodec/rl.h" 1
# 38 "libavcodec/rl.h"
typedef struct RLTable
{
    int n;
    int last;
    const uint16_t (*table_vlc)[2];
    const int8_t *table_run;
    const int8_t *table_level;
    uint8_t *index_run[2];
    int8_t *max_level[2];
    int8_t *max_run[2];
    VLC vlc;
    RL_VLC_ELEM *rl_vlc[32];
} RLTable;






void ff_init_rl(RLTable *rl, uint8_t static_store[2][2*64 + 64 + 3]);
void ff_init_vlc_rl(RLTable *rl);
# 75 "libavcodec/rl.h"
static inline int get_rl_index(const RLTable *rl, int last, int run, int level)
{
    int index;
    index = rl->index_run[last][run];
    if (index >= rl->n)
        return rl->n;
    if (level > rl->max_level[last][run])
        return rl->n;
    return index + level - 1;
}
# 34 "libavcodec/mpeg12data.h" 2

extern const uint16_t ff_mpeg1_default_intra_matrix[];
extern const uint16_t ff_mpeg1_default_non_intra_matrix[64];

extern const uint16_t ff_mpeg12_vlc_dc_lum_code[12];
extern const unsigned char ff_mpeg12_vlc_dc_lum_bits[12];
extern const uint16_t ff_mpeg12_vlc_dc_chroma_code[12];
extern const unsigned char ff_mpeg12_vlc_dc_chroma_bits[12];

extern RLTable ff_rl_mpeg1;
extern RLTable ff_rl_mpeg2;

extern const uint8_t ff_mpeg12_mbAddrIncrTable[36][2];
extern const uint8_t ff_mpeg12_mbPatTable[64][2];

extern const uint8_t ff_mpeg12_mbMotionVectorTable[17][2];

extern const AVRational ff_mpeg12_frame_rate_tab[];
extern const AVRational ff_mpeg2_frame_rate_tab[];

extern const float ff_mpeg1_aspect[16];
extern const AVRational ff_mpeg2_aspect[16];
# 38 "libavcodec/mpegvideo.h" 2

# 1 "libavcodec/videodsp.h" 1
# 29 "libavcodec/videodsp.h"
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 30 "libavcodec/videodsp.h" 2


typedef struct VideoDSPContext
{
# 50 "libavcodec/videodsp.h"
    void (*emulated_edge_mc)(uint8_t *buf, const uint8_t *src,
                             ptrdiff_t linesize, int block_w, int block_h,
                             int src_x, int src_y, int w, int h);
# 61 "libavcodec/videodsp.h"
    void (*prefetch)(uint8_t *buf, ptrdiff_t stride, int h);
} VideoDSPContext;

void ff_videodsp_init(VideoDSPContext *ctx, int bpc);


void ff_videodsp_init_arm(VideoDSPContext *ctx, int bpc);
void ff_videodsp_init_ppc(VideoDSPContext *ctx, int bpc);
void ff_videodsp_init_x86(VideoDSPContext *ctx, int bpc);
# 40 "libavcodec/mpegvideo.h" 2

# 1 "./libavutil/opt.h" 1
# 32 "./libavutil/opt.h"
# 1 "./libavutil/dict.h" 1
# 33 "./libavutil/opt.h" 2


# 1 "./libavutil/samplefmt.h" 1
# 36 "./libavutil/opt.h" 2
# 220 "./libavutil/opt.h"
enum AVOptionType
{
    AV_OPT_TYPE_FLAGS,
    AV_OPT_TYPE_INT,
    AV_OPT_TYPE_INT64,
    AV_OPT_TYPE_DOUBLE,
    AV_OPT_TYPE_FLOAT,
    AV_OPT_TYPE_STRING,
    AV_OPT_TYPE_RATIONAL,
    AV_OPT_TYPE_BINARY,
    AV_OPT_TYPE_CONST = 128,
    AV_OPT_TYPE_IMAGE_SIZE = (('E') | (('Z') << 8) | (('I') << 16) | ((unsigned)('S') << 24)),
    AV_OPT_TYPE_PIXEL_FMT = (('T') | (('M') << 8) | (('F') << 16) | ((unsigned)('P') << 24)),
    AV_OPT_TYPE_SAMPLE_FMT = (('T') | (('M') << 8) | (('F') << 16) | ((unsigned)('S') << 24)),

    FF_OPT_TYPE_FLAGS = 0,
    FF_OPT_TYPE_INT,
    FF_OPT_TYPE_INT64,
    FF_OPT_TYPE_DOUBLE,
    FF_OPT_TYPE_FLOAT,
    FF_OPT_TYPE_STRING,
    FF_OPT_TYPE_RATIONAL,
    FF_OPT_TYPE_BINARY,
    FF_OPT_TYPE_CONST=128,

};




typedef struct AVOption
{
    const char *name;





    const char *help;





    int offset;
    enum AVOptionType type;




    union
    {
        int64_t i64;
        double dbl;
        const char *str;

        AVRational q;
    } default_val;
    double min;
    double max;

    int flags;
# 293 "./libavutil/opt.h"
    const char *unit;
} AVOption;




typedef struct AVOptionRange
{
    const char *str;
    double value_min, value_max;
    double component_min, component_max;
    int is_range;
} AVOptionRange;




typedef struct AVOptionRanges
{
    AVOptionRange **range;
    int nb_ranges;
} AVOptionRanges;
# 330 "./libavutil/opt.h"
__attribute__((deprecated))
const AVOption *av_find_opt(void *obj, const char *name, const char *unit, int mask, int flags);
# 361 "./libavutil/opt.h"
__attribute__((deprecated))
int av_set_string3(void *obj, const char *name, const char *val, int alloc, const AVOption **o_out);

__attribute__((deprecated)) const AVOption *av_set_double(void *obj, const char *name, double n);
__attribute__((deprecated)) const AVOption *av_set_q(void *obj, const char *name, AVRational n);
__attribute__((deprecated)) const AVOption *av_set_int(void *obj, const char *name, int64_t n);

double av_get_double(void *obj, const char *name, const AVOption **o_out);
AVRational av_get_q(void *obj, const char *name, const AVOption **o_out);
int64_t av_get_int(void *obj, const char *name, const AVOption **o_out);
__attribute__((deprecated)) const char *av_get_string(void *obj, const char *name, const AVOption **o_out, char *buf, int buf_len);
__attribute__((deprecated)) const AVOption *av_next_option(void *obj, const AVOption *last);
# 384 "./libavutil/opt.h"
int av_opt_show2(void *obj, void *av_log_obj, int req_flags, int rej_flags);






void av_opt_set_defaults(void *s);


__attribute__((deprecated))
void av_opt_set_defaults2(void *s, int mask, int flags);
# 415 "./libavutil/opt.h"
int av_set_options_string(void *ctx, const char *opts,
                          const char *key_val_sep, const char *pairs_sep);
# 445 "./libavutil/opt.h"
int av_opt_set_from_string(void *ctx, const char *opts,
                           const char *const *shorthand,
                           const char *key_val_sep, const char *pairs_sep);



void av_opt_free(void *obj);
# 461 "./libavutil/opt.h"
int av_opt_flag_is_set(void *obj, const char *field_name, const char *flag_name);
# 477 "./libavutil/opt.h"
int av_opt_set_dict(void *obj, struct AVDictionary **options);
# 498 "./libavutil/opt.h"
int av_opt_get_key_value(const char **ropts,
                         const char *key_val_sep, const char *pairs_sep,
                         unsigned flags,
                         char **rkey, char **rval);

enum
{





    AV_OPT_FLAG_IMPLICIT_KEY = 1,
};
# 526 "./libavutil/opt.h"
int av_opt_eval_flags (void *obj, const AVOption *o, const char *val, int *flags_out);
int av_opt_eval_int (void *obj, const AVOption *o, const char *val, int *int_out);
int av_opt_eval_int64 (void *obj, const AVOption *o, const char *val, int64_t *int64_out);
int av_opt_eval_float (void *obj, const AVOption *o, const char *val, float *float_out);
int av_opt_eval_double(void *obj, const AVOption *o, const char *val, double *double_out);
int av_opt_eval_q (void *obj, const AVOption *o, const char *val, AVRational *q_out);
# 568 "./libavutil/opt.h"
const AVOption *av_opt_find(void *obj, const char *name, const char *unit,
                            int opt_flags, int search_flags);
# 592 "./libavutil/opt.h"
const AVOption *av_opt_find2(void *obj, const char *name, const char *unit,
                             int opt_flags, int search_flags, void **target_obj);
# 604 "./libavutil/opt.h"
const AVOption *av_opt_next(void *obj, const AVOption *prev);







void *av_opt_child_next(void *obj, void *prev);







const AVClass *av_opt_child_class_next(const AVClass *parent, const AVClass *prev);
# 648 "./libavutil/opt.h"
int av_opt_set (void *obj, const char *name, const char *val, int search_flags);
int av_opt_set_int (void *obj, const char *name, int64_t val, int search_flags);
int av_opt_set_double(void *obj, const char *name, double val, int search_flags);
int av_opt_set_q (void *obj, const char *name, AVRational val, int search_flags);
int av_opt_set_bin (void *obj, const char *name, const uint8_t *val, int size, int search_flags);
int av_opt_set_image_size(void *obj, const char *name, int w, int h, int search_flags);
int av_opt_set_pixel_fmt (void *obj, const char *name, enum AVPixelFormat fmt, int search_flags);
int av_opt_set_sample_fmt(void *obj, const char *name, enum AVSampleFormat fmt, int search_flags);
# 675 "./libavutil/opt.h"
int av_opt_get (void *obj, const char *name, int search_flags, uint8_t **out_val);
int av_opt_get_int (void *obj, const char *name, int search_flags, int64_t *out_val);
int av_opt_get_double(void *obj, const char *name, int search_flags, double *out_val);
int av_opt_get_q (void *obj, const char *name, int search_flags, AVRational *out_val);
int av_opt_get_image_size(void *obj, const char *name, int search_flags, int *w_out, int *h_out);
int av_opt_get_pixel_fmt (void *obj, const char *name, int search_flags, enum AVPixelFormat *out_fmt);
int av_opt_get_sample_fmt(void *obj, const char *name, int search_flags, enum AVSampleFormat *out_fmt);
# 693 "./libavutil/opt.h"
void *av_opt_ptr(const AVClass *avclass, void *obj, const char *name);




void av_opt_freep_ranges(AVOptionRanges **ranges);
# 712 "./libavutil/opt.h"
int av_opt_query_ranges(AVOptionRanges **, void *obj, const char *key, int flags);
# 727 "./libavutil/opt.h"
int av_opt_query_ranges_default(AVOptionRanges **, void *obj, const char *key, int flags);
# 42 "libavcodec/mpegvideo.h" 2
# 1 "./libavutil/timecode.h" 1
# 35 "./libavutil/timecode.h"
enum AVTimecodeFlag
{
    AV_TIMECODE_FLAG_DROPFRAME = 1<<0,
    AV_TIMECODE_FLAG_24HOURSMAX = 1<<1,
    AV_TIMECODE_FLAG_ALLOWNEGATIVE = 1<<2,
};

typedef struct
{
    int start;
    uint32_t flags;
    AVRational rate;
    unsigned fps;
} AVTimecode;
# 56 "./libavutil/timecode.h"
int av_timecode_adjust_ntsc_framenum2(int framenum, int fps);
# 71 "./libavutil/timecode.h"
uint32_t av_timecode_get_smpte_from_framenum(const AVTimecode *tc, int framenum);
# 85 "./libavutil/timecode.h"
char *av_timecode_make_string(const AVTimecode *tc, char *buf, int framenum);
# 96 "./libavutil/timecode.h"
char *av_timecode_make_smpte_tc_string(char *buf, uint32_t tcsmpte, int prevent_df);
# 105 "./libavutil/timecode.h"
char *av_timecode_make_mpeg_tc_string(char *buf, uint32_t tc25bit);
# 119 "./libavutil/timecode.h"
int av_timecode_init(AVTimecode *tc, AVRational rate, int flags, int frame_start, void *log_ctx);
# 131 "./libavutil/timecode.h"
int av_timecode_init_from_string(AVTimecode *tc, AVRational rate, const char *str, void *log_ctx);






int av_timecode_check_frame_rate(AVRational rate);
# 43 "libavcodec/mpegvideo.h" 2



enum OutputFormat
{
    FMT_MPEG1,
    FMT_H261,
    FMT_H263,
    FMT_MJPEG,
    FMT_H264,
};
# 90 "libavcodec/mpegvideo.h"
struct MpegEncContext;




typedef struct Picture
{
    struct AVFrame f;




    uint8_t *interpolated[3];
    int8_t *qscale_table_base;
    int16_t (*motion_val_base[2])[2];
    uint32_t *mb_type_base;
# 130 "libavcodec/mpegvideo.h"
    int field_poc[2];
    int poc;
    int frame_num;
    int mmco_reset;
    int pic_id;

    int long_ref;
    int ref_poc[2][2][32];
    int ref_count[2][2];
    int mbaff;
    int field_picture;
    int sync;

    int mb_var_sum;
    int mc_mb_var_sum;
    uint16_t *mb_var;
    uint16_t *mc_mb_var;
    uint8_t *mb_mean;
    int32_t *mb_cmp_score;
    int b_frame_score;
    struct MpegEncContext *owner2;
    int needs_realloc;
} Picture;




typedef struct MotionEstContext
{
    AVCodecContext *avctx;
    int skip;
    int co_located_mv[4][2];
    int direct_basis_mv[4][2];
    uint8_t *scratchpad;
    uint8_t *best_mb;
    uint8_t *temp_mb[2];
    uint8_t *temp;
    int best_bits;
    uint32_t *map;
    uint32_t *score_map;
    unsigned map_generation;
    int pre_penalty_factor;
    int penalty_factor;




    int sub_penalty_factor;
    int mb_penalty_factor;
    int flags;
    int sub_flags;
    int mb_flags;
    int pre_pass;
    int dia_size;
    int xmin;
    int xmax;
    int ymin;
    int ymax;
    int pred_x;
    int pred_y;
    uint8_t *src[4][4];
    uint8_t *ref[4][4];
    int stride;
    int uvstride;

    int mc_mb_var_sum_temp;
    int mb_var_sum_temp;
    int scene_change_score;

    op_pixels_func (*hpel_put)[4];
    op_pixels_func (*hpel_avg)[4];
    qpel_mc_func (*qpel_put)[16];
    qpel_mc_func (*qpel_avg)[16];
    uint8_t (*mv_penalty)[2048*2+1];
    uint8_t *current_mv_penalty;
    int (*sub_motion_search)(struct MpegEncContext * s,
                             int *mx_ptr, int *my_ptr, int dmin,
                             int src_index, int ref_index,
                             int size, int h);
} MotionEstContext;




typedef struct MpegEncContext
{
    AVClass *class;
    struct AVCodecContext *avctx;

    int width, height;
    int gop_size;
    int intra_only;
    int bit_rate;
    enum OutputFormat out_format;
    int h263_pred;
    int pb_frame;


    int h263_plus;
    int h263_flv;

    enum AVCodecID codec_id;
    int fixed_qscale;
    int encoding;
    int flags;
    int flags2;
    int max_b_frames;
    int luma_elim_threshold;
    int chroma_elim_threshold;
    int strict_std_compliance;
    int workaround_bugs;
    int codec_tag;
    int stream_codec_tag;



    int context_initialized;
    int input_picture_number;
    int coded_picture_number;
    int picture_number;
    int picture_in_gop_number;
    int mb_width, mb_height;
    int mb_stride;
    int b8_stride;
    int b4_stride;
    int h_edge_pos, v_edge_pos;
    int mb_num;
    int linesize;
    int uvlinesize;
    Picture *picture;
    Picture **input_picture;
    Picture **reordered_input_picture;

    int y_dc_scale, c_dc_scale;
    int ac_pred;
    int block_last_index[12];
    int h263_aic;


    ScanTable inter_scantable;
    ScanTable intra_scantable;
    ScanTable intra_h_scantable;
    ScanTable intra_v_scantable;




    int64_t user_specified_pts;



    int64_t dts_delta;



    int64_t reordered_pts;


    PutBitContext pb;

    int start_mb_y;
    int end_mb_y;
    struct MpegEncContext *thread_context[32];
    int slice_context_count;





    Picture last_picture;





    Picture next_picture;





    Picture new_picture;





    Picture current_picture;

    Picture *last_picture_ptr;
    Picture *next_picture_ptr;
    Picture *current_picture_ptr;
    int picture_count;
    int picture_range_start, picture_range_end;
    uint8_t *visualization_buffer[3];
    int last_dc[3];
    int16_t *dc_val_base;
    int16_t *dc_val[3];
    const uint8_t *y_dc_scale_table;
    const uint8_t *c_dc_scale_table;
    const uint8_t *chroma_qscale_table;
    uint8_t *coded_block_base;
    uint8_t *coded_block;
    int16_t (*ac_val_base)[16];
    int16_t (*ac_val[3])[16];
    int mb_skipped;
    uint8_t *mbskip_table;

    uint8_t *mbintra_table;
    uint8_t *cbp_table;
    uint8_t *pred_dir_table;
    uint8_t *edge_emu_buffer;
    uint8_t *rd_scratchpad;
    uint8_t *obmc_scratchpad;
    uint8_t *b_scratchpad;

    int qscale;
    int chroma_qscale;
    unsigned int lambda;
    unsigned int lambda2;
    int *lambda_table;
    int adaptive_quant;
    int dquant;
    int closed_gop;
    int pict_type;
    int vbv_delay;
    int last_pict_type;
    int last_non_b_pict_type;
    int droppable;
    int frame_rate_index;
    AVRational mpeg2_frame_rate_ext;
    int last_lambda_for[5];
    int skipdct;


    int unrestricted_mv;
    int h263_long_vectors;

    DSPContext dsp;
    VideoDSPContext vdsp;
    int f_code;
    int b_code;
    int16_t (*p_mv_table_base)[2];
    int16_t (*b_forw_mv_table_base)[2];
    int16_t (*b_back_mv_table_base)[2];
    int16_t (*b_bidir_forw_mv_table_base)[2];
    int16_t (*b_bidir_back_mv_table_base)[2];
    int16_t (*b_direct_mv_table_base)[2];
    int16_t (*p_field_mv_table_base[2][2])[2];
    int16_t (*b_field_mv_table_base[2][2][2])[2];
    int16_t (*p_mv_table)[2];
    int16_t (*b_forw_mv_table)[2];
    int16_t (*b_back_mv_table)[2];
    int16_t (*b_bidir_forw_mv_table)[2];
    int16_t (*b_bidir_back_mv_table)[2];
    int16_t (*b_direct_mv_table)[2];
    int16_t (*p_field_mv_table[2][2])[2];
    int16_t (*b_field_mv_table[2][2][2])[2];
    uint8_t (*p_field_select_table[2]);
    uint8_t (*b_field_select_table[2][2]);
    int me_method;
    int mv_dir;



    int mv_type;
# 404 "libavcodec/mpegvideo.h"
    int mv[2][4][2];
    int field_select[2][2];
    int last_mv[2][2][2];
    uint8_t *fcode_tab;
    int16_t direct_scale_mv[2][64];

    MotionEstContext me;

    int no_rounding;



    int mb_x, mb_y;
    int mb_skip_run;
    int mb_intra;
    uint16_t *mb_type;
# 438 "libavcodec/mpegvideo.h"
    int block_index[6];
    int block_wrap[6];
    uint8_t *dest[3];

    int *mb_index2xy;


    uint16_t intra_matrix[64];
    uint16_t chroma_intra_matrix[64];
    uint16_t inter_matrix[64];
    uint16_t chroma_inter_matrix[64];

    int intra_quant_bias;
    int inter_quant_bias;
    int min_qcoeff;
    int max_qcoeff;
    int ac_esc_length;
    uint8_t *intra_ac_vlc_length;
    uint8_t *intra_ac_vlc_last_length;
    uint8_t *inter_ac_vlc_length;
    uint8_t *inter_ac_vlc_last_length;
    uint8_t *luma_dc_vlc_length;


    int coded_score[12];


    int (*q_intra_matrix)[64];
    int (*q_chroma_intra_matrix)[64];
    int (*q_inter_matrix)[64];

    uint16_t (*q_intra_matrix16)[2][64];
    uint16_t (*q_chroma_intra_matrix16)[2][64];
    uint16_t (*q_inter_matrix16)[2][64];


    int (*dct_error_sum)[64];
    int dct_count[2];
    uint16_t (*dct_offset)[64];

    void *opaque;


    int64_t total_bits;
    int frame_bits;
    int stuffing_bits;
    int next_lambda;
    RateControlContext rc_context;


    int mv_bits;
    int header_bits;
    int i_tex_bits;
    int p_tex_bits;
    int i_count;
    int f_count;
    int b_count;
    int skip_count;
    int misc_bits;
    int last_bits;


    int error_count, error_occurred;
    uint8_t *error_status_table;
# 513 "libavcodec/mpegvideo.h"
    int resync_mb_x;
    int resync_mb_y;
    GetBitContext last_resync_gb;
    int mb_num_left;
    int next_p_frame_damaged;
    int err_recognition;

    ParseContext parse_context;


    int gob_index;
    int obmc;
    int showed_packed_warning;
    int mb_info;
    int prev_mb_info, last_mb_info;
    uint8_t *mb_info_ptr;
    int mb_info_size;


    int umvplus;
    int h263_aic_dir;
    int h263_slice_structured;
    int alt_inter_vlc;
    int modified_quant;
    int loop_filter;
    int custom_pcf;


    int time_increment_bits;
    int last_time_base;
    int time_base;
    int64_t time;
    int64_t last_non_b_time;
    uint16_t pp_time;
    uint16_t pb_time;
    uint16_t pp_field_time;
    uint16_t pb_field_time;
    int shape;
    int vol_sprite_usage;
    int sprite_width;
    int sprite_height;
    int sprite_left;
    int sprite_top;
    int sprite_brightness_change;
    int num_sprite_warping_points;
    int real_sprite_warping_points;
    uint16_t sprite_traj[4][2];
    int sprite_offset[2][2];
    int sprite_delta[2][2];
    int sprite_shift[2];
    int mcsel;
    int quant_precision;
    int quarter_sample;
    int scalability;
    int hierachy_type;
    int enhancement_type;
    int new_pred;
    int reduced_res_vop;
    int aspect_ratio_info;
    int sprite_warping_accuracy;
    int low_latency_sprite;
    int data_partitioning;
    int partitioned_frame;
    int rvlc;
    int resync_marker;
    int low_delay;
    int vo_type;
    int vol_control_parameters;
    int intra_dc_threshold;
    int use_intra_dc_vlc;
    PutBitContext tex_pb;
    PutBitContext pb2;
    int mpeg_quant;
    int t_frame;
    int padding_bug_score;
    int cplx_estimation_trash_i;
    int cplx_estimation_trash_p;
    int cplx_estimation_trash_b;


    int divx_version;
    int divx_build;
    int divx_packed;
    uint8_t *bitstream_buffer;
    int bitstream_buffer_size;
    unsigned int allocated_bitstream_buffer_size;

    int xvid_build;


    int lavc_build;


    int rv10_version;
    int rv10_first_dc_coded[3];
    int orig_width, orig_height;


    struct MJpegContext *mjpeg_ctx;
    int mjpeg_vsample[3];
    int mjpeg_hsample[3];
    int esc_pos;


    int mv_table_index;
    int rl_table_index;
    int rl_chroma_table_index;
    int dc_table_index;
    int use_skip_mb_code;
    int slice_height;
    int first_slice_line;
    int flipflop_rounding;
    int msmpeg4_version;
    int per_mb_rl_table;
    int esc3_level_length;
    int esc3_run_length;

    int (*ac_stats)[2][64 +1][64 +1][2];
    int inter_intra_pred;
    int mspel;


    GetBitContext gb;


    int gop_picture_number;
    int last_mv_dir;
    int broken_link;
    uint8_t *vbv_delay_ptr;


    int progressive_sequence;
    int mpeg_f_code[2][2];
    int picture_structure;





    int intra_dc_precision;
    int frame_pred_frame_dct;
    int top_field_first;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int chroma_format;



    int chroma_x_shift;
    int chroma_y_shift;

    int progressive_frame;
    int full_pel[2];
    int interlaced_dct;
    int first_slice;
    int first_field;
    int drop_frame_timecode;
    int scan_offset;


    int rtp_mode;

    char *tc_opt_str;
    AVTimecode tc;

    uint8_t *ptr_lastgob;
    int swap_uv;
    DCTELEM (*pblocks[12])[64];

    DCTELEM (*block)[64];
    DCTELEM (*blocks)[12][64];
    int (*decode_mb)(struct MpegEncContext *s, DCTELEM block[6][64]);





    void (*dct_unquantize_mpeg1_intra)(struct MpegEncContext *s,
                                       DCTELEM *block , int n, int qscale);
    void (*dct_unquantize_mpeg1_inter)(struct MpegEncContext *s,
                                       DCTELEM *block , int n, int qscale);
    void (*dct_unquantize_mpeg2_intra)(struct MpegEncContext *s,
                                       DCTELEM *block , int n, int qscale);
    void (*dct_unquantize_mpeg2_inter)(struct MpegEncContext *s,
                                       DCTELEM *block , int n, int qscale);
    void (*dct_unquantize_h263_intra)(struct MpegEncContext *s,
                                      DCTELEM *block , int n, int qscale);
    void (*dct_unquantize_h263_inter)(struct MpegEncContext *s,
                                      DCTELEM *block , int n, int qscale);
    void (*dct_unquantize_h261_intra)(struct MpegEncContext *s,
                                      DCTELEM *block , int n, int qscale);
    void (*dct_unquantize_h261_inter)(struct MpegEncContext *s,
                                      DCTELEM *block , int n, int qscale);
    void (*dct_unquantize_intra)(struct MpegEncContext *s,
                                 DCTELEM *block , int n, int qscale);
    void (*dct_unquantize_inter)(struct MpegEncContext *s,
                                 DCTELEM *block , int n, int qscale);
    int (*dct_quantize)(struct MpegEncContext *s, DCTELEM *block , int n, int qscale, int *overflow);
    int (*fast_dct_quantize)(struct MpegEncContext *s, DCTELEM *block , int n, int qscale, int *overflow);
    void (*denoise_dct)(struct MpegEncContext *s, DCTELEM *block);

    int mpv_flags;
    int quantizer_noise_shaping;


    uint8_t *er_temp_buffer;


    float *cplx_tab, *bits_tab;



    int context_reinit;
} MpegEncContext;
# 757 "libavcodec/mpegvideo.h"
extern const AVOption ff_mpv_generic_options[];
# 772 "libavcodec/mpegvideo.h"
void ff_MPV_common_defaults(MpegEncContext *s);

void ff_MPV_decode_defaults(MpegEncContext *s);
int ff_MPV_common_init(MpegEncContext *s);
int ff_mpv_frame_size_alloc(MpegEncContext *s, int linesize);
int ff_MPV_common_frame_size_change(MpegEncContext *s);
void ff_MPV_common_end(MpegEncContext *s);
void ff_MPV_decode_mb(MpegEncContext *s, DCTELEM block[12][64]);
int ff_MPV_frame_start(MpegEncContext *s, AVCodecContext *avctx);
void ff_MPV_frame_end(MpegEncContext *s);
int ff_MPV_encode_init(AVCodecContext *avctx);
int ff_MPV_encode_end(AVCodecContext *avctx);
int ff_MPV_encode_picture(AVCodecContext *avctx, AVPacket *pkt,
                          AVFrame *frame, int *got_packet);
void ff_dct_encode_init_x86(MpegEncContext *s);
void ff_MPV_common_init_x86(MpegEncContext *s);
void ff_MPV_common_init_axp(MpegEncContext *s);
void ff_MPV_common_init_arm(MpegEncContext *s);
void ff_MPV_common_init_altivec(MpegEncContext *s);
void ff_MPV_common_init_bfin(MpegEncContext *s);
void ff_clean_intra_table_entries(MpegEncContext *s);
void ff_draw_horiz_band(MpegEncContext *s, int y, int h);
void ff_mpeg_flush(AVCodecContext *avctx);
void ff_print_debug_info(MpegEncContext *s, AVFrame *pict);
void ff_write_quant_matrix(PutBitContext *pb, uint16_t *matrix);
void ff_release_unused_pictures(MpegEncContext *s, int remove_current);
int ff_find_unused_picture(MpegEncContext *s, int shared);
void ff_denoise_dct(MpegEncContext *s, DCTELEM *block);
int ff_update_duplicate_context(MpegEncContext *dst, MpegEncContext *src);
int ff_MPV_lowest_referenced_row(MpegEncContext *s, int dir);
void ff_MPV_report_decode_progress(MpegEncContext *s);
int ff_mpeg_update_thread_context(AVCodecContext *dst, const AVCodecContext *src);
const uint8_t *avpriv_mpv_find_start_code(const uint8_t *p, const uint8_t *end, uint32_t *state);
void ff_set_qscale(MpegEncContext * s, int qscale);

void ff_er_frame_start(MpegEncContext *s);
void ff_er_frame_end(MpegEncContext *s);
void ff_er_add_slice(MpegEncContext *s, int startx, int starty, int endx, int endy, int status);

int ff_dct_common_init(MpegEncContext *s);
int ff_dct_encode_init(MpegEncContext *s);
void ff_convert_matrix(DSPContext *dsp, int (*qmat)[64], uint16_t (*qmat16)[2][64],
                       const uint16_t *quant_matrix, int bias, int qmin, int qmax, int intra);
int ff_dct_quantize_c(MpegEncContext *s, DCTELEM *block, int n, int qscale, int *overflow);

void ff_init_block_index(MpegEncContext *s);
void ff_copy_picture(Picture *dst, Picture *src);

void ff_MPV_motion(MpegEncContext *s,
                   uint8_t *dest_y, uint8_t *dest_cb,
                   uint8_t *dest_cr, int dir,
                   uint8_t **ref_picture,
                   op_pixels_func (*pix_op)[4],
                   qpel_mc_func (*qpix_op)[16]);





int ff_alloc_picture(MpegEncContext *s, Picture *pic, int shared);

extern const enum AVPixelFormat ff_pixfmt_list_420[];
extern const enum AVPixelFormat ff_hwaccel_pixfmt_list_420[];

static inline void ff_update_block_index(MpegEncContext *s)
{
    const int block_size= 8 >> s->avctx->lowres;

    s->block_index[0]+=2;
    s->block_index[1]+=2;
    s->block_index[2]+=2;
    s->block_index[3]+=2;
    s->block_index[4]++;
    s->block_index[5]++;
    s->dest[0]+= 2*block_size;
    s->dest[1]+= block_size;
    s->dest[2]+= block_size;
}

static inline int get_bits_diff(MpegEncContext *s)
{
    const int bits= put_bits_count(&s->pb);
    const int last= s->last_bits;

    s->last_bits = bits;

    return bits - last;
}

static inline int ff_h263_round_chroma(int x)
{
    static const uint8_t h263_chroma_roundtab[16] =
    {

        0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1,
    };
    return h263_chroma_roundtab[x & 0xf] + (x >> 3);
}


void ff_estimate_p_frame_motion(MpegEncContext * s,
                                int mb_x, int mb_y);
void ff_estimate_b_frame_motion(MpegEncContext * s,
                                int mb_x, int mb_y);
int ff_get_best_fcode(MpegEncContext * s, int16_t (*mv_table)[2], int type);
void ff_fix_long_p_mvs(MpegEncContext * s);
void ff_fix_long_mvs(MpegEncContext * s, uint8_t *field_select_table, int field_select,
                     int16_t (*mv_table)[2], int f_code, int type, int truncate);
int ff_init_me(MpegEncContext *s);
int ff_pre_estimate_p_frame_motion(MpegEncContext * s, int mb_x, int mb_y);
int ff_epzs_motion_search(MpegEncContext * s, int *mx_ptr, int *my_ptr,
                          int P[10][2], int src_index, int ref_index, int16_t (*last_mv)[2],
                          int ref_mv_scale, int size, int h);
int ff_get_mb_score(MpegEncContext * s, int mx, int my, int src_index,
                    int ref_index, int size, int h, int add_rate);


extern const uint8_t ff_mpeg1_dc_scale_table[128];
extern const uint8_t * const ff_mpeg2_dc_scale_table[4];

void ff_mpeg1_encode_picture_header(MpegEncContext *s, int picture_number);
void ff_mpeg1_encode_mb(MpegEncContext *s,
                        DCTELEM block[6][64],
                        int motion_x, int motion_y);
void ff_mpeg1_encode_init(MpegEncContext *s);
void ff_mpeg1_encode_slice_header(MpegEncContext *s);
void ff_mpeg1_clean_buffers(MpegEncContext *s);
int ff_mpeg1_find_frame_end(ParseContext *pc, const uint8_t *buf, int buf_size, AVCodecParserContext *s);

extern const uint8_t ff_aic_dc_scale_table[32];
extern const uint8_t ff_h263_chroma_qscale_table[32];
extern const uint8_t ff_h263_loop_filter_strength[32];


void ff_h261_loop_filter(MpegEncContext *s);
void ff_h261_reorder_mb_index(MpegEncContext* s);
void ff_h261_encode_mb(MpegEncContext *s,
                       DCTELEM block[6][64],
                       int motion_x, int motion_y);
void ff_h261_encode_picture_header(MpegEncContext * s, int picture_number);
void ff_h261_encode_init(MpegEncContext *s);
int ff_h261_get_picture_format(int width, int height);



void ff_rv10_encode_picture_header(MpegEncContext *s, int picture_number);
int ff_rv_decode_dc(MpegEncContext *s, int n);
void ff_rv20_encode_picture_header(MpegEncContext *s, int picture_number);



void ff_msmpeg4_encode_picture_header(MpegEncContext * s, int picture_number);
void ff_msmpeg4_encode_ext_header(MpegEncContext * s);
void ff_msmpeg4_encode_mb(MpegEncContext * s,
                          DCTELEM block[6][64],
                          int motion_x, int motion_y);
int ff_msmpeg4_decode_picture_header(MpegEncContext * s);
int ff_msmpeg4_decode_ext_header(MpegEncContext * s, int buf_size);
int ff_msmpeg4_decode_init(AVCodecContext *avctx);
void ff_msmpeg4_encode_init(MpegEncContext *s);
int ff_wmv2_decode_picture_header(MpegEncContext * s);
int ff_wmv2_decode_secondary_picture_header(MpegEncContext * s);
void ff_wmv2_add_mb(MpegEncContext *s, DCTELEM block[6][64], uint8_t *dest_y, uint8_t *dest_cb, uint8_t *dest_cr);
void ff_mspel_motion(MpegEncContext *s,
                     uint8_t *dest_y, uint8_t *dest_cb, uint8_t *dest_cr,
                     uint8_t **ref_picture, op_pixels_func (*pix_op)[4],
                     int motion_x, int motion_y, int h);
int ff_wmv2_encode_picture_header(MpegEncContext * s, int picture_number);
void ff_wmv2_encode_mb(MpegEncContext * s,
                       DCTELEM block[6][64],
                       int motion_x, int motion_y);
# 36 "libavcodec/mjpegenc.c" 2
# 1 "libavcodec/mjpeg.h" 1
# 41 "libavcodec/mjpeg.h"
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
# 141 "libavcodec/mjpeg.h"
extern av_export const uint8_t avpriv_mjpeg_bits_dc_luminance[];
extern av_export const uint8_t avpriv_mjpeg_val_dc[];

extern av_export const uint8_t avpriv_mjpeg_bits_dc_chrominance[];

extern av_export const uint8_t avpriv_mjpeg_bits_ac_luminance[];
extern av_export const uint8_t avpriv_mjpeg_val_ac_luminance[];

extern av_export const uint8_t avpriv_mjpeg_bits_ac_chrominance[];
extern av_export const uint8_t avpriv_mjpeg_val_ac_chrominance[];

void ff_mjpeg_build_huffman_codes(uint8_t *huff_size, uint16_t *huff_code,
                                  const uint8_t *bits_table,
                                  const uint8_t *val_table);
# 37 "libavcodec/mjpegenc.c" 2
# 1 "libavcodec/mjpegenc.h" 1
# 39 "libavcodec/mjpegenc.h"
typedef struct MJpegContext
{
    uint8_t huff_size_dc_luminance[12];
    uint16_t huff_code_dc_luminance[12];
    uint8_t huff_size_dc_chrominance[12];
    uint16_t huff_code_dc_chrominance[12];

    uint8_t huff_size_ac_luminance[256];
    uint16_t huff_code_ac_luminance[256];
    uint8_t huff_size_ac_chrominance[256];
    uint16_t huff_code_ac_chrominance[256];
} MJpegContext;

int ff_mjpeg_encode_init(MpegEncContext *s);
void ff_mjpeg_encode_close(MpegEncContext *s);
void ff_mjpeg_encode_picture_header(MpegEncContext *s);
void ff_mjpeg_encode_picture_trailer(MpegEncContext *s);
void ff_mjpeg_encode_stuffing(MpegEncContext *s);
void ff_mjpeg_encode_dc(MpegEncContext *s, int val,
                        uint8_t *huff_size, uint16_t *huff_code);
void ff_mjpeg_encode_mb(MpegEncContext *s, DCTELEM block[6][64]);
# 38 "libavcodec/mjpegenc.c" 2






int ff_mjpeg_encode_init(MpegEncContext *s)
{
    MJpegContext *m;

    if (s->width > 65500 || s->height > 65500)
    {
        av_log(s, 16, "JPEG does not support resolutions above 65500x65500\n");
        return -1;
    }

    m = av_malloc(sizeof(MJpegContext));
    if (!m)
        return -1;

    s->min_qcoeff=-1023;
    s->max_qcoeff= 1023;


    ff_mjpeg_build_huffman_codes(m->huff_size_dc_luminance,
                                 m->huff_code_dc_luminance,
                                 avpriv_mjpeg_bits_dc_luminance,
                                 avpriv_mjpeg_val_dc);
    ff_mjpeg_build_huffman_codes(m->huff_size_dc_chrominance,
                                 m->huff_code_dc_chrominance,
                                 avpriv_mjpeg_bits_dc_chrominance,
                                 avpriv_mjpeg_val_dc);
    ff_mjpeg_build_huffman_codes(m->huff_size_ac_luminance,
                                 m->huff_code_ac_luminance,
                                 avpriv_mjpeg_bits_ac_luminance,
                                 avpriv_mjpeg_val_ac_luminance);
    ff_mjpeg_build_huffman_codes(m->huff_size_ac_chrominance,
                                 m->huff_code_ac_chrominance,
                                 avpriv_mjpeg_bits_ac_chrominance,
                                 avpriv_mjpeg_val_ac_chrominance);

    s->mjpeg_ctx = m;
    return 0;
}

void ff_mjpeg_encode_close(MpegEncContext *s)
{
    av_free(s->mjpeg_ctx);
}


static int put_huffman_table(MpegEncContext *s, int table_class, int table_id,
                             const uint8_t *bits_table, const uint8_t *value_table)
{
    PutBitContext *p = &s->pb;
    int n, i;

    put_bits(p, 4, table_class);
    put_bits(p, 4, table_id);

    n = 0;
    for(i=1; i<=16; i++)
    {
        n += bits_table[i];
        put_bits(p, 8, bits_table[i]);
    }

    for(i=0; i<n; i++)
        put_bits(p, 8, value_table[i]);

    return n + 17;
}

static void jpeg_table_header(MpegEncContext *s)
{
    PutBitContext *p = &s->pb;
    int i, j, size;
    uint8_t *ptr;


    put_marker(p, DQT);



    put_bits(p, 16, 2 + 1 * (1 + 64));

    put_bits(p, 4, 0);
    put_bits(p, 4, 0);
    for(i=0; i<64; i++)
    {
        j = s->intra_scantable.permutated[i];
        put_bits(p, 8, s->intra_matrix[j]);
    }
# 137 "libavcodec/mjpegenc.c"
    if(s->avctx->active_thread_type & 2)
    {
        put_marker(p, DRI);
        put_bits(p, 16, 4);
        put_bits(p, 16, (s->width-1)/(8*s->mjpeg_hsample[0]) + 1);
    }


    put_marker(p, DHT);
    flush_put_bits(p);
    ptr = put_bits_ptr(p);
    put_bits(p, 16, 0);
    size = 2;
    size += put_huffman_table(s, 0, 0, avpriv_mjpeg_bits_dc_luminance,
                              avpriv_mjpeg_val_dc);
    size += put_huffman_table(s, 0, 1, avpriv_mjpeg_bits_dc_chrominance,
                              avpriv_mjpeg_val_dc);

    size += put_huffman_table(s, 1, 0, avpriv_mjpeg_bits_ac_luminance,
                              avpriv_mjpeg_val_ac_luminance);
    size += put_huffman_table(s, 1, 1, avpriv_mjpeg_bits_ac_chrominance,
                              avpriv_mjpeg_val_ac_chrominance);
    ((((union unaligned_16 *) (ptr))->l) = (av_bswap16(size)));
}

static void jpeg_put_comments(MpegEncContext *s)
{
    PutBitContext *p = &s->pb;
    int size;
    uint8_t *ptr;

    if (s->avctx->sample_aspect_ratio.num )
    {

        put_marker(p, APP0);
        put_bits(p, 16, 16);
        avpriv_put_string(p, "JFIF", 1);
        put_bits(p, 16, 0x0102);
        put_bits(p, 8, 0);
        put_bits(p, 16, s->avctx->sample_aspect_ratio.num);
        put_bits(p, 16, s->avctx->sample_aspect_ratio.den);
        put_bits(p, 8, 0);
        put_bits(p, 8, 0);
    }


    if(!(s->flags & 0x00800000))
    {
        put_marker(p, COM);
        flush_put_bits(p);
        ptr = put_bits_ptr(p);
        put_bits(p, 16, 0);
        avpriv_put_string(p, "Lavc" "54.86.100", 1);
        size = strlen("Lavc" "54.86.100")+3;
        ((((union unaligned_16 *) (ptr))->l) = (av_bswap16(size)));
    }

    if( s->avctx->pix_fmt == AV_PIX_FMT_YUV420P
            ||s->avctx->pix_fmt == AV_PIX_FMT_YUV422P
            ||s->avctx->pix_fmt == AV_PIX_FMT_YUV444P)
    {
        put_marker(p, COM);
        flush_put_bits(p);
        ptr = put_bits_ptr(p);
        put_bits(p, 16, 0);
        avpriv_put_string(p, "CS=ITU601", 1);
        size = strlen("CS=ITU601")+3;
        ((((union unaligned_16 *) (ptr))->l) = (av_bswap16(size)));
    }
}

void ff_mjpeg_encode_picture_header(MpegEncContext *s)
{
    const int lossless= s->avctx->codec_id != AV_CODEC_ID_MJPEG;
    int i;

    put_marker(&s->pb, SOI);


    if(s->avctx->codec_id == AV_CODEC_ID_AMV) goto end;

    jpeg_put_comments(s);

    jpeg_table_header(s);

    switch(s->avctx->codec_id)
    {
    case AV_CODEC_ID_MJPEG:
        put_marker(&s->pb, SOF0 );
        break;
    case AV_CODEC_ID_LJPEG:
        put_marker(&s->pb, SOF3 );
        break;
    default:
        do
        {
            if (!(0))
            {
                av_log(((void *)0), 0, "Assertion %s failed at %s:%d\n", "0", "libavcodec/mjpegenc.c", 222);
                abort();
            }
        }
        while (0);
    }

    put_bits(&s->pb, 16, 17);
    if(lossless && (s->avctx->pix_fmt == AV_PIX_FMT_BGR0
                    || s->avctx->pix_fmt == AV_PIX_FMT_BGRA
                    || s->avctx->pix_fmt == AV_PIX_FMT_BGR24))
        put_bits(&s->pb, 8, 9);
    else
        put_bits(&s->pb, 8, 8);
    put_bits(&s->pb, 16, s->height);
    put_bits(&s->pb, 16, s->width);
    put_bits(&s->pb, 8, 3);


    put_bits(&s->pb, 8, 1);
    put_bits(&s->pb, 4, s->mjpeg_hsample[0]);
    put_bits(&s->pb, 4, s->mjpeg_vsample[0]);
    put_bits(&s->pb, 8, 0);


    put_bits(&s->pb, 8, 2);
    put_bits(&s->pb, 4, s->mjpeg_hsample[1]);
    put_bits(&s->pb, 4, s->mjpeg_vsample[1]);



    put_bits(&s->pb, 8, 0);



    put_bits(&s->pb, 8, 3);
    put_bits(&s->pb, 4, s->mjpeg_hsample[2]);
    put_bits(&s->pb, 4, s->mjpeg_vsample[2]);



    put_bits(&s->pb, 8, 0);



    put_marker(&s->pb, SOS);
    put_bits(&s->pb, 16, 12);
    put_bits(&s->pb, 8, 3);


    put_bits(&s->pb, 8, 1);
    put_bits(&s->pb, 4, 0);
    put_bits(&s->pb, 4, 0);


    put_bits(&s->pb, 8, 2);
    put_bits(&s->pb, 4, 1);
    put_bits(&s->pb, 4, lossless ? 0 : 1);


    put_bits(&s->pb, 8, 3);
    put_bits(&s->pb, 4, 1);
    put_bits(&s->pb, 4, lossless ? 0 : 1);

    put_bits(&s->pb, 8, lossless ? s->avctx->prediction_method+1 : 0);

    switch(s->avctx->codec_id)
    {
    case AV_CODEC_ID_MJPEG:
        put_bits(&s->pb, 8, 63);
        break;
    case AV_CODEC_ID_LJPEG:
        put_bits(&s->pb, 8, 0);
        break;
    default:
        do
        {
            if (!(0))
            {
                av_log(((void *)0), 0, "Assertion %s failed at %s:%d\n", "0", "libavcodec/mjpegenc.c", 287);
                abort();
            }
        }
        while (0);
    }

    put_bits(&s->pb, 8, 0);

end:
    s->esc_pos = put_bits_count(&s->pb) >> 3;
    for(i=1; i<s->slice_context_count; i++)
        s->thread_context[i]->esc_pos = 0;
}

void escape_FF(MpegEncContext *s, int start)
{
    int size= put_bits_count(&s->pb) - start*8;
    int i, ff_count;
    uint8_t *buf= s->pb.buf + start;
    int align= (-(size_t)(buf))&3;

    ((void)0);
    size >>= 3;

    ff_count=0;
    for(i=0; i<size && i<align; i++)
    {
        if(buf[i]==0xFF) ff_count++;
    }
    for(; i<size-15; i+=16)
    {
        int acc, v;

        v= *(uint32_t*)(&buf[i]);
        acc= (((v & (v>>4))&0x0F0F0F0F)+0x01010101)&0x10101010;
        v= *(uint32_t*)(&buf[i+4]);
        acc+=(((v & (v>>4))&0x0F0F0F0F)+0x01010101)&0x10101010;
        v= *(uint32_t*)(&buf[i+8]);
        acc+=(((v & (v>>4))&0x0F0F0F0F)+0x01010101)&0x10101010;
        v= *(uint32_t*)(&buf[i+12]);
        acc+=(((v & (v>>4))&0x0F0F0F0F)+0x01010101)&0x10101010;

        acc>>=4;
        acc+= (acc>>16);
        acc+= (acc>>8);
        ff_count+= acc&0xFF;
    }
    for(; i<size; i++)
    {
        if(buf[i]==0xFF) ff_count++;
    }

    if(ff_count==0) return;

    flush_put_bits(&s->pb);
    skip_put_bytes(&s->pb, ff_count);

    for(i=size-1; ff_count; i--)
    {
        int v= buf[i];

        if(v==0xFF)
        {
            buf[i+ff_count]= 0;
            ff_count--;
        }

        buf[i+ff_count]= v;
    }
}

void ff_mjpeg_encode_stuffing(MpegEncContext *s)
{
    int length, i;
    PutBitContext *pbc = &s->pb;
    int mb_y = s->mb_y - !s->mb_x;
    length= (-put_bits_count(pbc))&7;
    if(length) put_bits(pbc, length, (1<<length)-1);

    flush_put_bits(&s->pb);
    escape_FF(s, s->esc_pos);

    if((s->avctx->active_thread_type & 2) && mb_y < s->mb_height)
        put_marker(pbc, RST0 + (mb_y&7));
    s->esc_pos = put_bits_count(pbc) >> 3;

    for(i=0; i<3; i++)
        s->last_dc[i] = 128 << s->intra_dc_precision;
}

void ff_mjpeg_encode_picture_trailer(MpegEncContext *s)
{

    ((void)0);


    put_marker(&s->pb, EOI);
}

void ff_mjpeg_encode_dc(MpegEncContext *s, int val,
                        uint8_t *huff_size, uint16_t *huff_code)
{
    int mant, nbits;

    if (val == 0)
    {
        put_bits(&s->pb, huff_size[0], huff_code[0]);
    }
    else
    {
        mant = val;
        if (val < 0)
        {
            val = -val;
            mant--;
        }

        nbits= av_log2_16bit(val) + 1;

        put_bits(&s->pb, huff_size[nbits], huff_code[nbits]);

        put_sbits(&s->pb, nbits, mant);
    }
}

static void encode_block(MpegEncContext *s, DCTELEM *block, int n)
{
    int mant, nbits, code, i, j;
    int component, dc, run, last_index, val;
    MJpegContext *m = s->mjpeg_ctx;
    uint8_t *huff_size_ac;
    uint16_t *huff_code_ac;


    component = (n <= 3 ? 0 : (n&1) + 1);
    dc = block[0];
    val = dc - s->last_dc[component];
    if (n < 4)
    {
        ff_mjpeg_encode_dc(s, val, m->huff_size_dc_luminance, m->huff_code_dc_luminance);
        huff_size_ac = m->huff_size_ac_luminance;
        huff_code_ac = m->huff_code_ac_luminance;
    }
    else
    {
        ff_mjpeg_encode_dc(s, val, m->huff_size_dc_chrominance, m->huff_code_dc_chrominance);
        huff_size_ac = m->huff_size_ac_chrominance;
        huff_code_ac = m->huff_code_ac_chrominance;
    }
    s->last_dc[component] = dc;



    run = 0;
    last_index = s->block_last_index[n];
    for(i=1; i<=last_index; i++)
    {
        j = s->intra_scantable.permutated[i];
        val = block[j];
        if (val == 0)
        {
            run++;
        }
        else
        {
            while (run >= 16)
            {
                put_bits(&s->pb, huff_size_ac[0xf0], huff_code_ac[0xf0]);
                run -= 16;
            }
            mant = val;
            if (val < 0)
            {
                val = -val;
                mant--;
            }

            nbits= av_log2(val) + 1;
            code = (run << 4) | nbits;

            put_bits(&s->pb, huff_size_ac[code], huff_code_ac[code]);

            put_sbits(&s->pb, nbits, mant);
            run = 0;
        }
    }


    if (last_index < 63 || run != 0)
        put_bits(&s->pb, huff_size_ac[0], huff_code_ac[0]);
}

void ff_mjpeg_encode_mb(MpegEncContext *s, DCTELEM block[6][64])
{
    int i;
    if (s->chroma_format == 3)
    {
        encode_block(s, block[0], 0);
        encode_block(s, block[2], 2);
        encode_block(s, block[4], 4);
        encode_block(s, block[8], 8);
        encode_block(s, block[5], 5);
        encode_block(s, block[9], 9);

        if (16*s->mb_x+8 < s->width)
        {
            encode_block(s, block[1], 1);
            encode_block(s, block[3], 3);
            encode_block(s, block[6], 6);
            encode_block(s, block[10], 10);
            encode_block(s, block[7], 7);
            encode_block(s, block[11], 11);
        }
    }
    else
    {
        for(i=0; i<5; i++)
        {
            encode_block(s, block[i], i);
        }
        if (s->chroma_format == 1)
        {
            encode_block(s, block[5], 5);
        }
        else
        {
            encode_block(s, block[6], 6);
            encode_block(s, block[5], 5);
            encode_block(s, block[7], 7);
        }
    }

    s->i_tex_bits += get_bits_diff(s);
}



static int amv_encode_picture(AVCodecContext *avctx, AVPacket *pkt,
                              const AVFrame *pic_arg, int *got_packet)

{
    MpegEncContext *s = avctx->priv_data;
    AVFrame pic = *pic_arg;
    int i;


    if(s->avctx->flags & 0x4000)
        return -1;


    for(i=0; i < 3; i++)
    {
        pic.data[i] += (pic.linesize[i] * (s->mjpeg_vsample[i] * (8 * s->mb_height -((s->height/2)&7)) - 1 ));
        pic.linesize[i] *= -1;
    }
    return ff_MPV_encode_picture(avctx, pkt, &pic, got_packet);
}


AVCodec ff_mjpeg_encoder =
{
    .name = "mjpeg",
    .type = AVMEDIA_TYPE_VIDEO,
    .id = AV_CODEC_ID_MJPEG,
    .priv_data_size = sizeof(MpegEncContext),
    .init = ff_MPV_encode_init,
    .encode2 = ff_MPV_encode_picture,
    .close = ff_MPV_encode_end,
    .capabilities = 0x2000 | 0x1000 | 0x40000000,
    .pix_fmts = (const enum AVPixelFormat[])
    {
        AV_PIX_FMT_YUVJ420P, AV_PIX_FMT_YUVJ422P, AV_PIX_FMT_YUVJ444P, AV_PIX_FMT_NONE
    },
    .long_name = NULL_IF_CONFIG_SMALL("MJPEG (Motion JPEG)"),
};


AVCodec ff_amv_encoder =
{
    .name = "amv",
    .type = AVMEDIA_TYPE_VIDEO,
    .id = AV_CODEC_ID_AMV,
    .priv_data_size = sizeof(MpegEncContext),
    .init = ff_MPV_encode_init,
    .encode2 = amv_encode_picture,
    .close = ff_MPV_encode_end,
    .pix_fmts = (const enum AVPixelFormat[])
    {
        AV_PIX_FMT_YUVJ420P, AV_PIX_FMT_YUVJ422P, AV_PIX_FMT_NONE
    },
    .long_name = NULL_IF_CONFIG_SMALL("AMV Video"),
};
