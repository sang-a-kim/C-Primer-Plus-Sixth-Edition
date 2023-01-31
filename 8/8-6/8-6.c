#include <stdio.h>

long get_long(void);
 
int main()
{
  printf("Please input a integer between 1 and 100.\n");
  long number = get_long();

  while (number <= 1 || number >= 100)
  {
    printf("Your input is out of range. Try again.\n");
    number = get_long();
  }

  printf("OK. Thank you.\n");
}

long get_long(void)
{
  printf("Please input an integer and press enter.\n");

  long input;
  char c;

  while (scanf("%ld", &input) != 1)
  {
    printf("Your input - ");

    while ((c = getchar()) != '\n')
      putchar(c); //input left in buffer

    printf(" - is not an integer. Please try again.\n");
  }

  printf("Your input %ld is an integer. Thank you.\n", input);
  
  return input;
}