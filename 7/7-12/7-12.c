#include <stdio.h>

int main()
{
  char c;

  while ((c = getchar() != '.'))
  {
    printf("You love ");

    switch (c) // Note integer types only
    {
      case 'a':
        printf("apple");
        break;
      case 'b':
        printf("baseball");
        break;
      case 'c':
        printf("cake");
        break;
      default:
        printf("nothing");
    }

    printf(".\n");

    while (getchar() != '\n')
    {
      continue;
    }
    
    return 0;
  }
}