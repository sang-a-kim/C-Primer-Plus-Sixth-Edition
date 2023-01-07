#include <stdio.h>
// #include <stdint.h> // also included in inttypes.h
#include <inttypes.h>

int main()
{
  int i;
  int32_t i32; // 32 bit intetger
  int_least8_t i8; // smallest 8 bit
  int_fast8_t f8; // fatest minimun
  intmax_t imax; // biggest singed integers
  uintmax_t uimax; // biggesst unsigned integers

  i32 = 1004;

  printf("me32 = %d\n", i32);
  printf("me32 = %" "d" "\n", i32); // string is can be seperated
  printf("me32 = %" PRId32 "\n", i32);

  return 0;
}