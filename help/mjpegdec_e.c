# 1 "mjpegdec.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "mjpegdec.c"
# 33 "mjpegdec.c"
# 1 "/usr/local/include/libavutil/imgutils.h" 1 3
# 30 "/usr/local/include/libavutil/imgutils.h" 3
# 1 "/usr/local/include/libavutil/avutil.h" 1 3
# 120 "/usr/local/include/libavutil/avutil.h" 3
unsigned avutil_version(void);




const char *avutil_configuration(void);




const char *avutil_license(void);
# 141 "/usr/local/include/libavutil/avutil.h" 3
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
# 214 "/usr/local/include/libavutil/avutil.h" 3
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
# 232 "/usr/local/include/libavutil/avutil.h" 3
char av_get_picture_type_char(enum AVPictureType pict_type);





# 1 "/usr/local/include/libavutil/common.h" 1 3
# 29 "/usr/local/include/libavutil/common.h" 3
# 1 "/usr/include/ctype.h" 1 3 4
# 27 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 323 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/predefs.h" 1 3 4
# 324 "/usr/include/features.h" 2 3 4
# 356 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/sys/cdefs.h" 1 3 4
# 353 "/usr/include/i386-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 354 "/usr/include/i386-linux-gnu/sys/cdefs.h" 2 3 4
# 357 "/usr/include/features.h" 2 3 4
# 388 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/gnu/stubs.h" 1 3 4



# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/i386-linux-gnu/gnu/stubs.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/i386-linux-gnu/gnu/stubs.h" 2 3 4
# 389 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/ctype.h" 2 3 4
# 1 "/usr/include/i386-linux-gnu/bits/types.h" 1 3 4
# 28 "/usr/include/i386-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/i386-linux-gnu/bits/types.h" 2 3 4


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




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
# 131 "/usr/include/i386-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/typesizes.h" 1 3 4
# 132 "/usr/include/i386-linux-gnu/bits/types.h" 2 3 4


__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct
{
    int __val[2];
} __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef long int __swblk_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;

__extension__ typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;
# 29 "/usr/include/ctype.h" 2 3 4


# 41 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 61 "/usr/include/endian.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/byteswap.h" 1 3 4
# 62 "/usr/include/endian.h" 2 3 4
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
__attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc (void)
__attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc (void)
__attribute__ ((__nothrow__)) __attribute__ ((__const));
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








extern int isblank (int) __attribute__ ((__nothrow__));


# 142 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__));



extern int toascii (int __c) __attribute__ ((__nothrow__));



extern int _toupper (int) __attribute__ ((__nothrow__));
extern int _tolower (int) __attribute__ ((__nothrow__));
# 233 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 28 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

    struct __locale_data *__locales[13];


    const unsigned short int *__ctype_b;
    const int *__ctype_tolower;
    const int *__ctype_toupper;


    const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 234 "/usr/include/ctype.h" 2 3 4
# 247 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));
# 323 "/usr/include/ctype.h" 3 4

# 30 "/usr/local/include/libavutil/common.h" 2 3
# 1 "/usr/include/errno.h" 1 3 4
# 32 "/usr/include/errno.h" 3 4




# 1 "/usr/include/i386-linux-gnu/bits/errno.h" 1 3 4
# 25 "/usr/include/i386-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4



# 1 "/usr/include/i386-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/i386-linux-gnu/asm/errno.h" 2 3 4
# 5 "/usr/include/linux/errno.h" 2 3 4
# 26 "/usr/include/i386-linux-gnu/bits/errno.h" 2 3 4
# 47 "/usr/include/i386-linux-gnu/bits/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 37 "/usr/include/errno.h" 2 3 4
# 59 "/usr/include/errno.h" 3 4

# 31 "/usr/local/include/libavutil/common.h" 2 3
# 1 "/usr/include/inttypes.h" 1 3 4
# 28 "/usr/include/inttypes.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include/stdint.h" 1 3 4


# 1 "/usr/include/stdint.h" 1 3 4
# 27 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wchar.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 37 "/usr/include/stdint.h" 3 4
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;



__extension__
typedef long long int int64_t;




typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__
typedef unsigned long long int uint_fast64_t;
# 126 "/usr/include/stdint.h" 3 4
typedef int intptr_t;


typedef unsigned int uintptr_t;
# 138 "/usr/include/stdint.h" 3 4
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;
# 4 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include/stdint.h" 2 3 4
# 29 "/usr/include/inttypes.h" 2 3 4






typedef int __gwchar_t;
# 274 "/usr/include/inttypes.h" 3 4

# 288 "/usr/include/inttypes.h" 3 4
typedef struct
{
    long long int quot;
    long long int rem;
} imaxdiv_t;





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
# 442 "/usr/include/inttypes.h" 3 4

# 32 "/usr/local/include/libavutil/common.h" 2 3
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include-fixed/limits.h" 1 3 4
# 169 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 145 "/usr/include/limits.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/posix1_lim.h" 1 3 4
# 157 "/usr/include/i386-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/local_lim.h" 1 3 4
# 39 "/usr/include/i386-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 40 "/usr/include/i386-linux-gnu/bits/local_lim.h" 2 3 4
# 158 "/usr/include/i386-linux-gnu/bits/posix1_lim.h" 2 3 4
# 146 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/i386-linux-gnu/bits/posix2_lim.h" 1 3 4
# 150 "/usr/include/limits.h" 2 3 4
# 170 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include-fixed/limits.h" 2 3 4
# 33 "/usr/local/include/libavutil/common.h" 2 3
# 1 "/usr/include/math.h" 1 3 4
# 30 "/usr/include/math.h" 3 4




# 1 "/usr/include/i386-linux-gnu/bits/huge_val.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/i386-linux-gnu/bits/huge_valf.h" 1 3 4
# 37 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/i386-linux-gnu/bits/huge_vall.h" 1 3 4
# 38 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/bits/inf.h" 1 3 4
# 41 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/bits/nan.h" 1 3 4
# 44 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/i386-linux-gnu/bits/mathdef.h" 1 3 4
# 36 "/usr/include/i386-linux-gnu/bits/mathdef.h" 3 4
typedef long double float_t;

typedef long double double_t;
# 48 "/usr/include/math.h" 2 3 4
# 71 "/usr/include/math.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


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

# 87 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


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

# 127 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


extern double expm1 (double __x) __attribute__ ((__nothrow__));
extern double __expm1 (double __x) __attribute__ ((__nothrow__));


extern double log1p (double __x) __attribute__ ((__nothrow__));
extern double __log1p (double __x) __attribute__ ((__nothrow__));


extern double logb (double __x) __attribute__ ((__nothrow__));
extern double __logb (double __x) __attribute__ ((__nothrow__));






extern double exp2 (double __x) __attribute__ ((__nothrow__));
extern double __exp2 (double __x) __attribute__ ((__nothrow__));


extern double log2 (double __x) __attribute__ ((__nothrow__));
extern double __log2 (double __x) __attribute__ ((__nothrow__));








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






extern double nan (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __nan (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





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






extern double tgamma (double) __attribute__ ((__nothrow__));
extern double __tgamma (double) __attribute__ ((__nothrow__));





extern double gamma (double) __attribute__ ((__nothrow__));
extern double __gamma (double) __attribute__ ((__nothrow__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__));
extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__));







extern double rint (double __x) __attribute__ ((__nothrow__));
extern double __rint (double __x) __attribute__ ((__nothrow__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern double remainder (double __x, double __y) __attribute__ ((__nothrow__));
extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__));
extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__));



extern int ilogb (double __x) __attribute__ ((__nothrow__));
extern int __ilogb (double __x) __attribute__ ((__nothrow__));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__));
extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__));
extern double __nearbyint (double __x) __attribute__ ((__nothrow__));



extern double round (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __round (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __trunc (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__));
extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__));






extern long int lrint (double __x) __attribute__ ((__nothrow__));
extern long int __lrint (double __x) __attribute__ ((__nothrow__));
extern long long int llrint (double __x) __attribute__ ((__nothrow__));
extern long long int __llrint (double __x) __attribute__ ((__nothrow__));



extern long int lround (double __x) __attribute__ ((__nothrow__));
extern long int __lround (double __x) __attribute__ ((__nothrow__));
extern long long int llround (double __x) __attribute__ ((__nothrow__));
extern long long int __llround (double __x) __attribute__ ((__nothrow__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__));
extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__));
extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__));
extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__));



extern int __fpclassify (double __value) __attribute__ ((__nothrow__))
__attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__))
__attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__));
extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__));








extern double scalb (double __x, double __n) __attribute__ ((__nothrow__));
extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__));
# 72 "/usr/include/math.h" 2 3 4
# 94 "/usr/include/math.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


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

# 87 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


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

# 127 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


extern float expm1f (float __x) __attribute__ ((__nothrow__));
extern float __expm1f (float __x) __attribute__ ((__nothrow__));


extern float log1pf (float __x) __attribute__ ((__nothrow__));
extern float __log1pf (float __x) __attribute__ ((__nothrow__));


extern float logbf (float __x) __attribute__ ((__nothrow__));
extern float __logbf (float __x) __attribute__ ((__nothrow__));






extern float exp2f (float __x) __attribute__ ((__nothrow__));
extern float __exp2f (float __x) __attribute__ ((__nothrow__));


extern float log2f (float __x) __attribute__ ((__nothrow__));
extern float __log2f (float __x) __attribute__ ((__nothrow__));








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






extern float nanf (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __nanf (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





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






extern float tgammaf (float) __attribute__ ((__nothrow__));
extern float __tgammaf (float) __attribute__ ((__nothrow__));





extern float gammaf (float) __attribute__ ((__nothrow__));
extern float __gammaf (float) __attribute__ ((__nothrow__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__));
extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__));







extern float rintf (float __x) __attribute__ ((__nothrow__));
extern float __rintf (float __x) __attribute__ ((__nothrow__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__));
extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__));
extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__));
extern int __ilogbf (float __x) __attribute__ ((__nothrow__));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__));
extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__));
extern float __nearbyintf (float __x) __attribute__ ((__nothrow__));



extern float roundf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __roundf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __truncf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__));
extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__));
extern long int __lrintf (float __x) __attribute__ ((__nothrow__));
extern long long int llrintf (float __x) __attribute__ ((__nothrow__));
extern long long int __llrintf (float __x) __attribute__ ((__nothrow__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__));
extern long int __lroundf (float __x) __attribute__ ((__nothrow__));
extern long long int llroundf (float __x) __attribute__ ((__nothrow__));
extern long long int __llroundf (float __x) __attribute__ ((__nothrow__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__));
extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__));
extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__));
extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__));



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__))
__attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__))
__attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__));
extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__));








extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__));
extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__));
# 95 "/usr/include/math.h" 2 3 4
# 145 "/usr/include/math.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


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

# 87 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


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

# 127 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


extern long double expm1l (long double __x) __attribute__ ((__nothrow__));
extern long double __expm1l (long double __x) __attribute__ ((__nothrow__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__));
extern long double __log1pl (long double __x) __attribute__ ((__nothrow__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__));
extern long double __logbl (long double __x) __attribute__ ((__nothrow__));






extern long double exp2l (long double __x) __attribute__ ((__nothrow__));
extern long double __exp2l (long double __x) __attribute__ ((__nothrow__));


extern long double log2l (long double __x) __attribute__ ((__nothrow__));
extern long double __log2l (long double __x) __attribute__ ((__nothrow__));








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






extern long double nanl (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __nanl (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





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






extern long double tgammal (long double) __attribute__ ((__nothrow__));
extern long double __tgammal (long double) __attribute__ ((__nothrow__));





extern long double gammal (long double) __attribute__ ((__nothrow__));
extern long double __gammal (long double) __attribute__ ((__nothrow__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__));
extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__));
extern long double __rintl (long double __x) __attribute__ ((__nothrow__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__));
extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__));
extern int __ilogbl (long double __x) __attribute__ ((__nothrow__));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__));
extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__));
extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __roundl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __truncl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__));
extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__));
extern long int __lrintl (long double __x) __attribute__ ((__nothrow__));
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__));
extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__));
extern long int __lroundl (long double __x) __attribute__ ((__nothrow__));
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__));
extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__));



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__))
__attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__))
__attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__));
extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__));








extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__));
extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__));
# 146 "/usr/include/math.h" 2 3 4
# 161 "/usr/include/math.h" 3 4
extern int signgam;
# 202 "/usr/include/math.h" 3 4
enum
{
    FP_NAN,

    FP_INFINITE,

    FP_ZERO,

    FP_SUBNORMAL,

    FP_NORMAL

};
# 295 "/usr/include/math.h" 3 4
typedef enum
{
    _IEEE_ = -1,
    _SVID_,
    _XOPEN_,
    _POSIX_,
    _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 320 "/usr/include/math.h" 3 4
struct exception

{
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};




extern int matherr (struct exception *__exc);
# 476 "/usr/include/math.h" 3 4

# 34 "/usr/local/include/libavutil/common.h" 2 3
# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include/stddef.h" 3 4
typedef unsigned int size_t;
# 35 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 83 "/usr/include/wchar.h" 3 4
typedef struct
{
    int __count;
    union
    {

        unsigned int __wch;



        char __wchb[4];
    } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4

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
# 53 "/usr/include/_G_config.h" 3 4
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 170 "/usr/include/libio.h" 3 4
struct _IO_jump_t;
struct _IO_FILE;
# 180 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker
{
    struct _IO_marker *_next;
    struct _IO_FILE *_sbuf;



    int _pos;
# 203 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
    __codecvt_ok,
    __codecvt_partial,
    __codecvt_error,
    __codecvt_noconv
};
# 271 "/usr/include/libio.h" 3 4
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
# 319 "/usr/include/libio.h" 3 4
    __off64_t _offset;
# 328 "/usr/include/libio.h" 3 4
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
# 364 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
                                 size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 416 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 460 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__));
# 490 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
                        __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
                         __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__));
# 76 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 91 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 103 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;




# 161 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/stdio_lim.h" 1 3 4
# 162 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (__const char *__filename) __attribute__ ((__nothrow__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__));




extern int renameat (int __oldfd, __const char *__old, int __newfd,
                     __const char *__new) __attribute__ ((__nothrow__));








extern FILE *tmpfile (void) ;
# 206 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__)) ;
# 224 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
__attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 249 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 263 "/usr/include/stdio.h" 3 4






extern FILE *fopen (__const char *__restrict __filename,
                    __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
                      __const char *__restrict __modes,
                      FILE *__restrict __stream) ;
# 292 "/usr/include/stdio.h" 3 4

# 303 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__)) ;
# 316 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
__attribute__ ((__nothrow__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__)) ;






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

# 414 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, __const char *__restrict __fmt,
                     __gnuc_va_list __arg)
__attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
__attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
                   __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
                   __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
# 445 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

;
extern int scanf (__const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
;
extern int sscanf (__const char *__restrict __s, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__))

;
# 465 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
                    __gnuc_va_list __arg)
__attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
__attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
                    __const char *__restrict __format, __gnuc_va_list __arg)
__attribute__ ((__nothrow__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 496 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



__attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

__attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__))



__attribute__ ((__format__ (__scanf__, 2, 0)));
# 524 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 552 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 563 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 596 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
;






extern char *gets (char *__s) ;

# 658 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;








extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
                     size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
                      size_t __n, FILE *__restrict __s);

# 730 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
                              size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
                               size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 766 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 785 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 808 "/usr/include/stdio.h" 3 4

# 817 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;








extern void perror (__const char *__s);






# 1 "/usr/include/i386-linux-gnu/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/i386-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];
# 847 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
# 866 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
# 906 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__));
# 936 "/usr/include/stdio.h" 3 4

# 35 "/usr/local/include/libavutil/common.h" 2 3
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include/stddef.h" 1 3 4
# 324 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include/stddef.h" 3 4
typedef int wchar_t;
# 34 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/i386-linux-gnu/bits/waitflags.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/i386-linux-gnu/bits/waitstatus.h" 1 3 4
# 67 "/usr/include/i386-linux-gnu/bits/waitstatus.h" 3 4
union wait
{
    int w_status;
    struct
    {

        unsigned int __w_termsig:7;
        unsigned int __w_coredump:1;
        unsigned int __w_retcode:8;
        unsigned int:16;







    } __wait_terminated;
    struct
    {

        unsigned int __w_stopval:8;
        unsigned int __w_stopsig:8;
        unsigned int:16;






    } __wait_stopped;
};
# 44 "/usr/include/stdlib.h" 2 3 4
# 68 "/usr/include/stdlib.h" 3 4
typedef union
{
    union wait *__uptr;
    int *__iptr;
} __WAIT_STATUS __attribute__ ((__transparent_union__));
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







__extension__ typedef struct
{
    long long int quot;
    long long int rem;
} lldiv_t;


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





extern float strtof (__const char *__restrict __nptr,
                     char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern long double strtold (__const char *__restrict __nptr,
                            char **__restrict __endptr)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





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

# 311 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__)) ;


extern long int a64l (__const char *__s)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/i386-linux-gnu/sys/types.h" 1 3 4
# 28 "/usr/include/i386-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 61 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 99 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 116 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 58 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 74 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 92 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 104 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/i386-linux-gnu/sys/types.h" 2 3 4
# 147 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include/stddef.h" 1 3 4
# 148 "/usr/include/i386-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 201 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 220 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/i386-linux-gnu/sys/select.h" 1 3 4
# 31 "/usr/include/i386-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/select.h" 1 3 4
# 32 "/usr/include/i386-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/bits/sigset.h" 1 3 4
# 24 "/usr/include/i386-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
{
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 35 "/usr/include/i386-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
{
    __time_t tv_sec;
    long int tv_nsec;
};
# 45 "/usr/include/i386-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/i386-linux-gnu/bits/time.h" 1 3 4
# 75 "/usr/include/i386-linux-gnu/bits/time.h" 3 4
struct timeval
{
    __time_t tv_sec;
    __suseconds_t tv_usec;
};
# 47 "/usr/include/i386-linux-gnu/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 67 "/usr/include/i386-linux-gnu/sys/select.h" 3 4
typedef struct
{






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


} fd_set;






typedef __fd_mask fd_mask;
# 99 "/usr/include/i386-linux-gnu/sys/select.h" 3 4

# 109 "/usr/include/i386-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
                   fd_set *__restrict __writefds,
                   fd_set *__restrict __exceptfds,
                   struct timeval *__restrict __timeout);
# 121 "/usr/include/i386-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
                    fd_set *__restrict __writefds,
                    fd_set *__restrict __exceptfds,
                    const struct timespec *__restrict __timeout,
                    const __sigset_t *__restrict __sigmask);



# 221 "/usr/include/i386-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/sys/sysmacros.h" 1 3 4
# 30 "/usr/include/i386-linux-gnu/sys/sysmacros.h" 3 4
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
__attribute__ ((__nothrow__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
__attribute__ ((__nothrow__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
        unsigned int __minor)
__attribute__ ((__nothrow__));
# 224 "/usr/include/i386-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 271 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 36 "/usr/include/i386-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
    char __size[36];
    long int __align;
} pthread_attr_t;


typedef struct __pthread_internal_slist
{
    struct __pthread_internal_slist *__next;
} __pthread_slist_t;




typedef union
{
    struct __pthread_mutex_s
    {
        int __lock;
        unsigned int __count;
        int __owner;


        int __kind;
        unsigned int __nusers;
        __extension__ union
        {
            int __spins;
            __pthread_slist_t __list;
        };
    } __data;
    char __size[24];
    long int __align;
} pthread_mutex_t;

typedef union
{
    char __size[4];
    long int __align;
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
    long int __align;
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


        unsigned char __flags;
        unsigned char __shared;
        unsigned char __pad1;
        unsigned char __pad2;
        int __writer;
    } __data;
    char __size[32];
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
    char __size[20];
    long int __align;
} pthread_barrier_t;

typedef union
{
    char __size[4];
    int __align;
} pthread_barrierattr_t;
# 272 "/usr/include/i386-linux-gnu/sys/types.h" 2 3 4



# 321 "/usr/include/stdlib.h" 2 3 4






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
__attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__));



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__));






