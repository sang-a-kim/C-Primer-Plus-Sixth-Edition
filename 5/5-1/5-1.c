#include <stdio.h>

int main()
{
  int n = 1;

label:
  printf("%d\n", n);
  n = n + 1;

  if (n == 10) goto out;

  goto label;

out: 

  return 0;
}