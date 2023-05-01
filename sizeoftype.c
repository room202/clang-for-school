#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
  printf("========================================================================\n");
  printf("整数値型のサイズ\n");
  printf("========================================================================\n");
  printf("         int   : %luバイト(%lubit) : (%d～%d)\n", sizeof(int), sizeof(int) * 8,  INT_MIN, INT_MAX);
  printf("unsigned int   : %luバイト(%lubit) : (%11d～%u)\n", sizeof(unsigned int), sizeof(unsigned int) * 8, 0, UINT_MAX);
  printf("         long  : %luバイト(%lubit) : (%ld～%ld)\n", sizeof(long), sizeof(long) * 8, LONG_MIN, LONG_MAX);
  printf("unsigned long  : %luバイト(%lubit) : (%20d～%lu)\n", sizeof(unsigned long), sizeof(unsigned long) * 8, 0, ULONG_MAX);
  printf("         short : %luバイト(%lubit) : (%d～%d)\n", sizeof(short), sizeof(short) * 8, SHRT_MIN, SHRT_MAX);
  printf("unsigned short : %luバイト(%lubit) : (%6d～%d)\n", sizeof(unsigned short), sizeof(unsigned short) * 8, 0, USHRT_MAX);
  printf("         char  : %luバイト(%2lubit) : (%d～%d)\n", sizeof(char), sizeof(char) * 8, CHAR_MIN, CHAR_MAX);
  printf("unsigned char  : %luバイト(%2lubit) : (%4d～%d)\n", sizeof(unsigned char), sizeof(unsigned char) * 8,0, UCHAR_MAX);

  printf("========================================================================\n");
  printf("実数値型のサイズ\n");
  printf("========================================================================\n");
  printf("float  : %luバイト(%dbit) : (%e～%e)\n", sizeof(float), -FLT_MAX, FLT_MAX);
  printf("double : %luバイト(%dbit) : (%e～%e)\n", sizeof(double), -DBL_MAX, DBL_MAX);

  return 0;
}

/*
========================================================================
整数値型のサイズ
========================================================================
         char  : 1バイト( 8bit) : (-128～127)
unsigned char  : 1バイト( 8bit) : (   0～255)
         short : 2バイト(16bit) : (-32768～32767)
unsigned short : 2バイト(16bit) : (     0～65535)
         int   : 4バイト(32bit) : (-2147483648～2147483647) +-約21億
unsigned int   : 4バイト(32bit) : (          0～4294967295)  +約42億
         long  : 8バイト(64bit) : (-9223372036854775808～9223372036854775807)  +-約922京　
unsigned long  : 8バイト(64bit) : (                   0～18446744073709551615)  +約1844京
========================================================================
実数値型のサイズ
========================================================================
float  : 4バイト (-3.402823e+38～3.402823e+38)
double : 8バイト (-1.797693e+308～1.797693e+308)
*/