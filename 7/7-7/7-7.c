#include <stdio.h>
#include <ctype.h> // islower()
#include <stdbool.h>
#include <iso646.h> // and, or, not

#define PERIOD '.'

int main()
{
  bool test1 = 3 > 2 || 5 > 6; // true
  bool test2 = 3 > 2 && 4 > 6; // false
  bool test3 = !(5 > 6); // true, equivalent to 5 <= 6

  printf("%d %d %d\n", test1, test2, test3);

  /* Character counting example */
  // char ch;
  // int count = 0;

  // while ((ch = getchar()) != PERIOD)
  // {
  //   if (ch != '\n' && ch != ' ')
  //     count++;
  // }

  // printf("%d", count); 

  for (char c = 0; c < 127; ++c)
    if (islower(c))
        printf("%c", c);

  return 0;
}