#include <stdio.h>

void draw(int n);

int main()
{
  int i = 5;
  char c = '#'; 
  float f = 7.1f;

  draw(i);
  draw((int)c);
  draw((int)f);

  /* Acguments vs. Parameters */
  // actual argument, actual parameter -> argument (values)
  // formal argument, formal parameter => parameter (variables)

  return 0;
}

void draw(int n)
{
  while( n-- > 0 ) 
    printf("*");
  printf("\n");
}