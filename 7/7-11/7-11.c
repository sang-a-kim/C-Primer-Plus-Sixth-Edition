#include <stdio.h>
#include <float.h>

int main()
{
  // double max = 0;
  // double min = 0;
  // double total = 0;
  // int count = 1;
  // int input = 0;

  // { 
  // while (scanf("%d", &input) == 1)
  //   if (count == 1)
  //   {
  //     max = input;
  //     min = input;
  //     total = input;
  //     count++;
  //   }
  //   else
  //   {
  //     max = input > max ? input : max;
  //     min = input < min ? input : min;
  //     total += input;
  //     count++;
  //   }
  // }

  // printf("Max is %f, Min is %f, Average is %f", max, min, total / (count - 1));

  float max = -FLT_MAX;
  float min = FLT_MAX;
  float sum = 0.0f;
  float input;
  int n = 0;

  while (scanf("%f", &input) == 1)
  {
    if (input < 0.0f || input > 100.0f) continue;

    max = input > max ? input : max;
    min = input < min ? input : min;
    sum += input;

    n++;
  }

  if (n > 0)
    printf("min = %f, max = %f, ave = %f\n", min, max, sum / n);
  else 
    printf("No input\n");

  return 0;
}