#include <stdio.h>

long loop_factorial(int n);
long recursive_factorial(int n);

int main()
{
  int num = 5;

  printf("%d\n", loop_factorial(num));
  printf("%d\n", recursive_factorial(num));

  return 0;
}

long loop_factorial(int n)
{
  long value;
  for (value = 1; n > 1; n--)
  {
    value *= n;
  }

  return value;
}

long recursive_factorial(int n)
{
  if (n > 0)
  {
    return n * recursive_factorial(n - 1); // tail (end) recursion
  }
  else
    return 1;
}