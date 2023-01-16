#include <stdio.h>

int main()
{
  int seconds = 0, minutes = 0, hours = 0;

  while (seconds >= 0)
  {
    printf("Input seconds : ");
    scanf("%d", &seconds);

    if (seconds < 0) return 0;

    minutes = seconds / 60;
    seconds %= 60;

    hours = minutes / 60;
    minutes %= 60;
    
    printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);

    printf("You are the best!\n");
  }
}