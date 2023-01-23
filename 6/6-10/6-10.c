#include <stdio.h>

int main()
{
  /* 
    +=, -=, *=, /=, %=
   */

  int i = 1024;

  i = 1 + 10;

  i += 10;

  i %= 4;

  i = i * (1 + 2);
  i *= 1 + 2;
  i *= (1 + 2); // check precedence

  for (int i = 1; i < 10; i++)
    ;

  return 0;
}