// nums.c
#include <stdio.h>
#include <limits.h>

int main(void)
{
  // char 1 바이트 (문자)
  char ch = 'A';
  printf("char:\n");
  printf("Value: %d\n", ch);
  printf("Max: %d\n", CHAR_MAX);
  printf("Min: %d\n", CHAR_MIN);

  // signed short int 2바이트 (정수))
  signed short int sshort = 1234;
  printf("\nsingned short int:\n");
  printf("Value: %d\n", sshort);
  printf("Max: %d\n", SHRT_MAX);
  printf("Min: %d\n", SHRT_MIN);

  // unsigned short int 2바이트 (정수)
  unsigned short int ushort = 1234U;
  printf("\nunsingned short int:\n");
  printf("Value: %u\n", ushort);
  printf("Max: %u\n", USHRT_MAX);

  // signed int 4바이트 (정수)
  signed int sint = 12345;
  printf("\nsingned int:\n");
  printf("Value: %d\n", sint);
  printf("Max: %d\n", INT_MAX);
  printf("Min: %d\n", INT_MIN);

  // unsigned int 4바이트 (정수)
  unsigned int uint = 12345U;
  printf("\nunsingned int:\n");
  printf("Value: %u\n", uint);
  printf("Max: %u\n", UINT_MAX);

  // long은 다른 운영체제에서 다른 바이트 크기
  // 보통 4byte이지만 Linux/Unix/Mac에서 8byte
  // Windows에서 long long하면 8byte

  // signed long int 4바이트 (정수)
  signed long int slong = 123456789L;
  printf("\nsingned long int:\n");
  printf("Value: %ld\n", slong);
  printf("Max: %ld\n", LONG_MAX); // limit.h의 상수
  printf("Min: %ld\n", LONG_MIN);

  // unsigned long int 4바이트 (정수)
  unsigned long int ulong = 123456789UL;
  printf("\nunsingned long int:\n");
  printf("Value: %lu\n", ulong);
  printf("Max: %lu\n", ULONG_MAX); // limit.h의 상수

  // float (항상 부호 있다) 4바이트 (실수)
  float f = 123.456f;
  printf("\nfloat int:\n");
  printf("Value: %f\n", f);
  // printf("Max: %d\n", LONG_MAX); // limit.h의 상수
  // printf("Min: %d\n", LONG_MIN);

  // double (항상 부호 있다) 8바이트 (실수)
  double d = 123456.7890123f;
  printf("\ndouble:\n");
  printf("Value: %.3f\n", d);
  // printf("Max: %d\n", LONG_MAX); // limit.h의 상수
  // printf("Min: %d\n", LONG_MIN);

  return 0;
}