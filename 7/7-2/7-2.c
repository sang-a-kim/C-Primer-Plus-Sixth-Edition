#include <stdio.h> //getchar(), putchar()

int main()
{
  char ch;

  while((ch = getchar()) != '\n')
  {
    if(ch >= 'a' && ch <= 'z')
      ch -= 'a' - 'A';
    else if(ch >= 'A' && ch <= 'Z')
      ch += 'a' - 'A';

    putchar(ch);
  }

  putchar(ch);

  return 0;
}