# 498 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 531 "/usr/include/stdlib.h" 3 4





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
# 554 "/usr/include/stdlib.h" 3 4






extern void _Exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__));
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 712 "/usr/include/stdlib.h" 3 4





extern int system (__const char *__command) ;

# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
                       char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);
# 752 "/usr/include/stdlib.h" 3 4



extern void *bsearch (__const void *__key, __const void *__base,
                      size_t __nmemb, size_t __size, __compar_fn_t __compar)
__attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
                   __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 771 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
__attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
__attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
__attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
                                    long long int __denom)
__attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;

# 808 "/usr/include/stdlib.h" 3 4
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
# 896 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
                      char *__const *__restrict __tokens,
                      char **__restrict __valuep)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 948 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 964 "/usr/include/stdlib.h" 3 4

# 36 "/usr/local/include/libavutil/common.h" 2 3
# 1 "/usr/include/string.h" 1 3 4
# 29 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include/stddef.h" 1 3 4
# 35 "/usr/include/string.h" 2 3 4









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
# 95 "/usr/include/string.h" 3 4
extern void *memchr (__const void *__s, int __c, size_t __n)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 126 "/usr/include/string.h" 3 4


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

# 165 "/usr/include/string.h" 3 4
extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
                         __locale_t __l) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (__const char *__s)
__attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (__const char *__string, size_t __n)
__attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 210 "/usr/include/string.h" 3 4

# 235 "/usr/include/string.h" 3 4
extern char *strchr (__const char *__s, int __c)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 262 "/usr/include/string.h" 3 4
extern char *strrchr (__const char *__s, int __c)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 281 "/usr/include/string.h" 3 4



extern size_t strcspn (__const char *__s, __const char *__reject)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 314 "/usr/include/string.h" 3 4
extern char *strpbrk (__const char *__s, __const char *__accept)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 342 "/usr/include/string.h" 3 4
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
# 397 "/usr/include/string.h" 3 4


extern size_t strlen (__const char *__s)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

# 427 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__))

__attribute__ ((__nonnull__ (2)));
# 445 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 489 "/usr/include/string.h" 3 4
extern char *index (__const char *__s, int __c)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 517 "/usr/include/string.h" 3 4
extern char *rindex (__const char *__s, int __c)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 536 "/usr/include/string.h" 3 4
extern int strcasecmp (__const char *__s1, __const char *__s2)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
__attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 559 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
                     __const char *__restrict __delim)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__));


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
                        __const char *__restrict __src, size_t __n)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
                      __const char *__restrict __src, size_t __n)
__attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 646 "/usr/include/string.h" 3 4

# 37 "/usr/local/include/libavutil/common.h" 2 3

# 1 "/usr/local/include/libavutil/attributes.h" 1 3
# 39 "/usr/local/include/libavutil/common.h" 2 3
# 1 "/usr/local/include/libavutil/version.h" 1 3
# 40 "/usr/local/include/libavutil/common.h" 2 3
# 1 "/usr/local/include/libavutil/avconfig.h" 1 3
# 41 "/usr/local/include/libavutil/common.h" 2 3
# 72 "/usr/local/include/libavutil/common.h" 3
extern __attribute__((deprecated)) const uint8_t av_reverse[256];
# 81 "/usr/local/include/libavutil/common.h" 3
# 1 "/usr/local/include/libavutil/common.h" 1 3
# 82 "/usr/local/include/libavutil/common.h" 2 3


__attribute__((const)) int av_log2(unsigned v);



__attribute__((const)) int av_log2_16bit(unsigned v);
# 98 "/usr/local/include/libavutil/common.h" 3
static __attribute__((always_inline)) inline __attribute__((const)) int av_clip_c(int a, int amin, int amax)
{



    if (a < amin) return amin;
    else if (a > amax) return amax;
    else return a;
}
# 115 "/usr/local/include/libavutil/common.h" 3
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
    if ((a+0x80000000u) & ~0xFFFFFFFFULL) return (a>>63) ^ 0x7FFFFFFF;
    else return (int32_t)a;
}







static __attribute__((always_inline)) inline __attribute__((const)) unsigned av_clip_uintp2_c(int a, int p)
{
    if (a & ~((1<<p) - 1)) return -a >> 31 & ((1<<p) - 1);
    else return a;
}
# 199 "/usr/local/include/libavutil/common.h" 3
static __attribute__((always_inline)) inline int av_sat_add32_c(int a, int b)
{
    return av_clipl_int32_c((int64_t)a + b);
}
# 211 "/usr/local/include/libavutil/common.h" 3
static __attribute__((always_inline)) inline int av_sat_dadd32_c(int a, int b)
{
    return av_sat_add32_c(a, av_sat_add32_c(b, b));
}
# 223 "/usr/local/include/libavutil/common.h" 3
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
# 383 "/usr/local/include/libavutil/common.h" 3
# 1 "/usr/local/include/libavutil/mem.h" 1 3
# 29 "/usr/local/include/libavutil/mem.h" 3
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include-fixed/limits.h" 1 3 4
# 30 "/usr/local/include/libavutil/mem.h" 2 3



# 1 "/usr/local/include/libavutil/error.h" 1 3
# 27 "/usr/local/include/libavutil/error.h" 3
# 1 "/usr/include/errno.h" 1 3 4
# 28 "/usr/local/include/libavutil/error.h" 2 3
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include/stddef.h" 1 3 4
# 150 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 29 "/usr/local/include/libavutil/error.h" 2 3
# 88 "/usr/local/include/libavutil/error.h" 3
int av_strerror(int errnum, char *errbuf, size_t errbuf_size);
# 100 "/usr/local/include/libavutil/error.h" 3
static inline char *av_make_error_string(char *errbuf, size_t errbuf_size, int errnum)
{
    av_strerror(errnum, errbuf, errbuf_size);
    return errbuf;
}
# 34 "/usr/local/include/libavutil/mem.h" 2 3
# 1 "/usr/local/include/libavutil/avutil.h" 1 3
# 35 "/usr/local/include/libavutil/mem.h" 2 3
# 83 "/usr/local/include/libavutil/mem.h" 3
void *av_malloc(size_t size) __attribute__((__malloc__)) __attribute__((alloc_size(1)));
# 94 "/usr/local/include/libavutil/mem.h" 3
__attribute__((alloc_size(1, 2))) static inline void *av_malloc_array(size_t nmemb, size_t size)
{
    if (size <= 0 || nmemb >= 2147483647 / size)
        return ((void *)0);
    return av_malloc(nmemb * size);
}
# 113 "/usr/local/include/libavutil/mem.h" 3
void *av_realloc(void *ptr, size_t size) __attribute__((alloc_size(2)));
# 123 "/usr/local/include/libavutil/mem.h" 3
void *av_realloc_f(void *ptr, size_t nelem, size_t elsize);
# 133 "/usr/local/include/libavutil/mem.h" 3
void av_free(void *ptr);
# 143 "/usr/local/include/libavutil/mem.h" 3
void *av_mallocz(size_t size) __attribute__((__malloc__)) __attribute__((alloc_size(1)));
# 155 "/usr/local/include/libavutil/mem.h" 3
void *av_calloc(size_t nmemb, size_t size) __attribute__((__malloc__));
# 167 "/usr/local/include/libavutil/mem.h" 3
__attribute__((alloc_size(1, 2))) static inline void *av_mallocz_array(size_t nmemb, size_t size)
{
    if (size <= 0 || nmemb >= 2147483647 / size)
        return ((void *)0);
    return av_mallocz(nmemb * size);
}







char *av_strdup(const char *s) __attribute__((__malloc__));
# 189 "/usr/local/include/libavutil/mem.h" 3
void av_freep(void *ptr);
# 198 "/usr/local/include/libavutil/mem.h" 3
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
# 229 "/usr/local/include/libavutil/mem.h" 3
void av_memcpy_backptr(uint8_t *dst, int back, int cnt);
# 384 "/usr/local/include/libavutil/common.h" 2 3
# 239 "/usr/local/include/libavutil/avutil.h" 2 3


# 1 "/usr/local/include/libavutil/mathematics.h" 1 3
# 27 "/usr/local/include/libavutil/mathematics.h" 3
# 1 "/usr/local/include/libavutil/rational.h" 1 3
# 32 "/usr/local/include/libavutil/rational.h" 3
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include-fixed/limits.h" 1 3 4
# 33 "/usr/local/include/libavutil/rational.h" 2 3
# 43 "/usr/local/include/libavutil/rational.h" 3
typedef struct AVRational
{
    int num;
    int den;
} AVRational;
# 55 "/usr/local/include/libavutil/rational.h" 3
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
# 83 "/usr/local/include/libavutil/rational.h" 3
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
# 136 "/usr/local/include/libavutil/rational.h" 3
AVRational av_d2q(double d, int max) __attribute__((const));





int av_nearer_q(AVRational q, AVRational q1, AVRational q2);






int av_find_nearest_q_idx(AVRational q, const AVRational* q_list);
# 28 "/usr/local/include/libavutil/mathematics.h" 2 3
# 1 "/usr/local/include/libavutil/intfloat.h" 1 3
# 27 "/usr/local/include/libavutil/intfloat.h" 3
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
# 29 "/usr/local/include/libavutil/mathematics.h" 2 3
# 67 "/usr/local/include/libavutil/mathematics.h" 3
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
# 96 "/usr/local/include/libavutil/mathematics.h" 3
int64_t av_rescale_rnd(int64_t a, int64_t b, int64_t c, enum AVRounding) __attribute__((const));




int64_t av_rescale_q(int64_t a, AVRational bq, AVRational cq) __attribute__((const));







int64_t av_rescale_q_rnd(int64_t a, AVRational bq, AVRational cq,
                         enum AVRounding) __attribute__((const));







int av_compare_ts(int64_t ts_a, AVRational tb_a, int64_t ts_b, AVRational tb_b);
# 130 "/usr/local/include/libavutil/mathematics.h" 3
int64_t av_compare_mod(uint64_t a, uint64_t b, uint64_t mod);
# 141 "/usr/local/include/libavutil/mathematics.h" 3
int64_t av_rescale_delta(AVRational in_tb, int64_t in_ts, AVRational fs_tb, int duration, int64_t *last, AVRational out_tb);
# 242 "/usr/local/include/libavutil/avutil.h" 2 3

# 1 "/usr/local/include/libavutil/intfloat_readwrite.h" 1 3
# 28 "/usr/local/include/libavutil/intfloat_readwrite.h" 3
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
# 244 "/usr/local/include/libavutil/avutil.h" 2 3
# 1 "/usr/local/include/libavutil/log.h" 1 3
# 24 "/usr/local/include/libavutil/log.h" 3
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6.1/include/stdarg.h" 1 3 4
# 25 "/usr/local/include/libavutil/log.h" 2 3



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
# 91 "/usr/local/include/libavutil/log.h" 3
    int parent_log_context_offset;




    void* (*child_next)(void *obj, void *prev);
# 106 "/usr/local/include/libavutil/log.h" 3
    const struct AVClass* (*child_class_next)(const struct AVClass *prev);






    AVClassCategory category;





    AVClassCategory (*get_category)(void* ctx);





    int (*query_ranges)(struct AVOptionRanges **, void *obj, const char *key, int flags);
} AVClass;
# 180 "/usr/local/include/libavutil/log.h" 3
void av_log(void *avcl, int level, const char *fmt, ...) __attribute__((__format__(__printf__, 3, 4)));

void av_vlog(void *avcl, int level, const char *fmt, va_list);
int av_log_get_level(void);
void av_log_set_level(int);
void av_log_set_callback(void (*)(void*, int, const char*, va_list));
void av_log_default_callback(void* ptr, int level, const char* fmt, va_list vl);
const char* av_default_item_name(void* ctx);
AVClassCategory av_default_get_category(void *ptr);
# 197 "/usr/local/include/libavutil/log.h" 3
void av_log_format_line(void *ptr, int level, const char *fmt, va_list vl,
                        char *line, int line_size, int *print_prefix);
# 220 "/usr/local/include/libavutil/log.h" 3
void av_log_set_flags(int arg);
# 245 "/usr/local/include/libavutil/avutil.h" 2 3
# 1 "/usr/local/include/libavutil/pixfmt.h" 1 3
# 31 "/usr/local/include/libavutil/pixfmt.h" 3
# 1 "/usr/local/include/libavutil/version.h" 1 3
# 32 "/usr/local/include/libavutil/pixfmt.h" 2 3
# 66 "/usr/local/include/libavutil/pixfmt.h" 3
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


# 1 "/usr/local/include/libavutil/old_pix_fmts.h" 1 3
# 31 "/usr/local/include/libavutil/old_pix_fmts.h" 3
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
# 237 "/usr/local/include/libavutil/pixfmt.h" 2 3

};
# 246 "/usr/local/include/libavutil/avutil.h" 2 3




static inline void *av_x_if_null(const void *p, const void *x)
{
    return (void *)(intptr_t)(p ? p : x);
}
# 31 "/usr/local/include/libavutil/imgutils.h" 2 3
# 1 "/usr/local/include/libavutil/pixdesc.h" 1 3
# 28 "/usr/local/include/libavutil/pixdesc.h" 3
typedef struct AVComponentDescriptor
{
    uint16_t plane :2;





    uint16_t step_minus1 :3;





    uint16_t offset_plus1 :3;
    uint16_t shift :3;
    uint16_t depth_minus1 :4;
} AVComponentDescriptor;
# 55 "/usr/local/include/libavutil/pixdesc.h" 3
typedef struct AVPixFmtDescriptor
{
    const char *name;
    uint8_t nb_components;
# 66 "/usr/local/include/libavutil/pixdesc.h" 3
    uint8_t log2_chroma_w;
# 75 "/usr/local/include/libavutil/pixdesc.h" 3
    uint8_t log2_chroma_h;
    uint8_t flags;
# 86 "/usr/local/include/libavutil/pixdesc.h" 3
    AVComponentDescriptor comp[4];
} AVPixFmtDescriptor;
# 109 "/usr/local/include/libavutil/pixdesc.h" 3
extern const AVPixFmtDescriptor av_pix_fmt_descriptors[];
# 128 "/usr/local/include/libavutil/pixdesc.h" 3
void av_read_image_line(uint16_t *dst, const uint8_t *data[4], const int linesize[4],
                        const AVPixFmtDescriptor *desc, int x, int y, int c, int w, int read_pal_component);
# 145 "/usr/local/include/libavutil/pixdesc.h" 3
void av_write_image_line(const uint16_t *src, uint8_t *data[4], const int linesize[4],
                         const AVPixFmtDescriptor *desc, int x, int y, int c, int w);
# 159 "/usr/local/include/libavutil/pixdesc.h" 3
enum AVPixelFormat av_get_pix_fmt(const char *name);







const char *av_get_pix_fmt_name(enum AVPixelFormat pix_fmt);
# 179 "/usr/local/include/libavutil/pixdesc.h" 3
char *av_get_pix_fmt_string (char *buf, int buf_size, enum AVPixelFormat pix_fmt);
# 189 "/usr/local/include/libavutil/pixdesc.h" 3
int av_get_bits_per_pixel(const AVPixFmtDescriptor *pixdesc);





int av_get_padded_bits_per_pixel(const AVPixFmtDescriptor *pixdesc);





const AVPixFmtDescriptor *av_pix_fmt_desc_get(enum AVPixelFormat pix_fmt);
# 210 "/usr/local/include/libavutil/pixdesc.h" 3
const AVPixFmtDescriptor *av_pix_fmt_desc_next(const AVPixFmtDescriptor *prev);





enum AVPixelFormat av_pix_fmt_desc_get_id(const AVPixFmtDescriptor *desc);
# 233 "/usr/local/include/libavutil/pixdesc.h" 3
int av_pix_fmt_get_chroma_sub_sample(enum AVPixelFormat pix_fmt,
                                     int *h_shift, int *v_shift);
# 32 "/usr/local/include/libavutil/imgutils.h" 2 3
# 49 "/usr/local/include/libavutil/imgutils.h" 3
void av_image_fill_max_pixsteps(int max_pixsteps[4], int max_pixstep_comps[4],
                                const AVPixFmtDescriptor *pixdesc);







int av_image_get_linesize(enum AVPixelFormat pix_fmt, int width, int plane);
# 67 "/usr/local/include/libavutil/imgutils.h" 3
int av_image_fill_linesizes(int linesizes[4], enum AVPixelFormat pix_fmt, int width);
# 80 "/usr/local/include/libavutil/imgutils.h" 3
int av_image_fill_pointers(uint8_t *data[4], enum AVPixelFormat pix_fmt, int height,
                           uint8_t *ptr, const int linesizes[4]);
# 93 "/usr/local/include/libavutil/imgutils.h" 3
int av_image_alloc(uint8_t *pointers[4], int linesizes[4],
                   int w, int h, enum AVPixelFormat pix_fmt, int align);
# 108 "/usr/local/include/libavutil/imgutils.h" 3
void av_image_copy_plane(uint8_t *dst, int dst_linesize,
                         const uint8_t *src, int src_linesize,
                         int bytewidth, int height);







void av_image_copy(uint8_t *dst_data[4], int dst_linesizes[4],
                   const uint8_t *src_data[4], const int src_linesizes[4],
                   enum AVPixelFormat pix_fmt, int width, int height);
# 148 "/usr/local/include/libavutil/imgutils.h" 3
int av_image_fill_arrays(uint8_t *dst_data[4], int dst_linesize[4],
                         const uint8_t *src,
                         enum AVPixelFormat pix_fmt, int width, int height, int align);







int av_image_get_buffer_size(enum AVPixelFormat pix_fmt, int width, int height, int align);
# 177 "/usr/local/include/libavutil/imgutils.h" 3
int av_image_copy_to_buffer(uint8_t *dst, int dst_size,
                            const uint8_t * const src_data[4], const int src_linesize[4],
                            enum AVPixelFormat pix_fmt, int width, int height, int align);
# 191 "/usr/local/include/libavutil/imgutils.h" 3
int av_image_check_size(unsigned int w, unsigned int h, int log_offset, void *log_ctx);

int avpriv_set_systematic_pal2(uint32_t pal[256], enum AVPixelFormat pix_fmt);
# 34 "mjpegdec.c" 2
# 1 "/usr/local/include/libavutil/avassert.h" 1 3
# 35 "mjpegdec.c" 2
# 1 "/usr/local/include/libavutil/opt.h" 1 3
# 32 "/usr/local/include/libavutil/opt.h" 3
# 1 "/usr/local/include/libavutil/dict.h" 1 3
# 77 "/usr/local/include/libavutil/dict.h" 3
typedef struct AVDictionaryEntry
{
    char *key;
    char *value;
} AVDictionaryEntry;

typedef struct AVDictionary AVDictionary;
# 92 "/usr/local/include/libavutil/dict.h" 3
AVDictionaryEntry *
av_dict_get(AVDictionary *m, const char *key, const AVDictionaryEntry *prev, int flags);







int av_dict_count(const AVDictionary *m);
# 113 "/usr/local/include/libavutil/dict.h" 3
int av_dict_set(AVDictionary **pm, const char *key, const char *value, int flags);
# 123 "/usr/local/include/libavutil/dict.h" 3
void av_dict_copy(AVDictionary **dst, AVDictionary *src, int flags);





void av_dict_free(AVDictionary **m);
# 33 "/usr/local/include/libavutil/opt.h" 2 3


