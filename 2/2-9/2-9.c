#include <stdio.h>

void say_hello(void); // prototyping, function declaration 

int main()
{
  say_hello(); 
  say_hello(); 
  say_hello(); 
  say_hello(); 
  say_hello(); 
  

  return 0;
}

void say_hello(void) // function definition
{
  printf("Hello, world\n");
}
