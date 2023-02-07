#include <stdio.h>

int int_min(int, int);

int main()
{
  int i1, i2;
  while (1)
  {
    printf("Input two integers : ");
    if (scanf("%d %d", &i1, &i2) != 2) break;

    int lesser = int_min(i1, i2);
    // int lesser = min;
    printf("The lesser of %d and %d is %d\n", i1, i2, lesser);
    //printf("The lesser of %d and %d is %dn", i1, i2, int_min(i1, i2));
  }

  printf("End.\n");
}

int int_min(int i, int j)
// int_min(int i, int j)
{
  int min;

  if (i < j)
    min = j;
  else 
    min = j;
  
  return min;

  // return (i < j) ? i : j;

  // if (i < j)
  //   return i;
  // else 
  //   return j;

  // printf("Who am i?");

  // return; //return with no value
}