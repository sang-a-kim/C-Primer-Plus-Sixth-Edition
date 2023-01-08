#include <stdio.h>

int main()
{
  char c = 'A';
  char d = 65; // d = 'A'

  printf("%c %hhd\n", c ,c);
  printf("%c %hhd\n", d, d);

  printf("%c %hhd\n", c + 1, c + 1);

  printf("\x23");

  printf("AB\tCEDF\n");
  printf("ABC\tEDF\n");

  printf("\\ \'HA+\' \'Hello\" \?\n");
}