#include <stdio.h>

int main()
{
  const int key = 123;
  int input = 0;

  // printf("Enter secret code : ");
  // scanf("%d", &input);

  // while (input != key) {
  //   printf("Enter secret code : ");
  //   scanf("%d", &input);
  // }

  do
  {
    printf("Enter secret code : ");
    scanf("%d", &input);
  } 
  while (input != key);
  
}