# 1 "/usr/local/include/libavutil/samplefmt.h" 1 3
# 49 "/usr/local/include/libavutil/samplefmt.h" 3
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
# 95 "/usr/local/include/libavutil/samplefmt.h" 3
enum AVSampleFormat av_get_packed_sample_fmt(enum AVSampleFormat sample_fmt);
# 106 "/usr/local/include/libavutil/samplefmt.h" 3
enum AVSampleFormat av_get_planar_sample_fmt(enum AVSampleFormat sample_fmt);
# 120 "/usr/local/include/libavutil/samplefmt.h" 3
char *av_get_sample_fmt_string(char *buf, int buf_size, enum AVSampleFormat sample_fmt);





__attribute__((deprecated))
int av_get_bits_per_sample_fmt(enum AVSampleFormat sample_fmt);
# 137 "/usr/local/include/libavutil/samplefmt.h" 3
int av_get_bytes_per_sample(enum AVSampleFormat sample_fmt);







int av_sample_fmt_is_planar(enum AVSampleFormat sample_fmt);
# 157 "/usr/local/include/libavutil/samplefmt.h" 3
int av_samples_get_buffer_size(int *linesize, int nb_channels, int nb_samples,
                               enum AVSampleFormat sample_fmt, int align);
# 190 "/usr/local/include/libavutil/samplefmt.h" 3
int av_samples_fill_arrays(uint8_t **audio_data, int *linesize,
                           const uint8_t *buf,
                           int nb_channels, int nb_samples,
                           enum AVSampleFormat sample_fmt, int align);
# 213 "/usr/local/include/libavutil/samplefmt.h" 3
int av_samples_alloc(uint8_t **audio_data, int *linesize, int nb_channels,
                     int nb_samples, enum AVSampleFormat sample_fmt, int align);
# 227 "/usr/local/include/libavutil/samplefmt.h" 3
int av_samples_copy(uint8_t **dst, uint8_t * const *src, int dst_offset,
                    int src_offset, int nb_samples, int nb_channels,
                    enum AVSampleFormat sample_fmt);
# 240 "/usr/local/include/libavutil/samplefmt.h" 3
int av_samples_set_silence(uint8_t **audio_data, int offset, int nb_samples,
                           int nb_channels, enum AVSampleFormat sample_fmt);
# 36 "/usr/local/include/libavutil/opt.h" 2 3
# 220 "/usr/local/include/libavutil/opt.h" 3
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
# 293 "/usr/local/include/libavutil/opt.h" 3
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
# 330 "/usr/local/include/libavutil/opt.h" 3
__attribute__((deprecated))
const AVOption *av_find_opt(void *obj, const char *name, const char *unit, int mask, int flags);
# 361 "/usr/local/include/libavutil/opt.h" 3
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
# 384 "/usr/local/include/libavutil/opt.h" 3
int av_opt_show2(void *obj, void *av_log_obj, int req_flags, int rej_flags);






void av_opt_set_defaults(void *s);


__attribute__((deprecated))
void av_opt_set_defaults2(void *s, int mask, int flags);
# 415 "/usr/local/include/libavutil/opt.h" 3
int av_set_options_string(void *ctx, const char *opts,
                          const char *key_val_sep, const char *pairs_sep);
# 445 "/usr/local/include/libavutil/opt.h" 3
int av_opt_set_from_string(void *ctx, const char *opts,
                           const char *const *shorthand,
                           const char *key_val_sep, const char *pairs_sep);



void av_opt_free(void *obj);
# 461 "/usr/local/include/libavutil/opt.h" 3
int av_opt_flag_is_set(void *obj, const char *field_name, const char *flag_name);
# 477 "/usr/local/include/libavutil/opt.h" 3
int av_opt_set_dict(void *obj, struct AVDictionary **options);
# 498 "/usr/local/include/libavutil/opt.h" 3
int av_opt_get_key_value(const char **ropts,
                         const char *key_val_sep, const char *pairs_sep,
                         unsigned flags,
                         char **rkey, char **rval);

enum
{





    AV_OPT_FLAG_IMPLICIT_KEY = 1,
};
# 526 "/usr/local/include/libavutil/opt.h" 3
int av_opt_eval_flags (void *obj, const AVOption *o, const char *val, int *flags_out);
int av_opt_eval_int (void *obj, const AVOption *o, const char *val, int *int_out);
int av_opt_eval_int64 (void *obj, const AVOption *o, const char *val, int64_t *int64_out);
int av_opt_eval_float (void *obj, const AVOption *o, const char *val, float *float_out);
int av_opt_eval_double(void *obj, const AVOption *o, const char *val, double *double_out);
int av_opt_eval_q (void *obj, const AVOption *o, const char *val, AVRational *q_out);
# 568 "/usr/local/include/libavutil/opt.h" 3
const AVOption *av_opt_find(void *obj, const char *name, const char *unit,
                            int opt_flags, int search_flags);
# 592 "/usr/local/include/libavutil/opt.h" 3
const AVOption *av_opt_find2(void *obj, const char *name, const char *unit,
                             int opt_flags, int search_flags, void **target_obj);
# 604 "/usr/local/include/libavutil/opt.h" 3
const AVOption *av_opt_next(void *obj, const AVOption *prev);







void *av_opt_child_next(void *obj, void *prev);







const AVClass *av_opt_child_class_next(const AVClass *parent, const AVClass *prev);
# 648 "/usr/local/include/libavutil/opt.h" 3
int av_opt_set (void *obj, const char *name, const char *val, int search_flags);
int av_opt_set_int (void *obj, const char *name, int64_t val, int search_flags);
int av_opt_set_double(void *obj, const char *name, double val, int search_flags);
int av_opt_set_q (void *obj, const char *name, AVRational val, int search_flags);
int av_opt_set_bin (void *obj, const char *name, const uint8_t *val, int size, int search_flags);
int av_opt_set_image_size(void *obj, const char *name, int w, int h, int search_flags);
int av_opt_set_pixel_fmt (void *obj, const char *name, enum AVPixelFormat fmt, int search_flags);
int av_opt_set_sample_fmt(void *obj, const char *name, enum AVSampleFormat fmt, int search_flags);
# 675 "/usr/local/include/libavutil/opt.h" 3
int av_opt_get (void *obj, const char *name, int search_flags, uint8_t **out_val);
int av_opt_get_int (void *obj, const char *name, int search_flags, int64_t *out_val);
int av_opt_get_double(void *obj, const char *name, int search_flags, double *out_val);
int av_opt_get_q (void *obj, const char *name, int search_flags, AVRational *out_val);
int av_opt_get_image_size(void *obj, const char *name, int search_flags, int *w_out, int *h_out);
int av_opt_get_pixel_fmt (void *obj, const char *name, int search_flags, enum AVPixelFormat *out_fmt);
int av_opt_get_sample_fmt(void *obj, const char *name, int search_flags, enum AVSampleFormat *out_fmt);
# 693 "/usr/local/include/libavutil/opt.h" 3
void *av_opt_ptr(const AVClass *avclass, void *obj, const char *name);




void av_opt_freep_ranges(AVOptionRanges **ranges);
# 712 "/usr/local/include/libavutil/opt.h" 3
int av_opt_query_ranges(AVOptionRanges **, void *obj, const char *key, int flags);
# 727 "/usr/local/include/libavutil/opt.h" 3
int av_opt_query_ranges_default(AVOptionRanges **, void *obj, const char *key, int flags);
# 36 "mjpegdec.c" 2
# 1 "avcodec.h" 1
# 29 "avcodec.h"
# 1 "/usr/include/errno.h" 1 3 4
# 30 "avcodec.h" 2
# 1 "/usr/local/include/libavutil/samplefmt.h" 1 3
# 31 "avcodec.h" 2
# 1 "/usr/local/include/libavutil/avutil.h" 1 3
# 32 "avcodec.h" 2
# 1 "/usr/local/include/libavutil/cpu.h" 1 3
# 67 "/usr/local/include/libavutil/cpu.h" 3
int av_get_cpu_flags(void);





void av_force_cpu_flags(int flags);
# 82 "/usr/local/include/libavutil/cpu.h" 3
__attribute__((deprecated)) void av_set_cpu_flags_mask(int mask);
# 93 "/usr/local/include/libavutil/cpu.h" 3
__attribute__((deprecated))
int av_parse_cpu_flags(const char *s);






int av_parse_cpu_caps(unsigned *flags, const char *s);


int ff_get_cpu_flags_arm(void);
int ff_get_cpu_flags_ppc(void);
int ff_get_cpu_flags_x86(void);
# 33 "avcodec.h" 2
# 1 "/usr/local/include/libavutil/channel_layout.h" 1 3
# 113 "/usr/local/include/libavutil/channel_layout.h" 3
enum AVMatrixEncoding
{
    AV_MATRIX_ENCODING_NONE,
    AV_MATRIX_ENCODING_DOLBY,
    AV_MATRIX_ENCODING_DPLII,
    AV_MATRIX_ENCODING_NB
};
# 141 "/usr/local/include/libavutil/channel_layout.h" 3
uint64_t av_get_channel_layout(const char *name);
# 150 "/usr/local/include/libavutil/channel_layout.h" 3
void av_get_channel_layout_string(char *buf, int buf_size, int nb_channels, uint64_t channel_layout);

struct AVBPrint;



void av_bprint_channel_layout(struct AVBPrint *bp, int nb_channels, uint64_t channel_layout);




int av_get_channel_layout_nb_channels(uint64_t channel_layout);




int64_t av_get_default_channel_layout(int nb_channels);
# 177 "/usr/local/include/libavutil/channel_layout.h" 3
int av_get_channel_layout_channel_index(uint64_t channel_layout,
                                        uint64_t channel);




uint64_t av_channel_layout_extract_channel(uint64_t channel_layout, int index);






const char *av_get_channel_name(uint64_t channel);







const char *av_get_channel_description(uint64_t channel);
# 209 "/usr/local/include/libavutil/channel_layout.h" 3
int av_get_standard_channel_layout(unsigned index, uint64_t *layout,
                                   const char **name);
# 34 "avcodec.h" 2
# 1 "/usr/local/include/libavutil/dict.h" 1 3
# 35 "avcodec.h" 2
# 1 "/usr/local/include/libavutil/log.h" 1 3
# 36 "avcodec.h" 2
# 1 "/usr/local/include/libavutil/pixfmt.h" 1 3
# 37 "avcodec.h" 2
# 1 "/usr/local/include/libavutil/rational.h" 1 3
# 38 "avcodec.h" 2

# 1 "/usr/local/include/libavcodec/version.h" 1 3
# 40 "avcodec.h" 2
# 97 "avcodec.h"
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


# 1 "old_codec_ids.h" 1
# 22 "old_codec_ids.h"
# 1 "/usr/local/include/libavutil/common.h" 1 3
# 23 "old_codec_ids.h" 2
# 32 "old_codec_ids.h"
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
# 494 "avcodec.h" 2

};
# 506 "avcodec.h"
typedef struct AVCodecDescriptor
{
    enum AVCodecID id;
    enum AVMediaType type;





    const char *name;



    const char *long_name;



    int props;
} AVCodecDescriptor;
# 568 "avcodec.h"
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
# 857 "avcodec.h"
typedef struct AVPanScan
{





    int id;






    int width;
    int height;






    int16_t position[3][2];
} AVPanScan;
# 902 "avcodec.h"
enum AVPacketSideDataType
{
    AV_PKT_DATA_PALETTE,
    AV_PKT_DATA_NEW_EXTRADATA,
# 921 "avcodec.h"
    AV_PKT_DATA_PARAM_CHANGE,
# 942 "avcodec.h"
    AV_PKT_DATA_H263_MB_INFO,
# 953 "avcodec.h"
    AV_PKT_DATA_SKIP_SAMPLES=70,
# 963 "avcodec.h"
    AV_PKT_DATA_JP_DUALMONO,





    AV_PKT_DATA_STRINGS_METADATA,
# 980 "avcodec.h"
    AV_PKT_DATA_SUBTITLE_POSITION,
};
# 1005 "avcodec.h"
typedef struct AVPacket
{
# 1015 "avcodec.h"
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
# 1066 "avcodec.h"
    int64_t convergence_duration;
} AVPacket;



enum AVSideDataParamChangeFlags
{
    AV_SIDE_DATA_PARAM_CHANGE_CHANNEL_COUNT = 0x0001,
    AV_SIDE_DATA_PARAM_CHANGE_CHANNEL_LAYOUT = 0x0002,
    AV_SIDE_DATA_PARAM_CHANGE_SAMPLE_RATE = 0x0004,
    AV_SIDE_DATA_PARAM_CHANGE_DIMENSIONS = 0x0008,
};
# 1099 "avcodec.h"
typedef struct AVFrame
{







    uint8_t *data[8];
# 1118 "avcodec.h"
    int linesize[8];
# 1138 "avcodec.h"
    uint8_t **extended_data;






    int width, height;






    int nb_samples;
# 1161 "avcodec.h"
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
# 1242 "avcodec.h"
    int reference;






    int8_t *qscale_table;





    int qstride;




    int qscale_type;







    uint8_t *mbskip_table;
# 1282 "avcodec.h"
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
# 1383 "avcodec.h"
    int64_t reordered_opaque;






    void *hwaccel_picture_private;






    struct AVCodecContext *owner;






    void *thread_opaque;







    uint8_t motion_subsample_log2;







    int sample_rate;







    uint64_t channel_layout;
# 1437 "avcodec.h"
    int64_t best_effort_timestamp;
# 1446 "avcodec.h"
    int64_t pkt_pos;
# 1456 "avcodec.h"
    int64_t pkt_duration;
# 1465 "avcodec.h"
    AVDictionary *metadata;
# 1476 "avcodec.h"
    int decode_error_flags;
# 1487 "avcodec.h"
    int64_t channels;
# 1497 "avcodec.h"
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
# 1544 "avcodec.h"
typedef struct AVCodecContext
{




    const AVClass *av_class;
    int log_level_offset;

    enum AVMediaType codec_type;
    const struct AVCodec *codec;
    char codec_name[32];
    enum AVCodecID codec_id;
# 1570 "avcodec.h"
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
# 1659 "avcodec.h"
    uint8_t *extradata;
    int extradata_size;
# 1670 "avcodec.h"
    AVRational time_base;
# 1679 "avcodec.h"
    int ticks_per_frame;
# 1707 "avcodec.h"
    int delay;
# 1718 "avcodec.h"
    int width, height;






    int coded_width, coded_height;
# 1734 "avcodec.h"
    int gop_size;
# 1743 "avcodec.h"
    enum AVPixelFormat pix_fmt;
# 1752 "avcodec.h"
    int me_method;
# 1777 "avcodec.h"
    void (*draw_horiz_band)(struct AVCodecContext *s,
                            const AVFrame *src, int offset[8],
                            int y, int type, int height);
# 1790 "avcodec.h"
    enum AVPixelFormat (*get_format)(struct AVCodecContext *s, const enum AVPixelFormat * fmt);







    int max_b_frames;
# 1807 "avcodec.h"
    float b_quant_factor;


    int rc_strategy;


    int b_frame_strategy;







    __attribute__((deprecated)) int luma_elim_threshold;






    __attribute__((deprecated)) int chroma_elim_threshold;







    float b_quant_offset;







    int has_b_frames;






    int mpeg_quant;
# 1860 "avcodec.h"
    float i_quant_factor;






    float i_quant_offset;






    float lumi_masking;






    float temporal_cplx_masking;






    float spatial_cplx_masking;






    float p_masking;






    float dark_masking;






    int slice_count;





    int prediction_method;
# 1925 "avcodec.h"
    int *slice_offset;
# 1934 "avcodec.h"
    AVRational sample_aspect_ratio;






    int me_cmp;





    int me_sub_cmp;





    int mb_cmp;





    int ildct_cmp;
# 1982 "avcodec.h"
    int dia_size;






    int last_predictor_count;






    int pre_me;






    int me_pre_cmp;






    int pre_dia_size;






    int me_subpel_quality;
# 2027 "avcodec.h"
    int dtg_active_format;
# 2043 "avcodec.h"
    int me_range;






    int intra_quant_bias;







    int inter_quant_bias;
# 2067 "avcodec.h"
    __attribute__((deprecated)) int color_table_id;







    int slice_flags;
# 2085 "avcodec.h"
    int xvmc_acceleration;






    int mb_decision;
# 2102 "avcodec.h"
    uint16_t *intra_matrix;






    uint16_t *inter_matrix;







    int scenechange_threshold;






    int noise_reduction;





    __attribute__((deprecated)) int inter_threshold;






    __attribute__((deprecated)) int quantizer_noise_shaping;
# 2147 "avcodec.h"
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
# 2305 "avcodec.h"
    int slices;





    enum AVFieldOrder field_order;


    int sample_rate;
    int channels;






    enum AVSampleFormat sample_fmt;
# 2334 "avcodec.h"
    int frame_size;
# 2345 "avcodec.h"
    int frame_number;





    int block_align;






    int cutoff;
# 2367 "avcodec.h"
    int request_channels;







    uint64_t channel_layout;






    uint64_t request_channel_layout;






    enum AVAudioServiceType audio_service_type;







    enum AVSampleFormat request_sample_fmt;
# 2459 "avcodec.h"
    int (*get_buffer)(struct AVCodecContext *c, AVFrame *pic);
# 2470 "avcodec.h"
    void (*release_buffer)(struct AVCodecContext *c, AVFrame *pic);
# 2484 "avcodec.h"
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
# 2599 "avcodec.h"
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
# 2758 "avcodec.h"
    int strict_std_compliance;
# 2770 "avcodec.h"
    int error_concealment;
# 2779 "avcodec.h"
    int debug;
# 2803 "avcodec.h"
    int debug_mv;
# 2813 "avcodec.h"
    int err_recognition;
# 2831 "avcodec.h"
    int64_t reordered_opaque;






    struct AVHWAccel *hwaccel;
# 2850 "avcodec.h"
    void *hwaccel_context;






    uint64_t error[8];






    int dct_algo;
# 2877 "avcodec.h"
    int idct_algo;
# 2910 "avcodec.h"
    __attribute__((deprecated)) unsigned dsp_mask;







    int bits_per_coded_sample;






    int bits_per_raw_sample;






    int lowres;






    AVFrame *coded_frame;







    int thread_count;
# 2957 "avcodec.h"
    int thread_type;
# 2966 "avcodec.h"
    int active_thread_type;
# 2976 "avcodec.h"
    int thread_safe_callbacks;
# 2987 "avcodec.h"
    int (*execute)(struct AVCodecContext *c, int (*func)(struct AVCodecContext *c2, void *arg), void *arg2, int *ret, int count, int size);
# 3007 "avcodec.h"
    int (*execute2)(struct AVCodecContext *c, int (*func)(struct AVCodecContext *c2, void *arg, int jobnr, int threadnr), void *arg2, int *ret, int count);







    void *thread_opaque;






    int nsse_weight;






    int profile;
# 3099 "avcodec.h"
    int level;







    enum AVDiscard skip_loop_filter;






    enum AVDiscard skip_idct;






    enum AVDiscard skip_frame;
# 3131 "avcodec.h"
    uint8_t *subtitle_header;
    int subtitle_header_size;






    int error_rate;
# 3148 "avcodec.h"
    AVPacket *pkt;







    uint64_t vbv_delay;
# 3165 "avcodec.h"
    AVRational pkt_timebase;
# 3174 "avcodec.h"
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
# 3251 "avcodec.h"
    int priv_data_size;
    struct AVCodec *next;
# 3262 "avcodec.h"
    int (*init_thread_copy)(AVCodecContext *);







    int (*update_thread_context)(AVCodecContext *dst, const AVCodecContext *src);





    const AVCodecDefault *defaults;




    void (*init_static_data)(struct AVCodec *codec);

    int (*init)(AVCodecContext *);
    int (*encode_sub)(AVCodecContext *, uint8_t *buf, int buf_size,
                      const struct AVSubtitle *sub);
# 3296 "avcodec.h"
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
# 3361 "avcodec.h"
    int (*start_frame)(AVCodecContext *avctx, const uint8_t *buf, uint32_t buf_size);
# 3374 "avcodec.h"
    int (*decode_slice)(AVCodecContext *avctx, const uint8_t *buf, uint32_t buf_size);
# 3385 "avcodec.h"
    int (*end_frame)(AVCodecContext *avctx);
# 3394 "avcodec.h"
    int priv_data_size;
} AVHWAccel;
# 3408 "avcodec.h"
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
# 3502 "avcodec.h"
void avcodec_register(AVCodec *codec);
# 3514 "avcodec.h"
void avcodec_register_all(void);
# 3527 "avcodec.h"
__attribute__((deprecated))
AVCodecContext *avcodec_alloc_context(void);



__attribute__((deprecated))
AVCodecContext *avcodec_alloc_context2(enum AVMediaType);







__attribute__((deprecated))
void avcodec_get_context_defaults(AVCodecContext *s);



__attribute__((deprecated))
void avcodec_get_context_defaults2(AVCodecContext *s, enum AVMediaType);
# 3565 "avcodec.h"
AVCodecContext *avcodec_alloc_context3(const AVCodec *codec);
# 3576 "avcodec.h"
int avcodec_get_context_defaults3(AVCodecContext *s, const AVCodec *codec);







const AVClass *avcodec_get_class(void);







const AVClass *avcodec_get_frame_class(void);







const AVClass *avcodec_get_subtitle_rect_class(void);
# 3613 "avcodec.h"
int avcodec_copy_context(AVCodecContext *dest, const AVCodecContext *src);
# 3622 "avcodec.h"
AVFrame *avcodec_alloc_frame(void);






void avcodec_get_frame_defaults(AVFrame *frame);
# 3641 "avcodec.h"
void avcodec_free_frame(AVFrame **frame);
# 3673 "avcodec.h"
__attribute__((deprecated))
int avcodec_open(AVCodecContext *avctx, AVCodec *codec);
# 3713 "avcodec.h"
int avcodec_open2(AVCodecContext *avctx, const AVCodec *codec, AVDictionary **options);
# 3724 "avcodec.h"
int avcodec_close(AVCodecContext *avctx);






void avsubtitle_free(AVSubtitle *sub);
# 3745 "avcodec.h"
void av_destruct_packet(AVPacket *pkt);
# 3755 "avcodec.h"
void av_init_packet(AVPacket *pkt);
# 3765 "avcodec.h"
int av_new_packet(AVPacket *pkt, int size);







void av_shrink_packet(AVPacket *pkt, int size);







int av_grow_packet(AVPacket *pkt, int grow_by);





int av_dup_packet(AVPacket *pkt);






int av_copy_packet(AVPacket *dst, AVPacket *src);






void av_free_packet(AVPacket *pkt);
# 3811 "avcodec.h"
uint8_t* av_packet_new_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
                                 int size);
