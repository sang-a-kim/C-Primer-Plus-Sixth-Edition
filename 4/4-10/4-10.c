#include <stdio.h>
#include <inttypes.h> // intmax_t

int main()
{
  // multiple inputs with blank separators
  int i;
  float f;
  char str[30];
  scanf("%d %f %s", &i, &f, str); // Note & is absent in front of str

  // character
  char c;
  scanf("%c", &c); // try blank
  printf("%i\n", c); // blank is 32

  // unsigned as signed
  unsigned i;
  scanf("%i", &i); // try negative number
  printf("%i\n", i);

  //unsinged as unsigned
  unsigned i2;
  scanf("%u", &i2); // try negative number
  printf("%u\n", i2);

  // floating point number
  // l for double for %f, %e, %E,%g
  float d = 0.0;
  scanf("%f", &d); //lf, try E notation
  printf("%f\n", d);

  // Width
  char str[30];
  scanf("%5s", str);
  printf("%s\n", str);

  // h modifier
  char i;
  scanf("%hhd", &i); // try large numbers
  printf("%i\n", i);

  // integer with characters
  int i;
  scanf("%i", &i); 
  printf("%i\n", i);

  // j modifier
  intmax_t i;
  scanf("%ji", &i); 
  printf("%ji\n", i);

  // regular characters
  int a, b;
  scanf("%d,%d", &a, &b); 
  scanf("%d ,%d", &a, &b); 
  scanf("%d, %d", &a, &b); 
  scanf("%d,%d", &a, &b); 
  scanf("%d-%d", &a, &b); 
  scanf("%dA%d", &a, &b); 
  scanf("%d %d\n", a, b); 

  // char received blank
  int a, b;
  char c; 
  scanf("%d%c%d", &a, &c, &b);
  printf("%d|%c|%d", a, c, b);

  //retun value of scanf()
  int a, b;
  int i = scanf("%d%d", &a, &b);
  printf("%d", i);

  //modifier for printf()
  int i = 123;
  int width = 5;
  printf("input width : ");
  scanf("%d", width);
  printf("%*d\n", width, i);

  //modifier for scanf()
  int i;
  scanf("%*d%*d%d", &i);
  printf("Your third input = %d", i);

  return 0;
}