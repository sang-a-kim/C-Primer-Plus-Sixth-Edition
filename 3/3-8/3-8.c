#include <stdio.h>

int main()
{
  unsigned int decimal = 1231243;
  unsigned int binary = 0b100101100100110001011;
  unsigned int oct = 04544613;
  unsigned int hex = 0X12C98B;

  printf("%u\n", decimal);
  printf("%u\n", binary);
  printf("%u\n", oct);
  printf("%u\n\n", hex);

  printf("%o %x %#o %#x %#X", decimal, decimal, decimal, decimal, decimal);

  return 0;
}