# 3822 "avcodec.h"
int av_packet_shrink_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
                               int size);
# 3833 "avcodec.h"
uint8_t* av_packet_get_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
                                 int *size);

int av_packet_merge_side_data(AVPacket *pkt);

int av_packet_split_side_data(AVPacket *pkt);
# 3856 "avcodec.h"
AVCodec *avcodec_find_decoder(enum AVCodecID id);







AVCodec *avcodec_find_decoder_by_name(const char *name);

int avcodec_default_get_buffer(AVCodecContext *s, AVFrame *pic);
void avcodec_default_release_buffer(AVCodecContext *s, AVFrame *pic);
int avcodec_default_reget_buffer(AVCodecContext *s, AVFrame *pic);
# 3877 "avcodec.h"
unsigned avcodec_get_edge_width(void);
# 3888 "avcodec.h"
void avcodec_align_dimensions(AVCodecContext *s, int *width, int *height);
# 3899 "avcodec.h"
void avcodec_align_dimensions2(AVCodecContext *s, int *width, int *height,
                               int linesize_align[8]);
# 3957 "avcodec.h"
__attribute__((deprecated)) int avcodec_decode_audio3(AVCodecContext *avctx, int16_t *samples,
        int *frame_size_ptr,
        AVPacket *avpkt);
# 3995 "avcodec.h"
int avcodec_decode_audio4(AVCodecContext *avctx, AVFrame *frame,
                          int *got_frame_ptr, const AVPacket *avpkt);
# 4039 "avcodec.h"
int avcodec_decode_video2(AVCodecContext *avctx, AVFrame *picture,
                          int *got_picture_ptr,
                          const AVPacket *avpkt);
# 4059 "avcodec.h"
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
# 4086 "avcodec.h"
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
# 4136 "avcodec.h"
    int64_t convergence_duration;
# 4148 "avcodec.h"
    int dts_sync_point;
# 4163 "avcodec.h"
    int dts_ref_dts_delta;
# 4177 "avcodec.h"
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
# 4250 "avcodec.h"
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
# 4283 "avcodec.h"
AVCodec *avcodec_find_encoder(enum AVCodecID id);







AVCodec *avcodec_find_encoder_by_name(const char *name);
# 4318 "avcodec.h"
int __attribute__((deprecated)) avcodec_encode_audio(AVCodecContext *avctx,
        uint8_t *buf, int buf_size,
        const short *samples);
# 4362 "avcodec.h"
int avcodec_encode_audio2(AVCodecContext *avctx, AVPacket *avpkt,
                          const AVFrame *frame, int *got_packet_ptr);
# 4380 "avcodec.h"
__attribute__((deprecated))
int avcodec_encode_video(AVCodecContext *avctx, uint8_t *buf, int buf_size,
                         const AVFrame *pict);
# 4419 "avcodec.h"
int avcodec_encode_video2(AVCodecContext *avctx, AVPacket *avpkt,
                          const AVFrame *frame, int *got_packet_ptr);

int avcodec_encode_subtitle(AVCodecContext *avctx, uint8_t *buf, int buf_size,
                            const AVSubtitle *sub);
# 4438 "avcodec.h"
struct ReSampleContext;
struct AVResampleContext;

typedef struct ReSampleContext ReSampleContext;
# 4459 "avcodec.h"
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
# 4489 "avcodec.h"
__attribute__((deprecated))
struct AVResampleContext *av_resample_init(int out_rate, int in_rate, int filter_length, int log2_phase_count, int linear, double cutoff);
# 4501 "avcodec.h"
__attribute__((deprecated))
int av_resample(struct AVResampleContext *c, short *dst, short *src, int *consumed, int src_size, int dst_size, int update_ctx);
# 4517 "avcodec.h"
__attribute__((deprecated))
void av_resample_compensate(struct AVResampleContext *c, int sample_delta, int compensation_distance);
__attribute__((deprecated))
void av_resample_close(struct AVResampleContext *c);
# 4543 "avcodec.h"
int avpicture_alloc(AVPicture *picture, enum AVPixelFormat pix_fmt, int width, int height);
# 4552 "avcodec.h"
void avpicture_free(AVPicture *picture);







int avpicture_fill(AVPicture *picture, const uint8_t *ptr,
                   enum AVPixelFormat pix_fmt, int width, int height);







int avpicture_layout(const AVPicture* src, enum AVPixelFormat pix_fmt,
                     int width, int height,
                     unsigned char *dest, int dest_size);
# 4580 "avcodec.h"
int avpicture_get_size(enum AVPixelFormat pix_fmt, int width, int height);




int avpicture_deinterlace(AVPicture *dst, const AVPicture *src,
                          enum AVPixelFormat pix_fmt, int width, int height);



void av_picture_copy(AVPicture *dst, const AVPicture *src,
                     enum AVPixelFormat pix_fmt, int width, int height);




int av_picture_crop(AVPicture *dst, const AVPicture *src,
                    enum AVPixelFormat pix_fmt, int top_band, int left_band);




int av_picture_pad(AVPicture *dst, const AVPicture *src, int height, int width, enum AVPixelFormat pix_fmt,
                   int padtop, int padbottom, int padleft, int padright, int *color);
# 4640 "avcodec.h"
void avcodec_get_chroma_sub_sample(enum AVPixelFormat pix_fmt, int *h_shift, int *v_shift);






unsigned int avcodec_pix_fmt_to_codec_tag(enum AVPixelFormat pix_fmt);
# 4674 "avcodec.h"
int avcodec_get_pix_fmt_loss(enum AVPixelFormat dst_pix_fmt, enum AVPixelFormat src_pix_fmt,
                             int has_alpha);
# 4704 "avcodec.h"
__attribute__((deprecated))
enum AVPixelFormat avcodec_find_best_pix_fmt(int64_t pix_fmt_mask, enum AVPixelFormat src_pix_fmt,
        int has_alpha, int *loss_ptr);
# 4726 "avcodec.h"
enum AVPixelFormat avcodec_find_best_pix_fmt_of_list(enum AVPixelFormat *pix_fmt_list,
        enum AVPixelFormat src_pix_fmt,
        int has_alpha, int *loss_ptr);
# 4760 "avcodec.h"
enum AVPixelFormat avcodec_find_best_pix_fmt_of_2(enum AVPixelFormat dst_pix_fmt1, enum AVPixelFormat dst_pix_fmt2,
        enum AVPixelFormat src_pix_fmt, int has_alpha, int *loss_ptr);

__attribute__((deprecated))





enum AVPixelFormat avcodec_find_best_pix_fmt2(enum AVPixelFormat dst_pix_fmt1, enum AVPixelFormat dst_pix_fmt2,
        enum AVPixelFormat src_pix_fmt, int has_alpha, int *loss_ptr);



enum AVPixelFormat avcodec_default_get_format(struct AVCodecContext *s, const enum AVPixelFormat * fmt);





void avcodec_set_dimensions(AVCodecContext *s, int width, int height);
# 4789 "avcodec.h"
size_t av_get_codec_tag_string(char *buf, size_t buf_size, unsigned int codec_tag);

void avcodec_string(char *buf, int buf_size, AVCodecContext *enc, int encode);
# 4800 "avcodec.h"
const char *av_get_profile_name(const AVCodec *codec, int profile);

int avcodec_default_execute(AVCodecContext *c, int (*func)(AVCodecContext *c2, void *arg2),void *arg, int *ret, int count, int size);
int avcodec_default_execute2(AVCodecContext *c, int (*func)(AVCodecContext *c2, void *arg2, int, int),void *arg, int *ret, int count);
# 4829 "avcodec.h"
int avcodec_fill_audio_frame(AVFrame *frame, int nb_channels,
                             enum AVSampleFormat sample_fmt, const uint8_t *buf,
                             int buf_size, int align);




void avcodec_flush_buffers(AVCodecContext *avctx);

void avcodec_default_free_buffers(AVCodecContext *s);







int av_get_bits_per_sample(enum AVCodecID codec_id);







enum AVCodecID av_get_pcm_codec(enum AVSampleFormat fmt, int be);
# 4864 "avcodec.h"
int av_get_exact_bits_per_sample(enum AVCodecID codec_id);
# 4874 "avcodec.h"
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
# 4913 "avcodec.h"
void *av_fast_realloc(void *ptr, unsigned int *size, size_t min_size);
# 4927 "avcodec.h"
void av_fast_malloc(void *ptr, unsigned int *size, size_t min_size);
# 4936 "avcodec.h"
void av_fast_padded_malloc(void *ptr, unsigned int *size, size_t min_size);





void av_fast_padded_mallocz(void *ptr, unsigned int *size, size_t min_size);
# 4951 "avcodec.h"
unsigned int av_xiphlacing(unsigned char *s, unsigned int v);
# 4965 "avcodec.h"
void av_log_missing_feature(void *avc, const char *feature, int want_sample);
# 4975 "avcodec.h"
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
# 5013 "avcodec.h"
int av_lockmgr_register(int (*cb)(void **mutex, enum AVLockOp op));




enum AVMediaType avcodec_get_type(enum AVCodecID codec_id);





const char *avcodec_get_name(enum AVCodecID id);





int avcodec_is_open(AVCodecContext *s);




int av_codec_is_encoder(const AVCodec *codec);




int av_codec_is_decoder(const AVCodec *codec);




const AVCodecDescriptor *avcodec_descriptor_get(enum AVCodecID id);
# 5054 "avcodec.h"
const AVCodecDescriptor *avcodec_descriptor_next(const AVCodecDescriptor *prev);





const AVCodecDescriptor *avcodec_descriptor_get_by_name(const char *name);
# 37 "mjpegdec.c" 2
# 1 "dsputil.h" 1
# 33 "dsputil.h"
# 1 "/usr/local/include/libavutil/intreadwrite.h" 1 3
# 25 "/usr/local/include/libavutil/intreadwrite.h" 3
# 1 "/usr/local/include/libavutil/bswap.h" 1 3
# 58 "/usr/local/include/libavutil/bswap.h" 3
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
# 26 "/usr/local/include/libavutil/intreadwrite.h" 2 3

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
# 188 "/usr/local/include/libavutil/intreadwrite.h" 3
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
# 34 "dsputil.h" 2





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
# 72 "dsputil.h"
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
# 149 "dsputil.h"
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
# 183 "dsputil.h"
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
# 274 "dsputil.h"
    op_pixels_func put_pixels_tab[4][4];
# 286 "dsputil.h"
    op_pixels_func avg_pixels_tab[4][4];
# 298 "dsputil.h"
    op_pixels_func put_no_rnd_pixels_tab[4][4];
# 310 "dsputil.h"
    op_pixels_func avg_no_rnd_pixels_tab[4][4];

    void (*put_no_rnd_pixels_l2[2])(uint8_t *block , const uint8_t *a , const uint8_t *b , int line_size, int h);
# 324 "dsputil.h"
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
# 406 "dsputil.h"
    void (*butterflies_float_interleave)(float *dst, const float *src0,
                                         const float *src1, int len);


    void (*fdct)(DCTELEM *block );
    void (*fdct248)(DCTELEM *block );


    void (*idct)(DCTELEM *block );






    void (*idct_put)(uint8_t *dest , int line_size, DCTELEM *block );





    void (*idct_add)(uint8_t *dest , int line_size, DCTELEM *block );
# 441 "dsputil.h"
    uint8_t idct_permutation[64];
    int idct_permutation_type;







    int (*try_8x8basis)(int16_t rem[64], int16_t weight[64], int16_t basis[64], int scale);
    void (*add_8x8basis)(int16_t rem[64], int16_t basis[64], int scale);



    void (*draw_edges)(uint8_t *buf, int wrap, int width, int height, int w, int h, int sides);




    void (*shrink[4])(uint8_t *dst, int dst_wrap, const uint8_t *src, int src_wrap, int width, int height);





    int32_t (*scalarproduct_int16)(const int16_t *v1, const int16_t *v2 , int len);






    int32_t (*scalarproduct_and_madd_int16)(int16_t *v1 , const int16_t *v2, const int16_t *v3, int len, int mul);
# 486 "dsputil.h"
    void (*apply_window_int16)(int16_t *output, const int16_t *input,
                               const int16_t *window, unsigned int len);
# 502 "dsputil.h"
    void (*vector_clip_int32)(int32_t *dst, const int32_t *src, int32_t min,
                              int32_t max, unsigned int len);

    op_fill_func fill_block_tab[2];
} DSPContext;

void ff_dsputil_static_init(void);
void ff_dsputil_init(DSPContext* p, AVCodecContext *avctx);
__attribute__((deprecated)) void dsputil_init(DSPContext* c, AVCodecContext *avctx);

int ff_check_alignment(void);
# 523 "dsputil.h"
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
# 638 "dsputil.h"
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
# 38 "mjpegdec.c" 2
# 1 "internal.h" 1
# 29 "internal.h"
# 1 "/usr/local/include/libavutil/mathematics.h" 1 3
# 30 "internal.h" 2





typedef struct InternalBuffer
{
    uint8_t *base[8];
    uint8_t *data[8];
    int linesize[8];
    int width;
    int height;
    enum AVPixelFormat pix_fmt;
} InternalBuffer;

typedef struct AVCodecInternal
{




    int buffer_count;





    InternalBuffer *buffer;







    int is_copy;






    int sample_count;






    int last_audio_frame;





    uint8_t *audio_data;




    uint8_t *byte_buffer;
    unsigned int byte_buffer_size;

    void *frame_thread_encoder;




    int skip_samples;
} AVCodecInternal;

struct AVCodecDefault
{
    const uint8_t *key;
    const uint8_t *value;
};
# 112 "internal.h"
AVHWAccel *ff_find_hwaccel(enum AVCodecID codec_id, enum AVPixelFormat pix_fmt);





int ff_match_2uint16(const uint16_t (*tab)[2], int size, int a, int b);

unsigned int avpriv_toupper4(unsigned int x);




void ff_init_buffer_info(AVCodecContext *s, AVFrame *frame);




void ff_packet_free_side_data(AVPacket *pkt);

extern volatile int ff_avcodec_locked;
int ff_lock_avcodec(AVCodecContext *log_ctx);
int ff_unlock_avcodec(void);

int avpriv_lock_avformat(void);
int avpriv_unlock_avformat(void);
# 163 "internal.h"
int ff_alloc_packet2(AVCodecContext *avctx, AVPacket *avpkt, int size);

int ff_alloc_packet(AVPacket *avpkt, int size);




static __attribute__((always_inline)) inline int64_t ff_samples_to_time_base(AVCodecContext *avctx,
        int64_t samples)
{
    if(samples == ((int64_t)0x8000000000000000ULL))
        return ((int64_t)0x8000000000000000ULL);
    return av_rescale_q(samples, (AVRational)
    {
        1, avctx->sample_rate
    },
    avctx->time_base);
}






int ff_get_buffer(AVCodecContext *avctx, AVFrame *frame);

int ff_thread_can_start_frame(AVCodecContext *avctx);

int ff_get_logical_cpus(AVCodecContext *avctx);

int avpriv_h264_has_num_reorder_frames(AVCodecContext *avctx);






int ff_codec_open2_recursive(AVCodecContext *avctx, const AVCodec *codec, AVDictionary **options);




int ff_codec_close_recursive(AVCodecContext *avctx);




int avpriv_bprint_to_extradata(AVCodecContext *avctx, struct AVBPrint *buf);
# 39 "mjpegdec.c" 2
# 1 "mjpeg.h" 1
# 37 "mjpeg.h"
# 1 "put_bits.h" 1
# 31 "put_bits.h"
# 1 "/usr/include/assert.h" 1 3 4
# 68 "/usr/include/assert.h" 3 4



extern void __assert_fail (__const char *__assertion, __const char *__file,
                           unsigned int __line, __const char *__function)
__attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, __const char *__file,
                                  unsigned int __line,
                                  __const char *__function)
__attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
__attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



# 32 "put_bits.h" 2
# 1 "/usr/local/include/libavutil/bswap.h" 1 3
# 33 "put_bits.h" 2
# 1 "/usr/local/include/libavutil/common.h" 1 3
# 34 "put_bits.h" 2



# 1 "mathops.h" 1
# 27 "mathops.h"
# 1 "/usr/local/include/libavutil/common.h" 1 3
# 28 "mathops.h" 2
# 1 "/usr/local/include/config.h" 1 3
# 29 "mathops.h" 2

extern const uint32_t ff_inverse[257];
extern const uint8_t ff_reverse[256];
extern const uint8_t ff_sqrt_tab[256];
# 59 "mathops.h"
static __attribute__((always_inline)) inline int MULH(int a, int b)
{
    return ((int64_t)(a) * (int64_t)(b)) >> 32;
}



