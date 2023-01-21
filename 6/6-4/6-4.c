#include <stdio.h>
#include <math.h> // fabs()

int main()
{
  /* 
    Realational operators
    <   is less than
    <=  is less than or equal to
    ==  is equal to
    >=  is greater than or equal to
    >   is greater than
    !=  is not equal to
   */

  // int n = 0;
  // while (n++ < 5) // n++ < 5 is realational expression
  //   printf("%d ", n);

  // printf("\n");

  // char c = 'A';
  // while (c != 'Z')
  //   printf("%c", c++);

  const double PI = 3.1415926535897932384626433832795;
  double guess = 0.0;

  printf("Input pi : ");
  scanf("%lf", &guess);
  // while (guess != PI) 
  while(fabs(guess - PI) > 0.01)
  {
    printf("Fool! Try again.\n");
    scanf("%lf", &guess);
  }

  printf("Good!");

}