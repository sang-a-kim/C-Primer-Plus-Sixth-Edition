#include <stdio.h>

int main()
{
  /* continue */
  // for (int i = 0; i < 10; ++i)
  // {
  //   if (i == 5)
  //     continue;

  //   printf("%d", i);

  //   if (i != 5) 
  //     printf("%d", i);
  // }

  /* break */
  // for (int i = 0; i < 10; ++i)
  // {
  //   if (i == 5)
  //     break;

  //   printf("%d", i);
  // }

  /* while and continue */
  // int count = 0;
  // while (count < 5)
  // {
  //   int c = getchar();
  //   if (c == 'a')
  //     continue;
  //   putchar(c);
  //   count++;
  // }

  /* for and continue */
  // for (int count = 0; count < 10; ++count)
  // {
  //   int c = getchar();
  //   if (c == 'a')
  //     continue;
  //   putchar(c);
  // }

  /* continue as placeholder */
  // while (getchar() != '\n')
  //   continue;


    /* while and break */

    // while (1)
    // {
    //   char c = getchar();

    //   if (c == '.')
    //     break;
      
    //   putchar(c);
    // }

    for (int i = 0; i < 10; i++)
    {
      for (int j = 0; j < 10; j++)
      {
        if (j == 5)
          break;
        
        printf("(%d %d)", i, j);
      }

      printf("\n");
    }
}