#include <stdio.h>

int main()
{
  int number;
  scanf("%d", &number);

  // if (number == 1)
  //   printf("One");
  // else if (number == 2)
  //   printf("Two");
  // else if (number == 3)
  //   printf("Three")

  // if (number == 1)
  //   printf("One");
  // else 
  //   if (number == 2)
  //     printf("Two");
  //   else 
  //     if (number == 3)
  //       printf("Three")

  if (number > 5)
  {

    if (number  < 10)
      printf("Larger than 5 smaller than 10\n");
  }
  else 
    printf("Less than or equal to 5");

  // Compilers ignore indeting
}
