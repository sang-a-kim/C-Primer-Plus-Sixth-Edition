#include <stdio.h>
#include <stdbool.h>


int main()
{
  unsigned num;
  bool isPrime;

  printf("Enter the value : ");
  scanf("%d", &num);
  
  isPrime = true;

  for (unsigned i = 2; (i * i) <= num; i++)
  {
    if (num % i == 0)
    {  
      isPrime = false;

      if (num == i * i)
        printf("%u is divisible by %u.\n", num, i);
      else
        printf("%u is divisible by %u and %u.\n", num, i, num/i);
    }
  }

  if (isPrime)
    printf("%u is a prime number", num);
  else
    printf("%u is not a prime number", num);
}