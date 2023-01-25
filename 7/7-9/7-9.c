#include <stdio.h>
#include <stdbool.h>

int main()
{
  // int temp;
  // temp = true ? 1024 : 7; // ternary
  // printf("%d\n", temp);

  // temp = false ? 1024 : 7;
  // printf("%d\n", temp);

  int number;
  scanf("%d", &number);

  (number % 2 == 0) ? printf("Even"): printf("Odd");
}