#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  double d = 3.1415926535802342832954358235236435634516436243;

  printf("%c\n", 'A');
  printf("%s", "I love you\n");
  printf("Even if there's a small change,\
we owe this to everyone who's not in this room to try.\n");

  printf("\n");
  printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX); // Note overflow
  printf("%u %u %u\n", 1024, -1, UINT_MAX); // Note overflow

  printf("\n");
  printf("%f %f %lf\n", 3.141592f, d, d); // l in %lf is ignored
  printf("%a %A\n", d, d);
  printf("%e %E\n", d, d);

  printf("\n");
  printf("%g %g\n", 123456.789, 1233456.89);
  printf("%G %G\n", 123456.789, 1233456.89);
  printf("%g %g\n", 0.00012345, 0.000012345);
  printf("%G %G\n", 0.00012345, 0.000012345);

  printf("\n");
  printf("%o\n", 9);
  printf("%p\n", &d); // pointer of operator

  printf("\n");
  printf("%x %X\n", 11, 11);
  printf("%%\n", d);

  printf("\n");
  printf("%9d\n", 12345);
  printf("%09d\n", 12345);
  printf("%.2f\n", 3.141592);
  printf("%.20f %.20lf\n", d, d);

  printf("\n");
  int n_printed = printf("Counting!\n");
  printf("%u\n", n_printed);

  return 0;
}