static __attribute__((always_inline)) inline unsigned UMULH(unsigned a, unsigned b)
{
    return ((uint64_t)(a) * (uint64_t)(b))>>32;
}
# 95 "mathops.h"
static inline __attribute__((const)) int mid_pred(int a, int b, int c)
{
# 106 "mathops.h"
    if(a>b)
    {
        if(c>b)
        {
            if(c>a) b=a;
            else b=c;
        }
    }
    else
    {
        if(b>c)
        {
            if(c>a) b=c;
            else b=a;
        }
    }
    return b;

}



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
# 198 "mathops.h"
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
# 38 "put_bits.h" 2


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
# 108 "put_bits.h"
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
# 151 "put_bits.h"
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
# 38 "mjpeg.h" 2



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
# 141 "mjpeg.h"
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
# 40 "mjpegdec.c" 2
# 1 "mjpegdec.h" 1
# 35 "mjpegdec.h"
# 1 "get_bits.h" 1
# 30 "get_bits.h"
# 1 "/usr/local/include/libavutil/common.h" 1 3
# 31 "get_bits.h" 2
# 53 "get_bits.h"
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
# 191 "get_bits.h"
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
    return ((((uint32_t)(sign ^ cache))>>(32-(n))) ^ sign) - sign;
}

static inline int get_sbits(GetBitContext *s, int n)
{
    register int tmp;
    unsigned int re_index = (s)->index;
    unsigned int __attribute__((unused)) re_cache = 0;
    unsigned int __attribute__((unused)) re_size_plus8 = (s)->size_in_bits_plus8;
    ((void)0);
    re_cache = av_bswap32((((const union unaligned_32 *) ((s)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
    tmp = ((( int32_t)(re_cache))>>(32-(n)));
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
    tmp = (((uint32_t)(re_cache))>>(32-(n)));
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
    tmp = (((uint32_t)(re_cache))>>(32-(n)));
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
# 376 "get_bits.h"
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
# 406 "get_bits.h"
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
# 429 "get_bits.h"
int ff_init_vlc_sparse(VLC *vlc, int nb_bits, int nb_codes,
                       const void *bits, int bits_wrap, int bits_size,
                       const void *codes, int codes_wrap, int codes_size,
                       const void *symbols, int symbols_wrap, int symbols_size,
                       int flags);


void ff_free_vlc(VLC *vlc);
# 517 "get_bits.h"
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
        index = (((uint32_t)(re_cache))>>(32-(bits)));
        code = table[index][0];
        n = table[index][1];
        if (max_depth > 1 && n < 0)
        {
            re_index = ((re_size_plus8) > (re_index + (bits)) ? (re_index + (bits)) : (re_size_plus8));
            re_cache = av_bswap32((((const union unaligned_32 *) ((s)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
            nb_bits = -n;
            index = (((uint32_t)(re_cache))>>(32-(nb_bits))) + code;
            code = table[index][0];
            n = table[index][1];
            if (max_depth > 2 && n < 0)
            {
                re_index = ((re_size_plus8) > (re_index + (nb_bits)) ? (re_index + (nb_bits)) : (re_size_plus8));
                re_cache = av_bswap32((((const union unaligned_32 *) ((s)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
                nb_bits = -n;
                index = (((uint32_t)(re_cache))>>(32-(nb_bits))) + code;
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
# 36 "mjpegdec.h" 2




typedef struct MJpegDecodeContext
{
    AVClass *class;
    AVCodecContext *avctx;
    GetBitContext gb;

    int start_code;
    int buffer_size;
    uint8_t *buffer;

    int16_t quant_matrixes[4][64];
    VLC vlcs[3][4];
    int qscale[4];

    int org_height;
    int first_picture;
    int interlaced;
    int bottom_field;
    int lossless;
    int ls;
    int progressive;
    int rgb;
    int upscale_h;
    int chroma_height;
    int upscale_v;
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
    AVFrame *picture_ptr;
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

    int extern_huff;
} MJpegDecodeContext;

int ff_mjpeg_decode_init(AVCodecContext *avctx);
int ff_mjpeg_decode_end(AVCodecContext *avctx);
int ff_mjpeg_decode_frame(AVCodecContext *avctx,
                          void *data, int *got_frame,
                          AVPacket *avpkt);
int ff_mjpeg_decode_dqt(MJpegDecodeContext *s);
int ff_mjpeg_decode_dht(MJpegDecodeContext *s);
int ff_mjpeg_decode_sof(MJpegDecodeContext *s);
int ff_mjpeg_decode_sos(MJpegDecodeContext *s,
                        const uint8_t *mb_bitmask, const AVFrame *reference);
int ff_mjpeg_find_marker(MJpegDecodeContext *s,
                         const uint8_t **buf_ptr, const uint8_t *buf_end,
                         const uint8_t **unescaped_buf_ptr, int *unescaped_buf_size);
# 41 "mjpegdec.c" 2
# 1 "jpeglsdec.h" 1
# 37 "jpeglsdec.h"
int ff_jpegls_decode_lse(MJpegDecodeContext *s);

int ff_jpegls_decode_picture(MJpegDecodeContext *s, int near, int point_transform, int ilv);
# 42 "mjpegdec.c" 2


static int build_vlc(VLC *vlc, const uint8_t *bits_table,
                     const uint8_t *val_table, int nb_codes,
                     int use_static, int is_ac)
{
    uint8_t huff_size[256] = { 0 };
    uint16_t huff_code[256];
    uint16_t huff_sym[256];
    int i;

    do
    {
        if (!(nb_codes <= 256))
        {
            av_log(((void *)0), 0, "Assertion %s failed at %s:%d\n", "nb_codes <= 256", "mjpegdec.c", 53);
            abort();
        }
    }
    while (0);

    ff_mjpeg_build_huffman_codes(huff_size, huff_code, bits_table, val_table);

    for (i = 0; i < 256; i++)
        huff_sym[i] = i + 16 * is_ac;

    if (is_ac)
        huff_sym[0] = 16 * 256;

    return ff_init_vlc_sparse(vlc, 8, nb_codes, huff_size, 1, 1,
                              huff_code, 2, 2, huff_sym, 2, 2, use_static);
}

static void build_basic_mjpeg_vlc(MJpegDecodeContext *s)
{
    build_vlc(&s->vlcs[0][0], avpriv_mjpeg_bits_dc_luminance,
              avpriv_mjpeg_val_dc, 12, 0, 0);
    build_vlc(&s->vlcs[0][1], avpriv_mjpeg_bits_dc_chrominance,
              avpriv_mjpeg_val_dc, 12, 0, 0);
    build_vlc(&s->vlcs[1][0], avpriv_mjpeg_bits_ac_luminance,
              avpriv_mjpeg_val_ac_luminance, 251, 0, 1);
    build_vlc(&s->vlcs[1][1], avpriv_mjpeg_bits_ac_chrominance,
              avpriv_mjpeg_val_ac_chrominance, 251, 0, 1);
    build_vlc(&s->vlcs[2][0], avpriv_mjpeg_bits_ac_luminance,
              avpriv_mjpeg_val_ac_luminance, 251, 0, 0);
    build_vlc(&s->vlcs[2][1], avpriv_mjpeg_bits_ac_chrominance,
              avpriv_mjpeg_val_ac_chrominance, 251, 0, 0);
}

__attribute__((cold)) int ff_mjpeg_decode_init(AVCodecContext *avctx)
{
    MJpegDecodeContext *s = avctx->priv_data;

    if (!s->picture_ptr)
        s->picture_ptr = &s->picture;
    avcodec_get_frame_defaults(&s->picture);

    s->avctx = avctx;
    ff_dsputil_init(&s->dsp, avctx);
    ff_init_scantable(s->dsp.idct_permutation, &s->scantable, ff_zigzag_direct);
    s->buffer_size = 0;
    s->buffer = ((void *)0);
    s->start_code = -1;
    s->first_picture = 1;
    s->got_picture = 0;
    s->org_height = avctx->coded_height;
    avctx->chroma_sample_location = AVCHROMA_LOC_CENTER;

    build_basic_mjpeg_vlc(s);

    if (s->extern_huff)
    {
        av_log(avctx, 32, "using external huffman table\n");
        init_get_bits(&s->gb, avctx->extradata, avctx->extradata_size * 8);
        if (ff_mjpeg_decode_dht(s))
        {
            av_log(avctx, 16,
                   "error using external huffman table, switching back to internal\n");
            build_basic_mjpeg_vlc(s);
        }
    }
    if (avctx->field_order == AV_FIELD_BB)
    {
        s->interlace_polarity = 1;
        av_log(avctx, 48, "bottom field first\n");
    }
    if (avctx->codec->id == AV_CODEC_ID_AMV)
        s->flipped = 1;

    return 0;
}



int ff_mjpeg_decode_dqt(MJpegDecodeContext *s)
{
    int len, index, i, j;

    len = get_bits(&s->gb, 16) - 2;

    while (len >= 65)
    {
        int pr = get_bits(&s->gb, 4);
        if (pr > 1)
        {
            av_log(s->avctx, 16, "dqt: invalid precision\n");
            return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
        }
        index = get_bits(&s->gb, 4);
        if (index >= 4)
            return -1;
        av_log(s->avctx, 48, "index=%d\n", index);

        for (i = 0; i < 64; i++)
        {
            j = s->scantable.permutated[i];
            s->quant_matrixes[index][j] = get_bits(&s->gb, pr ? 16 : 8);
        }


        s->qscale[index] = ((s->quant_matrixes[index][s->scantable.permutated[1]]) > (s->quant_matrixes[index][s->scantable.permutated[8]]) ? (s->quant_matrixes[index][s->scantable.permutated[1]]) : (s->quant_matrixes[index][s->scantable.permutated[8]]))
                           >> 1;
        av_log(s->avctx, 48, "qscale[%d]: %d\n",
               index, s->qscale[index]);
        len -= 65;
    }
    return 0;
}


int ff_mjpeg_decode_dht(MJpegDecodeContext *s)
{
    int len, index, i, class, n, v, code_max;
    uint8_t bits_table[17];
    uint8_t val_table[256];
    int ret = 0;

    len = get_bits(&s->gb, 16) - 2;

    while (len > 0)
    {
        if (len < 17)
            return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
        class = get_bits(&s->gb, 4);
        if (class >= 2)
            return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
        index = get_bits(&s->gb, 4);
        if (index >= 4)
            return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
        n = 0;
        for (i = 1; i <= 16; i++)
        {
            bits_table[i] = get_bits(&s->gb, 8);
            n += bits_table[i];
        }
        len -= 17;
        if (len < n || n > 256)
            return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));

        code_max = 0;
        for (i = 0; i < n; i++)
        {
            v = get_bits(&s->gb, 8);
            if (v > code_max)
                code_max = v;
            val_table[i] = v;
        }
        len -= n;


        ff_free_vlc(&s->vlcs[class][index]);
        av_log(s->avctx, 48, "class=%d index=%d nb_codes=%d\n",
               class, index, code_max + 1);
        if ((ret = build_vlc(&s->vlcs[class][index], bits_table, val_table,
                             code_max + 1, 0, class > 0)) < 0)
            return ret;

        if (class > 0)
        {
            ff_free_vlc(&s->vlcs[2][index]);
            if ((ret = build_vlc(&s->vlcs[2][index], bits_table, val_table,
                                 code_max + 1, 0, 0)) < 0)
                return ret;
        }
    }
    return 0;
}

int ff_mjpeg_decode_sof(MJpegDecodeContext *s)
{
    int len, nb_components, i, width, height, pix_fmt_id;
    int h_count[4];
    int v_count[4];

    s->cur_scan = 0;
    s->upscale_h = s->upscale_v = 0;


    len = get_bits(&s->gb, 16);
    s->bits = get_bits(&s->gb, 8);

    if (s->pegasus_rct)
        s->bits = 9;
    if (s->bits == 9 && !s->pegasus_rct)
        s->rct = 1;

    if (s->bits != 8 && !s->lossless)
    {
        av_log(s->avctx, 16, "only 8 bits/component accepted\n");
        return -1;
    }

    if(s->lossless && s->avctx->lowres)
    {
        av_log(s->avctx, 16, "lowres is not possible with lossless jpeg\n");
        return -1;
    }

    height = get_bits(&s->gb, 16);
    width = get_bits(&s->gb, 16);


    if (s->interlaced && s->width == width && s->height == height + 1)
        height= s->height;

    av_log(s->avctx, 48, "sof0: picture: %dx%d\n", width, height);
    if (av_image_check_size(width, height, 0, s->avctx))
        return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));

    nb_components = get_bits(&s->gb, 8);
    if (nb_components <= 0 ||
            nb_components > 4)
        return -1;
    if (s->interlaced && (s->bottom_field == !s->interlace_polarity))
    {
        if (nb_components != s->nb_components)
        {
            av_log(s->avctx, 16, "nb_components changing in interlaced picture\n");
            return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
        }
    }
    if (s->ls && !(s->bits <= 8 || nb_components == 1))
    {
        av_log_missing_feature(s->avctx,
                               "For JPEG-LS anything except <= 8 bits/component"
                               " or 16-bit gray", 0);
        return (-(int)(('P') | (('A') << 8) | (('W') << 16) | ((unsigned)('E') << 24)));
    }
    s->nb_components = nb_components;
    s->h_max = 1;
    s->v_max = 1;
    memset(h_count, 0, sizeof(h_count));
    memset(v_count, 0, sizeof(v_count));
    for (i = 0; i < nb_components; i++)
    {

        s->component_id[i] = get_bits(&s->gb, 8) - 1;
        h_count[i] = get_bits(&s->gb, 4);
        v_count[i] = get_bits(&s->gb, 4);

        if (h_count[i] > s->h_max)
            s->h_max = h_count[i];
        if (v_count[i] > s->v_max)
            s->v_max = v_count[i];
        if (!h_count[i] || !v_count[i])
        {
            av_log(s->avctx, 16, "h/v_count is 0\n");
            return -1;
        }
        s->quant_index[i] = get_bits(&s->gb, 8);
        if (s->quant_index[i] >= 4)
        {
            av_log(s->avctx, 16, "quant_index is invalid\n");
            return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
        }
        av_log(s->avctx, 48, "component %d %d:%d id: %d quant:%d\n",
               i, h_count[i], v_count[i],
               s->component_id[i], s->quant_index[i]);
    }

    if (s->ls && (s->h_max > 1 || s->v_max > 1))
    {
        av_log_missing_feature(s->avctx, "Subsampling in JPEG-LS", 0);
        return (-(int)(('P') | (('A') << 8) | (('W') << 16) | ((unsigned)('E') << 24)));
    }

    if (s->v_max == 1 && s->h_max == 1 && s->lossless==1 && nb_components==3)
        s->rgb = 1;


    if ( width != s->width || height != s->height
            || memcmp(s->h_count, h_count, sizeof(h_count[0])*nb_components)
            || memcmp(s->v_count, v_count, sizeof(v_count[0])*nb_components))
    {
        av_freep(&s->qscale_table);

        s->width = width;
        s->height = height;
        memcpy(s->h_count, h_count, sizeof(h_count));
        memcpy(s->v_count, v_count, sizeof(v_count));
        s->interlaced = 0;
        s->got_picture = 0;


        if (s->first_picture &&
                s->org_height != 0 &&
                s->height < ((s->org_height * 3) / 4))
        {
            s->interlaced = 1;
            s->bottom_field = s->interlace_polarity;
            s->picture_ptr->interlaced_frame = 1;
            s->picture_ptr->top_field_first = !s->interlace_polarity;
            height *= 2;
        }

        avcodec_set_dimensions(s->avctx, width, height);

        s->qscale_table = av_mallocz((s->width + 15) / 16);
        s->first_picture = 0;
    }

    if (s->interlaced && (s->bottom_field == !s->interlace_polarity))
    {
        if (s->progressive)
        {
            av_log_ask_for_sample(s->avctx, "progressively coded interlaced pictures not supported\n");
            return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
        }
    }
    else
    {

        pix_fmt_id = (s->h_count[0] << 28) | (s->v_count[0] << 24) |
                     (s->h_count[1] << 20) | (s->v_count[1] << 16) |
                     (s->h_count[2] << 12) | (s->v_count[2] << 8) |
                     (s->h_count[3] << 4) | s->v_count[3];
        av_log(s->avctx, 48, "pix fmt id %x\n", pix_fmt_id);


        if (!(pix_fmt_id & 0xD0D0D0D0))
            pix_fmt_id -= (pix_fmt_id & 0xF0F0F0F0) >> 1;
        if (!(pix_fmt_id & 0x0D0D0D0D))
            pix_fmt_id -= (pix_fmt_id & 0x0F0F0F0F) >> 1;

        switch (pix_fmt_id)
        {
        case 0x11111100:
            if (s->rgb)
                s->avctx->pix_fmt = AV_PIX_FMT_BGR24;
            else
            {
                if (s->component_id[0] == 'Q' && s->component_id[1] == 'F' && s->component_id[2] == 'A')
                {
                    s->avctx->pix_fmt = AV_PIX_FMT_GBRP;
                }
                else
                {
                    s->avctx->pix_fmt = s->cs_itu601 ? AV_PIX_FMT_YUV444P : AV_PIX_FMT_YUVJ444P;
                    s->avctx->color_range = s->cs_itu601 ? AVCOL_RANGE_MPEG : AVCOL_RANGE_JPEG;
                }
            }
            do
            {
                if (!(s->nb_components == 3))
                {
                    av_log(((void *)0), 0, "Assertion %s failed at %s:%d\n", "s->nb_components == 3", "mjpegdec.c", 365);
                    abort();
                }
            }
            while (0);
            break;
        case 0x12121100:
        case 0x22122100:
            s->avctx->pix_fmt = s->cs_itu601 ? AV_PIX_FMT_YUV444P : AV_PIX_FMT_YUVJ444P;
            s->avctx->color_range = s->cs_itu601 ? AVCOL_RANGE_MPEG : AVCOL_RANGE_JPEG;
            s->upscale_v = 2;
            s->upscale_h = (pix_fmt_id == 0x22122100);
            s->chroma_height = s->height;
            break;
        case 0x21211100:
        case 0x22211200:
            s->avctx->pix_fmt = s->cs_itu601 ? AV_PIX_FMT_YUV444P : AV_PIX_FMT_YUVJ444P;
            s->avctx->color_range = s->cs_itu601 ? AVCOL_RANGE_MPEG : AVCOL_RANGE_JPEG;
            s->upscale_v = (pix_fmt_id == 0x22211200);
            s->upscale_h = 2;
            s->chroma_height = s->height;
            break;
        case 0x22221100:
            s->avctx->pix_fmt = s->cs_itu601 ? AV_PIX_FMT_YUV444P : AV_PIX_FMT_YUVJ444P;
            s->avctx->color_range = s->cs_itu601 ? AVCOL_RANGE_MPEG : AVCOL_RANGE_JPEG;
            s->upscale_v = 2;
            s->upscale_h = 2;
            s->chroma_height = s->height / 2;
            break;
        case 0x11000000:
        case 0x13000000:
        case 0x14000000:
        case 0x31000000:
        case 0x33000000:
        case 0x34000000:
        case 0x41000000:
        case 0x43000000:
        case 0x44000000:
            if(s->bits <= 8)
                s->avctx->pix_fmt = AV_PIX_FMT_GRAY8;
            else
                s->avctx->pix_fmt = AV_PIX_FMT_GRAY16LE;
            break;
        case 0x12111100:
        case 0x22211100:
        case 0x22112100:
            s->avctx->pix_fmt = s->cs_itu601 ? AV_PIX_FMT_YUV440P : AV_PIX_FMT_YUVJ440P;
            s->avctx->color_range = s->cs_itu601 ? AVCOL_RANGE_MPEG : AVCOL_RANGE_JPEG;
            s->upscale_h = (pix_fmt_id == 0x22211100) * 2 + (pix_fmt_id == 0x22112100);
            s->chroma_height = s->height / 2;
            break;
        case 0x21111100:
            s->avctx->pix_fmt = s->cs_itu601 ? AV_PIX_FMT_YUV422P : AV_PIX_FMT_YUVJ422P;
            s->avctx->color_range = s->cs_itu601 ? AVCOL_RANGE_MPEG : AVCOL_RANGE_JPEG;
            break;
        case 0x22121100:
        case 0x22111200:
            s->avctx->pix_fmt = s->cs_itu601 ? AV_PIX_FMT_YUV422P : AV_PIX_FMT_YUVJ422P;
            s->avctx->color_range = s->cs_itu601 ? AVCOL_RANGE_MPEG : AVCOL_RANGE_JPEG;
            s->upscale_v = (pix_fmt_id == 0x22121100) + 1;
            break;
        case 0x22111100:
            s->avctx->pix_fmt = s->cs_itu601 ? AV_PIX_FMT_YUV420P : AV_PIX_FMT_YUVJ420P;
            s->avctx->color_range = s->cs_itu601 ? AVCOL_RANGE_MPEG : AVCOL_RANGE_JPEG;
            break;
        default:
            av_log(s->avctx, 16, "Unhandled pixel format 0x%x\n", pix_fmt_id);
            return (-(int)(('P') | (('A') << 8) | (('W') << 16) | ((unsigned)('E') << 24)));
        }
        if ((s->upscale_h || s->upscale_v) && s->avctx->lowres)
        {
            av_log(s->avctx, 16, "lowres not supported for weird subsampling\n");
            return (-(int)(('P') | (('A') << 8) | (('W') << 16) | ((unsigned)('E') << 24)));
        }
        if (s->ls)
        {
            s->upscale_h = s->upscale_v = 0;
            if (s->nb_components > 1)
                s->avctx->pix_fmt = AV_PIX_FMT_RGB24;
            else if (s->bits <= 8)
                s->avctx->pix_fmt = AV_PIX_FMT_GRAY8;
            else
                s->avctx->pix_fmt = AV_PIX_FMT_GRAY16LE;
        }

        if (s->picture_ptr->data[0])
            s->avctx->release_buffer(s->avctx, s->picture_ptr);

        if (ff_get_buffer(s->avctx, s->picture_ptr) < 0)
        {
            av_log(s->avctx, 16, "get_buffer() failed\n");
            return -1;
        }
        s->picture_ptr->pict_type = AV_PICTURE_TYPE_I;
        s->picture_ptr->key_frame = 1;
        s->got_picture = 1;

        for (i = 0; i < 3; i++)
            s->linesize[i] = s->picture_ptr->linesize[i] << s->interlaced;

        do
        {
            if (0) av_log(s->avctx, 48, "%d %d %d %d %d %d\n", s->width, s->height, s->linesize[0], s->linesize[1], s->interlaced, s->avctx->height);
        }
        while (0)

            ;

        if (len != (8 + (3 * nb_components)))
            av_log(s->avctx, 48, "decode_sof0: error, len(%d) mismatch\n", len);
    }


    if (s->progressive)
    {
        int bw = (width + s->h_max * 8 - 1) / (s->h_max * 8);
        int bh = (height + s->v_max * 8 - 1) / (s->v_max * 8);
        for (i = 0; i < s->nb_components; i++)
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
        av_log(s->avctx, 24,
               "mjpeg_decode_dc: bad vlc: %d:%d (%p)\n",
               0, dc_index, &s->vlcs[0][dc_index]);
        return 0xffff;
    }

    if (code)
        return get_xbits(&s->gb, code);
    else
        return 0;
}


static int decode_block(MJpegDecodeContext *s, DCTELEM *block, int component,
                        int dc_index, int ac_index, int16_t *quant_matrix)
{
    int code, i, j, level, val;


    val = mjpeg_decode_dc(s, dc_index);
    if (val == 0xffff)
    {
        av_log(s->avctx, 16, "error dc\n");
        return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
    }
    val = val * quant_matrix[0] + s->last_dc[component];
    s->last_dc[component] = val;
    block[0] = val;

    i = 0;
    {
        unsigned int re_index = (&s->gb)->index;
        unsigned int __attribute__((unused)) re_cache = 0;
        unsigned int __attribute__((unused)) re_size_plus8 = (&s->gb)->size_in_bits_plus8;
        do
        {
            re_cache = av_bswap32((((const union unaligned_32 *) ((&s->gb)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
            do
            {
                int n, nb_bits;
                unsigned int index;
                index = (((uint32_t)(re_cache))>>(32-(9)));
                code = s->vlcs[1][ac_index].table[index][0];
                n = s->vlcs[1][ac_index].table[index][1];
                if (2 > 1 && n < 0)
                {
                    re_index = ((re_size_plus8) > (re_index + (9)) ? (re_index + (9)) : (re_size_plus8));
                    re_cache = av_bswap32((((const union unaligned_32 *) ((&s->gb)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
                    nb_bits = -n;
                    index = (((uint32_t)(re_cache))>>(32-(nb_bits))) + code;
                    code = s->vlcs[1][ac_index].table[index][0];
                    n = s->vlcs[1][ac_index].table[index][1];
                    if (2 > 2 && n < 0)
                    {
                        re_index = ((re_size_plus8) > (re_index + (nb_bits)) ? (re_index + (nb_bits)) : (re_size_plus8));
                        re_cache = av_bswap32((((const union unaligned_32 *) ((&s->gb)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
                        nb_bits = -n;
                        index = (((uint32_t)(re_cache))>>(32-(nb_bits))) + code;
                        code = s->vlcs[1][ac_index].table[index][0];
                        n = s->vlcs[1][ac_index].table[index][1];
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

            printf("%d ", code);

            i += ((unsigned)code) >> 4;
            code &= 0xf;
            if (code)
            {
                if (code > 25 - 16)
                    re_cache = av_bswap32((((const union unaligned_32 *) ((&s->gb)->buffer + (re_index >> 3)))->l)) << (re_index & 7);

                {
                    int cache = ((uint32_t)re_cache);
                    int sign = (~cache) >> 31;
                    level = ((((uint32_t)(sign ^ cache))>>(32-(code))) ^ sign) - sign;
                }

                re_index = ((re_size_plus8) > (re_index + (code)) ? (re_index + (code)) : (re_size_plus8));

                if (i > 63)
                {
                    av_log(s->avctx, 16, "error count: %d\n", i);
                    return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
                }
                j = s->scantable.permutated[i];
                block[j] = level * quant_matrix[j];
            }
        }
        while (i < 63);
        printf("\n");
        (&s->gb)->index = re_index;
    }

    return 0;
}

static int decode_dc_progressive(MJpegDecodeContext *s, DCTELEM *block,
                                 int component, int dc_index,
                                 int16_t *quant_matrix, int Al)
{
    int val;
    s->dsp.clear_block(block);
    val = mjpeg_decode_dc(s, dc_index);
    if (val == 0xffff)
    {
        av_log(s->avctx, 16, "error dc\n");
        return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
    }
    val = (val * quant_matrix[0] << Al) + s->last_dc[component];
    s->last_dc[component] = val;
    block[0] = val;
    return 0;
}


static int decode_block_progressive(MJpegDecodeContext *s, DCTELEM *block,
                                    uint8_t *last_nnz, int ac_index,
                                    int16_t *quant_matrix,
                                    int ss, int se, int Al, int *EOBRUN)
{
    int code, i, j, level, val, run;

    if (*EOBRUN)
    {
        (*EOBRUN)--;
        return 0;
    }

    {
        unsigned int re_index = (&s->gb)->index;
        unsigned int __attribute__((unused)) re_cache = 0;
        unsigned int __attribute__((unused)) re_size_plus8 = (&s->gb)->size_in_bits_plus8;
        for (i = ss; ; i++)
        {
            re_cache = av_bswap32((((const union unaligned_32 *) ((&s->gb)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
            do
            {
                int n, nb_bits;
                unsigned int index;
                index = (((uint32_t)(re_cache))>>(32-(9)));
                code = s->vlcs[2][ac_index].table[index][0];
                n = s->vlcs[2][ac_index].table[index][1];
                if (2 > 1 && n < 0)
                {
                    re_index = ((re_size_plus8) > (re_index + (9)) ? (re_index + (9)) : (re_size_plus8));
                    re_cache = av_bswap32((((const union unaligned_32 *) ((&s->gb)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
                    nb_bits = -n;
                    index = (((uint32_t)(re_cache))>>(32-(nb_bits))) + code;
                    code = s->vlcs[2][ac_index].table[index][0];
                    n = s->vlcs[2][ac_index].table[index][1];
                    if (2 > 2 && n < 0)
                    {
                        re_index = ((re_size_plus8) > (re_index + (nb_bits)) ? (re_index + (nb_bits)) : (re_size_plus8));
                        re_cache = av_bswap32((((const union unaligned_32 *) ((&s->gb)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
                        nb_bits = -n;
                        index = (((uint32_t)(re_cache))>>(32-(nb_bits))) + code;
                        code = s->vlcs[2][ac_index].table[index][0];
                        n = s->vlcs[2][ac_index].table[index][1];
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

            run = ((unsigned) code) >> 4;
            code &= 0xF;
            if (code)
            {
                i += run;
                if (code > 25 - 16)
                    re_cache = av_bswap32((((const union unaligned_32 *) ((&s->gb)->buffer + (re_index >> 3)))->l)) << (re_index & 7);

                {
                    int cache = ((uint32_t)re_cache);
                    int sign = (~cache) >> 31;
                    level = ((((uint32_t)(sign ^ cache))>>(32-(code))) ^ sign) - sign;
                }

                re_index = ((re_size_plus8) > (re_index + (code)) ? (re_index + (code)) : (re_size_plus8));

                if (i >= se)
                {
                    if (i == se)
                    {
                        j = s->scantable.permutated[se];
                        block[j] = level * quant_matrix[j] << Al;
                        break;
                    }
                    av_log(s->avctx, 16, "error count: %d\n", i);
                    return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
                }
                j = s->scantable.permutated[i];
                block[j] = level * quant_matrix[j] << Al;
            }
            else
            {
                if (run == 0xF)
                {
                    i += 15;
                    if (i >= se)
                    {
                        av_log(s->avctx, 16, "ZRL overflow: %d\n", i);
                        return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
                    }
                }
                else
                {
                    val = (1 << run);
                    if (run)
                    {
                        re_cache = av_bswap32((((const union unaligned_32 *) ((&s->gb)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
                        val += (((uint32_t)(((uint32_t)re_cache)))>>(32-(run)));
                        re_index = ((re_size_plus8) > (re_index + (run)) ? (re_index + (run)) : (re_size_plus8));
                    }
                    *EOBRUN = val - 1;
                    break;
                }
            }
        }
        (&s->gb)->index = re_index;
    }

    if (i > *last_nnz)
        *last_nnz = i;

    return 0;
}
# 669 "mjpegdec.c"
static int decode_block_refinement(MJpegDecodeContext *s, DCTELEM *block,
                                   uint8_t *last_nnz,
                                   int ac_index, int16_t *quant_matrix,
                                   int ss, int se, int Al, int *EOBRUN)
{
    int code, i = ss, j, sign, val, run;
    int last = ((se) > (*last_nnz) ? (*last_nnz) : (se));

    unsigned int re_index = (&s->gb)->index;
    unsigned int __attribute__((unused)) re_cache = 0;
    unsigned int __attribute__((unused)) re_size_plus8 = (&s->gb)->size_in_bits_plus8;
    if (*EOBRUN)
    {
        (*EOBRUN)--;
    }
    else
    {
        for (; ; i++)
        {
            re_cache = av_bswap32((((const union unaligned_32 *) ((&s->gb)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
            do
            {
                int n, nb_bits;
                unsigned int index;
                index = (((uint32_t)(re_cache))>>(32-(9)));
                code = s->vlcs[2][ac_index].table[index][0];
                n = s->vlcs[2][ac_index].table[index][1];
                if (2 > 1 && n < 0)
                {
                    re_index = ((re_size_plus8) > (re_index + (9)) ? (re_index + (9)) : (re_size_plus8));
                    re_cache = av_bswap32((((const union unaligned_32 *) ((&s->gb)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
                    nb_bits = -n;
                    index = (((uint32_t)(re_cache))>>(32-(nb_bits))) + code;
                    code = s->vlcs[2][ac_index].table[index][0];
                    n = s->vlcs[2][ac_index].table[index][1];
                    if (2 > 2 && n < 0)
                    {
                        re_index = ((re_size_plus8) > (re_index + (nb_bits)) ? (re_index + (nb_bits)) : (re_size_plus8));
                        re_cache = av_bswap32((((const union unaligned_32 *) ((&s->gb)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
                        nb_bits = -n;
                        index = (((uint32_t)(re_cache))>>(32-(nb_bits))) + code;
                        code = s->vlcs[2][ac_index].table[index][0];
                        n = s->vlcs[2][ac_index].table[index][1];
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

            if (code & 0xF)
            {
                run = ((unsigned) code) >> 4;
                re_cache = av_bswap32((((const union unaligned_32 *) ((&s->gb)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
                val = (((uint32_t)(re_cache))>>(32-(1)));
                re_index = ((re_size_plus8) > (re_index + (1)) ? (re_index + (1)) : (re_size_plus8));
                for (; ; i++)
                {
                    if (i > last)
                    {
                        i += run;
                        if (i > se)
                        {
                            av_log(s->avctx, 16, "error count: %d\n", i);
                            return -1;
                        }
                        break;
                    }
                    j = s->scantable.permutated[i];
                    if (block[j])
                    {
                        re_cache = av_bswap32((((const union unaligned_32 *) ((&s->gb)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
                        sign = block[j] >> 15;
                        block[j] += (((uint32_t)(re_cache))>>(32-(1))) * ((quant_matrix[j] ^ sign) - sign) << Al;
                        re_index = ((re_size_plus8) > (re_index + (1)) ? (re_index + (1)) : (re_size_plus8));
                    }
                    else if (run-- == 0) break;
                };
                j = s->scantable.permutated[i];
                val--;
                block[j] = ((quant_matrix[j]^val) - val) << Al;
                if (i == se)
                {
                    if (i > *last_nnz)
                        *last_nnz = i;
                    (&s->gb)->index = re_index;
                    return 0;
                }
            }
            else
            {
                run = ((unsigned) code) >> 4;
                if (run == 0xF)
                {
                    for (; ; i++)
                    {
                        if (i > last)
                        {
                            i += run;
                            if (i > se)
                            {
                                av_log(s->avctx, 16, "error count: %d\n", i);
                                return -1;
                            }
                            break;
                        }
                        j = s->scantable.permutated[i];
                        if (block[j])
                        {
                            re_cache = av_bswap32((((const union unaligned_32 *) ((&s->gb)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
                            sign = block[j] >> 15;
                            block[j] += (((uint32_t)(re_cache))>>(32-(1))) * ((quant_matrix[j] ^ sign) - sign) << Al;
                            re_index = ((re_size_plus8) > (re_index + (1)) ? (re_index + (1)) : (re_size_plus8));
                        }
                        else if (run-- == 0) break;
                    };
                }
                else
                {
                    val = run;
                    run = (1 << run);
                    if (val)
                    {
                        re_cache = av_bswap32((((const union unaligned_32 *) ((&s->gb)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
                        run += (((uint32_t)(re_cache))>>(32-(val)));
                        re_index = ((re_size_plus8) > (re_index + (val)) ? (re_index + (val)) : (re_size_plus8));
                    }
                    *EOBRUN = run - 1;
                    break;
                }
            }
        }

        if (i > *last_nnz)
            *last_nnz = i;
    }

    for (; i <= last; i++)
    {
        j = s->scantable.permutated[i];
        if (block[j])
        {
            re_cache = av_bswap32((((const union unaligned_32 *) ((&s->gb)->buffer + (re_index >> 3)))->l)) << (re_index & 7);
            sign = block[j] >> 15;
            block[j] += (((uint32_t)(re_cache))>>(32-(1))) * ((quant_matrix[j] ^ sign) - sign) << Al;
            re_index = ((re_size_plus8) > (re_index + (1)) ? (re_index + (1)) : (re_size_plus8));
        }
    }
    (&s->gb)->index = re_index;

    return 0;
}



static void handle_rstn(MJpegDecodeContext *s, int nb_components)
{
    int i;
    if (s->restart_interval)
    {
        s->restart_count--;
        if(s->restart_count == 0 && s->avctx->codec_id == AV_CODEC_ID_THP)
        {
            align_get_bits(&s->gb);
            for (i = 0; i < nb_components; i++)
                s->last_dc[i] = 1024;
        }

        i = 8 + ((-get_bits_count(&s->gb)) & 7);

        if (s->restart_count == 0 && show_bits(&s->gb, i) == (1 << i) - 1)
        {
            int pos = get_bits_count(&s->gb);
            align_get_bits(&s->gb);
            while (get_bits_left(&s->gb) >= 8 && show_bits(&s->gb, 8) == 0xFF)
                skip_bits(&s->gb, 8);
            if (get_bits_left(&s->gb) >= 8 && (get_bits(&s->gb, 8) & 0xF8) == 0xD0)
            {
                for (i = 0; i < nb_components; i++)
                    s->last_dc[i] = 1024;
            }
            else
                skip_bits_long(&s->gb, pos - get_bits_count(&s->gb));
        }
    }
}

static int ljpeg_decode_rgb_scan(MJpegDecodeContext *s, int nb_components, int predictor, int point_transform)
{
    int i, mb_x, mb_y;
    uint16_t (*buffer)[4];
    int left[3], top[3], topleft[3];
    const int linesize = s->linesize[0];
    const int mask = (1 << s->bits) - 1;
    int resync_mb_y = 0;
    int resync_mb_x = 0;

    s->restart_count = s->restart_interval;

    av_fast_malloc(&s->ljpeg_buffer, &s->ljpeg_buffer_size,
                   (unsigned)s->mb_width * 4 * sizeof(s->ljpeg_buffer[0][0]));
    buffer = s->ljpeg_buffer;

    for (i = 0; i < 3; i++)
        buffer[0][i] = 1 << (s->bits - 1);

    for (mb_y = 0; mb_y < s->mb_height; mb_y++)
    {
        uint8_t *ptr = s->picture.data[0] + (linesize * mb_y);

        if (s->interlaced && s->bottom_field)
            ptr += linesize >> 1;

        for (i = 0; i < 3; i++)
            top[i] = left[i] = topleft[i] = buffer[0][i];

        for (mb_x = 0; mb_x < s->mb_width; mb_x++)
        {
            int modified_predictor = predictor;

            if (s->restart_interval && !s->restart_count)
            {
                s->restart_count = s->restart_interval;
                resync_mb_x = mb_x;
                resync_mb_y = mb_y;
                for(i=0; i<3; i++)
                    top[i] = left[i]= topleft[i]= 1 << (s->bits - 1);
            }
            if (mb_y == resync_mb_y || mb_y == resync_mb_y+1 && mb_x < resync_mb_x || !mb_x)
                modified_predictor = 1;

            for (i=0; i<nb_components; i++)
            {
                int pred, dc;

                topleft[i] = top[i];
                top[i] = buffer[mb_x][i];

                switch(modified_predictor)
                {
                case 0:
                    pred= 0;
                    break;
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

                dc = mjpeg_decode_dc(s, s->dc_index[i]);
                if(dc == 0xFFFF)
                    return -1;

                left[i] = buffer[mb_x][i] =
                              mask & (pred + (dc << point_transform));
            }

            if (s->restart_interval && !--s->restart_count)
            {
                align_get_bits(&s->gb);
                skip_bits(&s->gb, 16);
            }
        }

        if (s->rct)
        {
            for (mb_x = 0; mb_x < s->mb_width; mb_x++)
            {
                ptr[3*mb_x + 1] = buffer[mb_x][0] - ((buffer[mb_x][1] + buffer[mb_x][2] - 0x200) >> 2);
                ptr[3*mb_x + 0] = buffer[mb_x][1] + ptr[3*mb_x + 1];
                ptr[3*mb_x + 2] = buffer[mb_x][2] + ptr[3*mb_x + 1];
            }
        }
        else if (s->pegasus_rct)
        {
            for (mb_x = 0; mb_x < s->mb_width; mb_x++)
            {
                ptr[3*mb_x + 1] = buffer[mb_x][0] - ((buffer[mb_x][1] + buffer[mb_x][2]) >> 2);
                ptr[3*mb_x + 0] = buffer[mb_x][1] + ptr[3*mb_x + 1];
                ptr[3*mb_x + 2] = buffer[mb_x][2] + ptr[3*mb_x + 1];
            }
        }
        else
        {
            for(i=0; i<nb_components; i++)
            {
                int c= s->comp_index[i];
                for(mb_x = 0; mb_x < s->mb_width; mb_x++)
                {
                    ptr[3*mb_x+2-c] = buffer[mb_x][i];
                }
            }
        }
    }
    return 0;
}

static int ljpeg_decode_yuv_scan(MJpegDecodeContext *s, int predictor,
                                 int point_transform)
{
    int i, mb_x, mb_y;
    const int nb_components=s->nb_components;
    int bits= (s->bits+7)&~7;
    int resync_mb_y = 0;
    int resync_mb_x = 0;

    point_transform += bits - s->bits;

    do
    {
        if (!(nb_components==1 || nb_components==3))
        {
            av_log(((void *)0), 0, "Assertion %s failed at %s:%d\n", "nb_components==1 || nb_components==3", "mjpegdec.c", 859);
            abort();
        }
    }
    while (0);

    for (mb_y = 0; mb_y < s->mb_height; mb_y++)
    {
        for (mb_x = 0; mb_x < s->mb_width; mb_x++)
        {
            if (s->restart_interval && !s->restart_count)
            {
                s->restart_count = s->restart_interval;
                resync_mb_x = mb_x;
                resync_mb_y = mb_y;
            }

            if(!mb_x || mb_y == resync_mb_y || mb_y == resync_mb_y+1 && mb_x < resync_mb_x || s->interlaced)
            {
                int toprow = mb_y == resync_mb_y || mb_y == resync_mb_y+1 && mb_x < resync_mb_x;
                int leftcol = !mb_x || mb_y == resync_mb_y && mb_x == resync_mb_x;
                for (i = 0; i < nb_components; i++)
                {
                    uint8_t *ptr;
                    uint16_t *ptr16;
                    int n, h, v, x, y, c, j, linesize;
                    n = s->nb_blocks[i];
                    c = s->comp_index[i];
                    h = s->h_scount[i];
                    v = s->v_scount[i];
                    x = 0;
                    y = 0;
                    linesize= s->linesize[c];

                    if(bits>8) linesize /= 2;

                    for(j=0; j<n; j++)
                    {
                        int pred, dc;

                        dc = mjpeg_decode_dc(s, s->dc_index[i]);
                        if(dc == 0xFFFF)
                            return -1;
                        if(bits<=8)
                        {
                            ptr = s->picture.data[c] + (linesize * (v * mb_y + y)) + (h * mb_x + x);
                            if(y==0 && toprow)
                            {
                                if(x==0 && leftcol)
                                {
                                    pred= 1 << (bits - 1);
                                }
                                else
                                {
                                    pred= ptr[-1];
                                }
                            }
                            else
                            {
                                if(x==0 && leftcol)
                                {
                                    pred= ptr[-linesize];
                                }
                                else
                                {
                                    switch(predictor)
                                    {
                                    case 0:
                                        pred= 0;
                                        break;
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
                            pred &= (-1)<<(8-s->bits);
                            *ptr= pred + (dc << point_transform);
                        }
                        else
                        {
                            ptr16 = (uint16_t*)(s->picture.data[c] + 2*(linesize * (v * mb_y + y)) + 2*(h * mb_x + x));
                            if(y==0 && toprow)
                            {
                                if(x==0 && leftcol)
                                {
                                    pred= 1 << (bits - 1);
                                }
                                else
                                {
                                    pred= ptr16[-1];
                                }
                            }
                            else
                            {
                                if(x==0 && leftcol)
                                {
                                    pred= ptr16[-linesize];
                                }
                                else
                                {
                                    switch(predictor)
                                    {
                                    case 0:
                                        pred= 0;
                                        break;
                                    case 1:
                                        pred= ptr16[-1];
                                        break;
                                    case 2:
                                        pred= ptr16[-linesize];
                                        break;
                                    case 3:
                                        pred= ptr16[-linesize-1];
                                        break;
                                    case 4:
                                        pred= ptr16[-1] + ptr16[-linesize] - ptr16[-linesize-1];
                                        break;
                                    case 5:
                                        pred= ptr16[-1] + ((ptr16[-linesize] - ptr16[-linesize-1])>>1);
                                        break;
                                    case 6:
                                        pred= ptr16[-linesize] + ((ptr16[-1] - ptr16[-linesize-1])>>1);
                                        break;
                                    default:
                                    case 7:
                                        pred= (ptr16[-1] + ptr16[-linesize])>>1;
                                        break;
                                    };
                                }
                            }

                            if (s->interlaced && s->bottom_field)
                                ptr16 += linesize >> 1;
                            pred &= (-1)<<(16-s->bits);
                            *ptr16= pred + (dc << point_transform);
                        }
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
                for (i = 0; i < nb_components; i++)
                {
                    uint8_t *ptr;
                    uint16_t *ptr16;
                    int n, h, v, x, y, c, j, linesize, dc;
                    n = s->nb_blocks[i];
                    c = s->comp_index[i];
                    h = s->h_scount[i];
                    v = s->v_scount[i];
                    x = 0;
                    y = 0;
                    linesize = s->linesize[c];

                    if(bits>8) linesize /= 2;

                    for (j = 0; j < n; j++)
                    {
                        int pred;

                        dc = mjpeg_decode_dc(s, s->dc_index[i]);
                        if(dc == 0xFFFF)
                            return -1;
                        if(bits<=8)
                        {
                            ptr = s->picture.data[c] +
                                  (linesize * (v * mb_y + y)) +
                                  (h * mb_x + x);
                            switch(predictor)
                            {
                            case 0:
                                pred= 0;
                                break;
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

                            pred &= (-1)<<(8-s->bits);
                            *ptr = pred + (dc << point_transform);
                        }
                        else
                        {
                            ptr16 = (uint16_t*)(s->picture.data[c] + 2*(linesize * (v * mb_y + y)) + 2*(h * mb_x + x));
                            switch(predictor)
                            {
                            case 0:
                                pred= 0;
                                break;
                            case 1:
                                pred= ptr16[-1];
                                break;
                            case 2:
                                pred= ptr16[-linesize];
                                break;
                            case 3:
                                pred= ptr16[-linesize-1];
                                break;
                            case 4:
                                pred= ptr16[-1] + ptr16[-linesize] - ptr16[-linesize-1];
                                break;
                            case 5:
                                pred= ptr16[-1] + ((ptr16[-linesize] - ptr16[-linesize-1])>>1);
                                break;
                            case 6:
                                pred= ptr16[-linesize] + ((ptr16[-1] - ptr16[-linesize-1])>>1);
                                break;
                            default:
                            case 7:
                                pred= (ptr16[-1] + ptr16[-linesize])>>1;
                                break;
                            };

                            pred &= (-1)<<(16-s->bits);
                            *ptr16= pred + (dc << point_transform);
                        }

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

static __attribute__((always_inline)) inline void mjpeg_copy_block(uint8_t *dst, const uint8_t *src,
        int linesize, int lowres)
{
    switch (lowres)
    {
    case 0:
        copy_block8(dst, src, linesize, linesize, 8);
        break;
    case 1:
        copy_block4(dst, src, linesize, linesize, 4);
        break;
    case 2:
        copy_block2(dst, src, linesize, linesize, 2);
        break;
    case 3:
        *dst = *src;
        break;
    }
}

static int mjpeg_decode_scan(MJpegDecodeContext *s, int nb_components, int Ah,
                             int Al, const uint8_t *mb_bitmask,
                             const AVFrame *reference)
{
    int i, mb_x, mb_y;
    uint8_t *data[4];
    const uint8_t *reference_data[4];
    int linesize[4];
    GetBitContext mb_bitmask_gb;

    if (mb_bitmask)
        init_get_bits(&mb_bitmask_gb, mb_bitmask, s->mb_width * s->mb_height);

    if (s->flipped && s->avctx->lowres)
    {
        av_log(s->avctx, 16, "Can not flip image with lowres\n");
        s->flipped = 0;
    }

    for (i = 0; i < nb_components; i++)
    {
        int c = s->comp_index[i];
        data[c] = s->picture_ptr->data[c];
        reference_data[c] = reference ? reference->data[c] : ((void *)0);
        linesize[c] = s->linesize[c];
        s->coefs_finished[c] |= 1;
        if (s->flipped && !(s->avctx->flags & 0x4000))
        {

            int offset = (linesize[c] * (s->v_scount[i] *
                                         (8 * s->mb_height - ((s->height / s->v_max) & 7)) - 1));
            data[c] += offset;
            reference_data[c] += offset;
            linesize[c] *= -1;
        }
    }

    for (mb_y = 0; mb_y < s->mb_height; mb_y++)
    {
        for (mb_x = 0; mb_x < s->mb_width; mb_x++)
        {
            const int copy_mb = mb_bitmask && !get_bits1(&mb_bitmask_gb);

            if (s->restart_interval && !s->restart_count)
                s->restart_count = s->restart_interval;

            if (get_bits_left(&s->gb) < 0)
            {
                av_log(s->avctx, 16, "overread %d\n",
                       -get_bits_left(&s->gb));
                return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
            }
            for (i = 0; i < nb_components; i++)
            {
                uint8_t *ptr;
                int n, h, v, x, y, c, j;
                int block_offset;
                n = s->nb_blocks[i];
                c = s->comp_index[i];
                h = s->h_scount[i];
                v = s->v_scount[i];
                x = 0;
                y = 0;
                for (j = 0; j < n; j++)
                {
                    block_offset = (((linesize[c] * (v * mb_y + y) * 8) +
                                     (h * mb_x + x) * 8) >> s->avctx->lowres);

                    if (s->interlaced && s->bottom_field)
                        block_offset += linesize[c] >> 1;
                    ptr = data[c] + block_offset;
                    if (!s->progressive)
                    {
                        if (copy_mb)
                            mjpeg_copy_block(ptr, reference_data[c] + block_offset,
                                             linesize[c], s->avctx->lowres);
                        else
                        {
                            s->dsp.clear_block(s->block);
                            if (decode_block(s, s->block, i,
                                             s->dc_index[i], s->ac_index[i],
                                             s->quant_matrixes[s->quant_index[c]]) < 0)
                            {
                                av_log(s->avctx, 16,
                                       "error y=%d x=%d\n", mb_y, mb_x);
                                return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
                            }

                            s->dsp.idct_put(ptr, linesize[c], s->block);
                        }
                    }
                    else
                    {
                        int block_idx = s->block_stride[c] * (v * mb_y + y) +
                                        (h * mb_x + x);
                        DCTELEM *block = s->blocks[c][block_idx];
                        if (Ah)
                            block[0] += get_bits1(&s->gb) *
                                        s->quant_matrixes[s->quant_index[c]][0] << Al;
                        else if (decode_dc_progressive(s, block, i, s->dc_index[i],
                                                       s->quant_matrixes[s->quant_index[c]],
                                                       Al) < 0)
                        {
                            av_log(s->avctx, 16,
                                   "error y=%d x=%d\n", mb_y, mb_x);
                            return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
                        }
                    }
                    do
                    {
                        if (0) av_log(s->avctx, 48, "mb: %d %d processed\n", mb_y, mb_x);
                    }
                    while (0);
                    do
                    {
                        if (0) av_log(s->avctx, 48, "%d %d %d %d %d %d %d %d \n", mb_x, mb_y, x, y, c, s->bottom_field, (v * mb_y + y) * 8, (h * mb_x + x) * 8);
                    }
                    while (0)

                        ;
                    if (++x == h)
                    {
                        x = 0;
                        y++;
                    }
                }
            }

            handle_rstn(s, nb_components);
        }
    }
    return 0;
}

static int mjpeg_decode_scan_progressive_ac(MJpegDecodeContext *s, int ss,
        int se, int Ah, int Al)
{
    int mb_x, mb_y;
    int EOBRUN = 0;
    int c = s->comp_index[0];
    uint8_t *data = s->picture.data[c];
    int linesize = s->linesize[c];
    int last_scan = 0;
    int16_t *quant_matrix = s->quant_matrixes[s->quant_index[c]];

    if (se > 63)
    {
        av_log(s->avctx, 16, "SE %d is too large\n", se);
        return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
    }

    if (!Al)
    {
        s->coefs_finished[c] |= (1LL << (se + 1)) - (1LL << ss);
        last_scan = !~s->coefs_finished[c];
    }

    if (s->interlaced && s->bottom_field)
        data += linesize >> 1;

    s->restart_count = 0;

    for (mb_y = 0; mb_y < s->mb_height; mb_y++)
    {
        uint8_t *ptr = data + (mb_y * linesize * 8 >> s->avctx->lowres);
        int block_idx = mb_y * s->block_stride[c];
        DCTELEM (*block)[64] = &s->blocks[c][block_idx];
        uint8_t *last_nnz = &s->last_nnz[c][block_idx];
        for (mb_x = 0; mb_x < s->mb_width; mb_x++, block++, last_nnz++)
        {
            int ret;
            if (s->restart_interval && !s->restart_count)
                s->restart_count = s->restart_interval;

            if (Ah)
                ret = decode_block_refinement(s, *block, last_nnz, s->ac_index[0],
                                              quant_matrix, ss, se, Al, &EOBRUN);
            else
                ret = decode_block_progressive(s, *block, last_nnz, s->ac_index[0],
                                               quant_matrix, ss, se, Al, &EOBRUN);
            if (ret < 0)
            {
                av_log(s->avctx, 16,
                       "error y=%d x=%d\n", mb_y, mb_x);
                return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
            }

            if (last_scan)
            {
                s->dsp.idct_put(ptr, linesize, *block);
                ptr += 8 >> s->avctx->lowres;
            }
            handle_rstn(s, 0);
        }
    }
    return 0;
}

int ff_mjpeg_decode_sos(MJpegDecodeContext *s, const uint8_t *mb_bitmask,
                        const AVFrame *reference)
{
    int len, nb_components, i, h, v, predictor, point_transform;
    int index, id, ret;
    const int block_size = s->lossless ? 1 : 8;
    int ilv, prev_shift;

    if (!s->got_picture)
    {
        av_log(s->avctx, 24,
               "Can not process SOS before SOF, skipping\n");
        return -1;
    }

    do
    {
        if (!(s->picture_ptr->data[0]))
        {
            av_log(((void *)0), 0, "Assertion %s failed at %s:%d\n", "s->picture_ptr->data[0]", "mjpegdec.c", 1190);
            abort();
        }
    }
    while (0);

    len = get_bits(&s->gb, 16);
    nb_components = get_bits(&s->gb, 8);
    if (nb_components == 0 || nb_components > 4)
    {
        av_log(s->avctx, 16,
               "decode_sos: nb_components (%d) unsupported\n", nb_components);
        return (-(int)(('P') | (('A') << 8) | (('W') << 16) | ((unsigned)('E') << 24)));
    }
    if (len != 6 + 2 * nb_components)
    {
        av_log(s->avctx, 16, "decode_sos: invalid len (%d)\n", len);
        return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
    }
    for (i = 0; i < nb_components; i++)
    {
        id = get_bits(&s->gb, 8) - 1;
        av_log(s->avctx, 48, "component: %d\n", id);

        for (index = 0; index < s->nb_components; index++)
            if (id == s->component_id[index])
                break;
        if (index == s->nb_components)
        {
            av_log(s->avctx, 16,
                   "decode_sos: index(%d) out of components\n", index);
            return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
        }

        if (s->avctx->codec_tag == (('M') | (('T') << 8) | (('S') << 16) | ((unsigned)('J') << 24))
                && nb_components == 3 && s->nb_components == 3 && i)
            index = 3 - i;

        if(nb_components == 3 && s->nb_components == 3 && s->avctx->pix_fmt == AV_PIX_FMT_GBRP)
            index = (i+2)%3;
        if(nb_components == 1 && s->nb_components == 3 && s->avctx->pix_fmt == AV_PIX_FMT_GBRP)
            index = (index+2)%3;

        s->comp_index[i] = index;

        s->nb_blocks[i] = s->h_count[index] * s->v_count[index];
        s->h_scount[i] = s->h_count[index];
        s->v_scount[i] = s->v_count[index];

        s->dc_index[i] = get_bits(&s->gb, 4);
        s->ac_index[i] = get_bits(&s->gb, 4);

        if (s->dc_index[i] < 0 || s->ac_index[i] < 0 ||
                s->dc_index[i] >= 4 || s->ac_index[i] >= 4)
            goto out_of_range;
        if (!s->vlcs[0][s->dc_index[i]].table || !(s->progressive ? s->vlcs[2][s->ac_index[0]].table : s->vlcs[1][s->ac_index[i]].table))
            goto out_of_range;
    }

    predictor = get_bits(&s->gb, 8);
    ilv = get_bits(&s->gb, 8);
    if(s->avctx->codec_tag != (((const union unaligned_32 *) ("CJPG"))->l))
    {
        prev_shift = get_bits(&s->gb, 4);
        point_transform = get_bits(&s->gb, 4);
    }
    else
        prev_shift = point_transform = 0;

    if (nb_components > 1)
    {

        s->mb_width = (s->width + s->h_max * block_size - 1) / (s->h_max * block_size);
        s->mb_height = (s->height + s->v_max * block_size - 1) / (s->v_max * block_size);
    }
    else if (!s->ls)
    {
        h = s->h_max / s->h_scount[0];
        v = s->v_max / s->v_scount[0];
        s->mb_width = (s->width + h * block_size - 1) / (h * block_size);
        s->mb_height = (s->height + v * block_size - 1) / (v * block_size);
        s->nb_blocks[0] = 1;
        s->h_scount[0] = 1;
        s->v_scount[0] = 1;
    }

    if (s->avctx->debug & 1)
        av_log(s->avctx, 48, "%s %s p:%d >>:%d ilv:%d bits:%d skip:%d %s comp:%d\n",
               s->lossless ? "lossless" : "sequential DCT", s->rgb ? "RGB" : "",
               predictor, point_transform, ilv, s->bits, s->mjpb_skiptosod,
               s->pegasus_rct ? "PRCT" : (s->rct ? "RCT" : ""), nb_components);



    for (i = s->mjpb_skiptosod; i > 0; i--)
        skip_bits(&s->gb, 8);

next_field:
    for (i = 0; i < nb_components; i++)
        s->last_dc[i] = 1024;

    if (s->lossless)
    {
        do
        {
            if (!(s->picture_ptr == &s->picture))
            {
                av_log(((void *)0), 0, "Assertion %s failed at %s:%d\n", "s->picture_ptr == &s->picture", "mjpegdec.c", 1279);
                abort();
            }
        }
        while (0);
        if (1 && s->ls)
        {



            if ((ret = ff_jpegls_decode_picture(s, predictor,
                                                point_transform, ilv)) < 0)
                return ret;
        }
        else
        {
            if (s->rgb)
            {
                if ((ret = ljpeg_decode_rgb_scan(s, nb_components, predictor, point_transform)) < 0)
                    return ret;
            }
            else
            {
                if ((ret = ljpeg_decode_yuv_scan(s, predictor, point_transform)) < 0)
                    return ret;
            }
        }
    }
    else
    {
        if (s->progressive && predictor)
        {
            do
            {
                if (!(s->picture_ptr == &s->picture))
                {
                    av_log(((void *)0), 0, "Assertion %s failed at %s:%d\n", "s->picture_ptr == &s->picture", "mjpegdec.c", 1298);
                    abort();
                }
            }
            while (0);
            if ((ret = mjpeg_decode_scan_progressive_ac(s, predictor,
                       ilv, prev_shift,
                       point_transform)) < 0)
                return ret;
        }
        else
        {
            if ((ret = mjpeg_decode_scan(s, nb_components,
                                         prev_shift, point_transform,
                                         mb_bitmask, reference)) < 0)
                return ret;
        }
    }

    if (s->interlaced &&
            get_bits_left(&s->gb) > 32 &&
            show_bits(&s->gb, 8) == 0xFF)
    {
        GetBitContext bak = s->gb;
        align_get_bits(&bak);
        if (show_bits(&bak, 16) == 0xFFD1)
        {
            av_log(s->avctx, 48, "AVRn interlaced picture marker found\n");
            s->gb = bak;
            skip_bits(&s->gb, 16);
            s->bottom_field ^= 1;

            goto next_field;
        }
    }

    emms_c();
    return 0;
out_of_range:
    av_log(s->avctx, 16, "decode_sos: ac/dc index out of range\n");
    return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
}

static int mjpeg_decode_dri(MJpegDecodeContext *s)
{
    if (get_bits(&s->gb, 16) != 4)
        return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
    s->restart_interval = get_bits(&s->gb, 16);
    s->restart_count = 0;
    av_log(s->avctx, 48, "restart interval: %d\n",
           s->restart_interval);

    return 0;
}

static int mjpeg_decode_app(MJpegDecodeContext *s)
{
    int len, id, i;

    len = get_bits(&s->gb, 16);
    if (len < 5)
        return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
    if (8 * len > get_bits_left(&s->gb))
        return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));

    id = get_bits_long(&s->gb, 32);
    id = av_bswap32(id);
    len -= 6;

    if (s->avctx->debug & 0x00000100)
        av_log(s->avctx, 48, "APPx %8X\n", id);




    if (id == (((const union unaligned_32 *) ("AVI1"))->l))
    {







        s->buggy_avid = 1;
        i = get_bits(&s->gb, 8);
        len--;
        av_log(s->avctx, 48, "polarity %d\n", i);






        goto out;
    }



    if (id == (((const union unaligned_32 *) ("JFIF"))->l))
    {
        int t_w, t_h, v1, v2;
        skip_bits(&s->gb, 8);
        v1 = get_bits(&s->gb, 8);
        v2 = get_bits(&s->gb, 8);
        skip_bits(&s->gb, 8);

        s->avctx->sample_aspect_ratio.num = get_bits(&s->gb, 16);
        s->avctx->sample_aspect_ratio.den = get_bits(&s->gb, 16);

        if (s->avctx->debug & 1)
            av_log(s->avctx, 32,
                   "mjpeg: JFIF header found (version: %x.%x) SAR=%d/%d\n",
                   v1, v2,
                   s->avctx->sample_aspect_ratio.num,
                   s->avctx->sample_aspect_ratio.den);

        t_w = get_bits(&s->gb, 8);
        t_h = get_bits(&s->gb, 8);
        if (t_w && t_h)
        {

            if (len -10 - (t_w * t_h * 3) > 0)
                len -= t_w * t_h * 3;
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
            av_log(s->avctx, 32,
                   "Pegasus lossless jpeg header found\n");
        skip_bits(&s->gb, 16);
        skip_bits(&s->gb, 16);
        skip_bits(&s->gb, 16);
        skip_bits(&s->gb, 16);
        switch (get_bits(&s->gb, 8))
        {
        case 1:
            s->rgb = 1;
            s->pegasus_rct = 0;
            break;
        case 2:
            s->rgb = 1;
            s->pegasus_rct = 1;
            break;
        default:
            av_log(s->avctx, 16, "unknown colorspace\n");
        }
        len -= 9;
        goto out;
    }


    if ((s->start_code == APP1) && (len > (0x28 - 8)))
    {
        id = get_bits_long(&s->gb, 32);
        id = av_bswap32(id);
        len -= 4;

        if (id == (((const union unaligned_32 *) ("mjpg"))->l))
        {
# 1467 "mjpegdec.c"
            if (s->avctx->debug & 1)
                av_log(s->avctx, 32, "mjpeg: Apple MJPEG-A header found\n");
        }
    }

out:

    if (len < 0)
        av_log(s->avctx, 16,
               "mjpeg: error, decode_app parser read over the end\n");
    while (--len > 0)
        skip_bits(&s->gb, 8);

    return 0;
}

static int mjpeg_decode_com(MJpegDecodeContext *s)
{
    int len = get_bits(&s->gb, 16);
    if (len >= 2 && 8 * len - 16 <= get_bits_left(&s->gb))
    {
        char *cbuf = av_malloc(len - 1);
        if (cbuf)
        {
            int i;
            for (i = 0; i < len - 2; i++)
                cbuf[i] = get_bits(&s->gb, 8);
            if (i > 0 && cbuf[i - 1] == '\n')
                cbuf[i - 1] = 0;
            else
                cbuf[i] = 0;

            if (s->avctx->debug & 1)
                av_log(s->avctx, 32, "comment: '%s'\n", cbuf);


            if (!strcmp(cbuf, "AVID"))
            {
                s->buggy_avid = 1;
            }
            else if (!strcmp(cbuf, "CS=ITU601"))
                s->cs_itu601 = 1;
            else if ((len > 31 && !strncmp(cbuf, "Intel(R) JPEG Library, version 1", 32)) ||
                     (len > 19 && !strncmp(cbuf, "Metasoft MJPEG Codec", 20)))
                s->flipped = 1;

            av_free(cbuf);
        }
    }

    return 0;
}



static int find_marker(const uint8_t **pbuf_ptr, const uint8_t *buf_end)
{
    const uint8_t *buf_ptr;
    unsigned int v, v2;
    int val;
    int skipped = 0;

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
        skipped++;
    }
    val = -1;
found:
    do
    {
        if (0) av_log(((void *)0), 48, "find_marker skipped %d bytes\n", skipped);
    }
    while (0);
    *pbuf_ptr = buf_ptr;
    return val;
}

int ff_mjpeg_find_marker(MJpegDecodeContext *s,
                         const uint8_t **buf_ptr, const uint8_t *buf_end,
                         const uint8_t **unescaped_buf_ptr,
                         int *unescaped_buf_size)
{
    int start_code;
    start_code = find_marker(buf_ptr, buf_end);

    av_fast_padded_malloc(&s->buffer, &s->buffer_size, buf_end - *buf_ptr);
    if (!s->buffer)
        return (-(12));


    if (start_code == SOS && !s->ls)
    {
        const uint8_t *src = *buf_ptr;
        uint8_t *dst = s->buffer;

        while (src < buf_end)
        {
            uint8_t x = *(src++);

            *(dst++) = x;
            if (s->avctx->codec_id != AV_CODEC_ID_THP)
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
        *unescaped_buf_ptr = s->buffer;
        *unescaped_buf_size = dst - s->buffer;
        memset(s->buffer + *unescaped_buf_size, 0,
               16);

        av_log(s->avctx, 48, "escaping removed %td bytes\n",
               (buf_end - *buf_ptr) - (dst - s->buffer));
    }
    else if (start_code == SOS && s->ls)
    {
        const uint8_t *src = *buf_ptr;
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
                while ((src + t < buf_end) && x == 0xff)
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


        while (b < t)
        {
            uint8_t x = src[b++];
            put_bits(&pb, 8, x);
            if (x == 0xFF)
            {
                x = src[b++];
                put_bits(&pb, 7, x);
                bit_count--;
            }
        }
        flush_put_bits(&pb);

        *unescaped_buf_ptr = dst;
        *unescaped_buf_size = (bit_count + 7) >> 3;
        memset(s->buffer + *unescaped_buf_size, 0,
               16);
    }
    else
    {
        *unescaped_buf_ptr = *buf_ptr;
        *unescaped_buf_size = buf_end - *buf_ptr;
    }

    return start_code;
}

int ff_mjpeg_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
                          AVPacket *avpkt)
{
    const uint8_t *buf = avpkt->data;
    int buf_size = avpkt->size;
    MJpegDecodeContext *s = avctx->priv_data;
    const uint8_t *buf_end, *buf_ptr;
    const uint8_t *unescaped_buf_ptr;
    int unescaped_buf_size;
    int start_code;
    int i, index;
    int ret = 0;
    AVFrame *picture = data;

    buf_ptr = buf;
    buf_end = buf + buf_size;
    while (buf_ptr < buf_end)
    {

        start_code = ff_mjpeg_find_marker(s, &buf_ptr, buf_end,
                                          &unescaped_buf_ptr,
                                          &unescaped_buf_size);

        if (start_code < 0)
        {
            goto the_end;
        }
        else if (unescaped_buf_size > (1U<<28))
        {
            av_log(avctx, 16, "MJPEG packet 0x%x too big (0x%x/0x%x), corrupt data?\n",
                   start_code, unescaped_buf_size, buf_size);
            return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
        }
        else
        {
            av_log(avctx, 48, "marker=%x avail_size_in_buf=%td\n",
                   start_code, buf_end - buf_ptr);

            init_get_bits(&s->gb, unescaped_buf_ptr, unescaped_buf_size * 8);

            s->start_code = start_code;
            if (s->avctx->debug & 0x00000100)
                av_log(avctx, 48, "startcode: %X\n", start_code);


            if (start_code >= 0xd0 && start_code <= 0xd7)
                av_log(avctx, 48,
                       "restart marker: %d\n", start_code & 0x0f);

            else if (start_code >= APP0 && start_code <= APP15)
                mjpeg_decode_app(s);

            else if (start_code == COM)
                mjpeg_decode_com(s);

            ret = -1;
            switch (start_code)
            {
            case SOI:
                s->restart_interval = 0;
                s->restart_count = 0;

                break;
            case DQT:
                ff_mjpeg_decode_dqt(s);
                break;
            case DHT:
                if ((ret = ff_mjpeg_decode_dht(s)) < 0)
                {
                    av_log(avctx, 16, "huffman table decode error\n");
                    goto fail;
                }
                break;
            case SOF0:
            case SOF1:
                s->lossless = 0;
                s->ls = 0;
                s->progressive = 0;
                if ((ret = ff_mjpeg_decode_sof(s)) < 0)
                    goto fail;
                break;
            case SOF2:
                s->lossless = 0;
                s->ls = 0;
                s->progressive = 1;
                if ((ret = ff_mjpeg_decode_sof(s)) < 0)
                    goto fail;
                break;
            case SOF3:
                s->lossless = 1;
                s->ls = 0;
                s->progressive = 0;
                if ((ret = ff_mjpeg_decode_sof(s)) < 0)
                    goto fail;
                break;
            case SOF48:
                s->lossless = 1;
                s->ls = 1;
                s->progressive = 0;
                if ((ret = ff_mjpeg_decode_sof(s)) < 0)
                    goto fail;
                break;
            case LSE:
                if (!1 ||
                        (ret = ff_jpegls_decode_lse(s)) < 0)
                    goto fail;
                break;
            case EOI:
eoi_parser:
                s->cur_scan = 0;
                if (!s->got_picture)
                {
                    av_log(avctx, 24,
                           "Found EOI before any SOF, ignoring\n");
                    break;
                }
                if (s->interlaced)
                {
                    s->bottom_field ^= 1;

                    if (s->bottom_field == !s->interlace_polarity)
                        break;
                }
                *picture = *s->picture_ptr;
                *got_frame = 1;
                s->got_picture = 0;

                if (!s->lossless)
                {
                    picture->quality = ((((s->qscale[0]) > (s->qscale[1]) ? (s->qscale[0]) : (s->qscale[1]))) > (s->qscale[2]) ? (((s->qscale[0]) > (s->qscale[1]) ? (s->qscale[0]) : (s->qscale[1]))) : (s->qscale[2]))

                                           ;
                    picture->qstride = 0;
                    picture->qscale_table = s->qscale_table;
                    memset(picture->qscale_table, picture->quality,
                           (s->width + 15) / 16);
                    if (avctx->debug & 16)
                        av_log(avctx, 48,
                               "QP: %d\n", picture->quality);
                    picture->quality *= 118;
                }

                goto the_end;
            case SOS:
                if ((ret = ff_mjpeg_decode_sos(s, ((void *)0), ((void *)0))) < 0 &&
                        (avctx->err_recognition & (1<<3)))
                    goto fail;
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
                av_log(avctx, 16,
                       "mjpeg: unsupported coding type (%x)\n", start_code);
                break;
            }


            buf_ptr += (get_bits_count(&s->gb) + 7) / 8;
            av_log(avctx, 48,
                   "marker parser used %d bytes (%d bits)\n",
                   (get_bits_count(&s->gb) + 7) / 8, get_bits_count(&s->gb));
        }
    }
    if (s->got_picture)
{
        av_log(avctx, 24, "EOI missing, emulating\n");
        goto eoi_parser;
    }
    av_log(avctx, 8, "No JPEG data found in image\n");
    return (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));
fail:
    s->got_picture = 0;
    return ret;
the_end:
    if (s->upscale_h)
    {
        uint8_t *line = s->picture_ptr->data[s->upscale_h];
        do
        {
            if (!(avctx->pix_fmt == AV_PIX_FMT_YUVJ444P || avctx->pix_fmt == AV_PIX_FMT_YUV444P || avctx->pix_fmt == AV_PIX_FMT_YUVJ440P || avctx->pix_fmt == AV_PIX_FMT_YUV440P))
            {
                av_log(((void *)0), 0, "Assertion %s failed at %s:%d\n", "avctx->pix_fmt == AV_PIX_FMT_YUVJ444P || avctx->pix_fmt == AV_PIX_FMT_YUV444P || avctx->pix_fmt == AV_PIX_FMT_YUVJ440P || avctx->pix_fmt == AV_PIX_FMT_YUV440P",


                       "mjpegdec.c"
# 1804 "mjpegdec.c"
                       ,


                       1807
# 1804 "mjpegdec.c"
                      );
                abort();
            }
        }
        while (0)


            ;
        for (i = 0; i < s->chroma_height; i++)
        {
            for (index = s->width - 1; index; index--)
                line[index] = (line[index / 2] + line[(index + 1) / 2]) >> 1;
            line += s->linesize[s->upscale_h];
        }
    }
    if (s->upscale_v)
    {
        uint8_t *dst = &((uint8_t *)s->picture_ptr->data[s->upscale_v])[(s->height - 1) * s->linesize[s->upscale_v]];
        do
        {
            if (!(avctx->pix_fmt == AV_PIX_FMT_YUVJ444P || avctx->pix_fmt == AV_PIX_FMT_YUV444P || avctx->pix_fmt == AV_PIX_FMT_YUVJ422P || avctx->pix_fmt == AV_PIX_FMT_YUV422P))
            {
                av_log(((void *)0), 0, "Assertion %s failed at %s:%d\n", "avctx->pix_fmt == AV_PIX_FMT_YUVJ444P || avctx->pix_fmt == AV_PIX_FMT_YUV444P || avctx->pix_fmt == AV_PIX_FMT_YUVJ422P || avctx->pix_fmt == AV_PIX_FMT_YUV422P",


                       "mjpegdec.c"
# 1816 "mjpegdec.c"
                       ,


                       1819
# 1816 "mjpegdec.c"
                      );
                abort();
            }
        }
        while (0)


            ;
        for (i = s->height - 1; i; i--)
        {
            uint8_t *src1 = &((uint8_t *)s->picture_ptr->data[s->upscale_v])[i / 2 * s->linesize[s->upscale_v]];
            uint8_t *src2 = &((uint8_t *)s->picture_ptr->data[s->upscale_v])[(i + 1) / 2 * s->linesize[s->upscale_v]];
            if (src1 == src2)
            {
                memcpy(dst, src1, s->width);
            }
            else
            {
                for (index = 0; index < s->width; index++)
                    dst[index] = (src1[index] + src2[index]) >> 1;
            }
            dst -= s->linesize[s->upscale_v];
        }
    }
    if (s->flipped && (s->avctx->flags & 0x4000))
    {
        int hshift, vshift, j;
        avcodec_get_chroma_sub_sample(s->avctx->pix_fmt, &hshift, &vshift);
        for (index=0; index<4; index++)
        {
            uint8_t *dst = s->picture_ptr->data[index];
            int w = s->width;
            int h = s->height;
            if(index && index<3)
            {
                w = -((-w) >> hshift);
                h = -((-h) >> vshift);
            }
            if(dst)
            {
                uint8_t *dst2 = dst + s->linesize[index]*(h-1);
                for (i=0; i<h/2; i++)
                {
                    for (j=0; j<w; j++)
                        do
                        {
                            int SWAP_tmp= dst2[j];
                            dst2[j]= dst[j];
                            dst[j]= SWAP_tmp;
                        }
                        while(0);
                    dst += s->linesize[index];
                    dst2 -= s->linesize[index];
                }
            }
        }
    }

    av_log(avctx, 48, "decode frame unused %td bytes\n",
           buf_end - buf_ptr);

    return buf_ptr - buf;
}

__attribute__((cold)) int ff_mjpeg_decode_end(AVCodecContext *avctx)
{
    MJpegDecodeContext *s = avctx->priv_data;
    int i, j;

    if (s->picture_ptr && s->picture_ptr->data[0])
        avctx->release_buffer(avctx, s->picture_ptr);

    av_free(s->buffer);
    av_free(s->qscale_table);
    av_freep(&s->ljpeg_buffer);
    s->ljpeg_buffer_size = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            ff_free_vlc(&s->vlcs[i][j]);
    }
    for (i = 0; i < 4; i++)
    {
        av_freep(&s->blocks[i]);
        av_freep(&s->last_nnz[i]);
    }
    return 0;
}

static void decode_flush(AVCodecContext *avctx)
{
    MJpegDecodeContext *s = avctx->priv_data;
    s->got_picture = 0;
}




static const AVOption options[] =
{
    {
        "extern_huff", "Use external huffman table.",
        __builtin_offsetof (MJpegDecodeContext, extern_huff), AV_OPT_TYPE_INT, { .i64 = 0 }, 0, 1, 16 | 2
    },
    { ((void *)0) },
};

static const AVClass mjpegdec_class =
{
    .class_name = "MJPEG decoder",
    .item_name = av_default_item_name,
    .option = options,
    .version = (52<<16 | 13<<8 | 100),
};

AVCodec ff_mjpeg_decoder =
{
    .name = "mjpeg",
    .type = AVMEDIA_TYPE_VIDEO,
    .id = AV_CODEC_ID_MJPEG,
    .priv_data_size = sizeof(MJpegDecodeContext),
    .init = ff_mjpeg_decode_init,
    .close = ff_mjpeg_decode_end,
    .decode = ff_mjpeg_decode_frame,
    .flush = decode_flush,
    .capabilities = 0x0002,
    .max_lowres = 3,
    .long_name = NULL_IF_CONFIG_SMALL("MJPEG (Motion JPEG)"),
    .priv_class = &mjpegdec_class,
};


AVCodec ff_thp_decoder =
{
    .name = "thp",
    .type = AVMEDIA_TYPE_VIDEO,
    .id = AV_CODEC_ID_THP,
    .priv_data_size = sizeof(MJpegDecodeContext),
    .init = ff_mjpeg_decode_init,
    .close = ff_mjpeg_decode_end,
    .decode = ff_mjpeg_decode_frame,
    .flush = decode_flush,
    .capabilities = 0x0002,
    .max_lowres = 3,
    .long_name = NULL_IF_CONFIG_SMALL("Nintendo Gamecube THP video"),
};
