#include <stdio.h>

int main()
{
  /* promotion in assignments */
  short s = 64;
  int i =s;

  float f = 3.14f;
  double d = f;
  
  /* demotion in assginments */
  d = 1.25; 
  f = 1.25;
  // f = 1.123;

  /* ranking of types in operations */
  // long double > double > float
  // unsigned long long, long long
  // unsigned long, long
  // unsigned, int
  // short int, unsigned short int
  // signed char, char, unsinged char
  // _Bool
  // Ref Google 'Integer confersion rank'
  d = f + 1.234;
  f = f + 1.234;

  /* automatic promotion of fuction arguments */
  // 1. Function without prototypes
  // 2. Variadic functions (ellipsis)

  /* casting operators */
  d = (double)3.14f;
  i = 1.6 + 1.7;
  i = (int)1.6 + (int)1.7;

  /* more examples */
  char c;
  // int i;
  // float f;
  f = i = c ='A'; //65
  printf("%c %d %f\n", c, i, f);
  c = c + 2; //'C', 67
  i = f + 2 * c; // 65.0f + 2 * 67
  printf("%c %d %f\n", c, i, f); // 199
  c = 1106; //demlition, 1106 = 0b10001010010, 0b01010010 = 1106 % 256 = 82 = 'R'
  printf("%c\n", c);
  c = 83.99;
  printf("%c\n", c);

  return 0;

}