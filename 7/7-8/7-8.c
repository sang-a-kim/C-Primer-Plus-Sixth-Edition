#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define PERIOD '.' 

int main()
{
  char ch;
  int ch_counter = 0;
  int wd_counter = 0;
  int ln_counter = 0;
  bool word_flag = false;
  bool line_flag = false;

  printf("Enter text : ");
  
  while ((ch = getchar()) != PERIOD)
  {
    if (!isspace(ch))
    {
      ch_counter++;
        
        if (!line_flag)
          {
            ln_counter++;
            line_flag = true;
          }

        if (!word_flag)
          {
            wd_counter++;
            word_flag = true;
          }
    }
    
    if (ch == '\n')
      line_flag = false;

    if (isspace(ch))
      word_flag = false;
  }

  printf("Character = %d, Words = %d, Lines = %d", ch_counter, wd_counter, ln_counter);
}