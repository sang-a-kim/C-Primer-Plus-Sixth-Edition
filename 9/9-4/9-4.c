#include <stdio.h>

// int a;

int int_max(int i, int j);

int main()
{
  //m = 123;
  
  int a;

  a = int_max(1, 2);

  printf("%d\n", a);
  printf("%p\n", &a);

  {
    // int a; 
    a = int_max(4, 5);

    printf("%d\n", a);
    printf("%p\n", &a);

    int b = 123;
  }
  
  printf("%d\n", a);
  printf("%p\n", &a);
}

int int_max(int i, int j)
{
  //a = 456;
  int m; //stack frame
  m = i > j ? i : j;
  return m;
}
