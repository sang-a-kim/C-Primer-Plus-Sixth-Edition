#include <stdio.h>

int main()
{
  int num, sum = 0;
  int status;

  printf("Enter an integer (q to quit) : ");
  
  while (scanf("%d", &num))
  {
    sum += num;
    printf("Enter an next integer (q to quit) : ");
  }

  printf("Sum = %d\n", sum);
  

  return 0;
}