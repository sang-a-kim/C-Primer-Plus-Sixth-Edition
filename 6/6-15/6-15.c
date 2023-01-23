#include <stdio.h>

#define NUM_ROWS 12
#define FIRST_CHAR 'A'
#define LAST_CHAR 'L'

int main()
{
  // for (int i = 1; i != 6; i++) 
  // {
  //   for(char c = 'A'; c != 'L'; c++)
  //   {
  //     printf("%c ", c);
  //   }
  //   printf("\n");
  // }

  // int r; // row loop
  // int c; // character loop
  
  // for (r = 0; r < NUM_ROWS; r++) // outer row loop
  // {
  //   for (c = FIRST_CHAR; c <= LAST_CHAR; ++c)
  //     printf("%c ", c);
  //   printf("\n");
  // }

  // for(char i = FIRST_CHAR; i <= LAST_CHAR; i++)
  // {
  //   for (char c = FIRST_CHAR; c <= i; c++)
  //     printf("%c ", c);
  //   printf("\n");
  // }


  // for (int r = 0; r < NUM_ROWS; ++r)
  // {
  //   for (int c = FIRST_CHAR; c <= FIRST_CHAR + r; c++)
  //     printf("%c ", c);
  //   printf("\n");
  // }

  // return 0;

  // 3. 
  for (int r = 0; r < NUM_ROWS ; r++)
  {
    // for (int c = LAST_CHAR -r; c <= LAST_CHAR; c++)
    //   printf("%c ", c);
    // printf("%d\n", r);

    for (int c = 'A' + r; c < 'A' + NUM_ROWS ; c++)
          printf("%c ", c);
    printf("\n");
  }

  return 0;
}