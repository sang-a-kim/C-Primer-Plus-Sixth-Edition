#include <stdio.h>
#include <float.h>

int main()
{
  // round off errors (ex1)
  float a, b;
  a = 1.0E20f + 1.0f;
  b = a - 1.0E20f;
  printf("%f\n", b);

  // round off errors (ex2)
  float c = 0.0f;
  c = c + 0.01f; 
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;
  c = c + 0.01f;

  printf("%f\n", c); // 2진수로 표현하는 부동소수점에서는 0.01을 제대로 표현할 수가 없다.

  // overflow
  float max = 	3.402823466E+38F;
  printf("%f\n", max);

  max = max * 100.0f;

  printf("%f\n", max); // inf - infinite

  // underflow
  float min = 1.1401298464e-45f;
  printf("%e\n", min);
  min = min / 100.0f; // subnormal
  printf("%e\n", min);

  return 0;
}