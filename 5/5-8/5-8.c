#include <stdio.h>

int main()
{
  int a = 0;
  a++; // a = a + 1 or a += 1;
  printf("%d\n", a);

  ++a; // a = a + 1 or a += 1;
  printf("%d\n", a);

  double b = 0;
  b++;
  printf("%f\n", b);

  ++b;
  printf("%f\n", b);

  int count = 0;
  while (count < 10)
  {
    printf("%d", count++);
    printf("%d\n", count);
    
  }

  int x, y, z;
  x = 3, y = 4;
  z = (x + y++) * 5;
  printf("%d %d %d", x, y, z);
} 