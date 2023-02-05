#include <stdio.h>
#include <string.h>

#define WIDTH 20
#define NAME "Sang-A Kim"
#define ADDRESS "Seoul, Korea"

void print_chars(int n_chars, char character);
void print_at_center(int star_number, char content[]);
void print_space(int star_number, char content[]);

int main()
{
  print_chars(WIDTH, '*');
  print_at_center(WIDTH, NAME);
  print_at_center(WIDTH, ADDRESS);
  print_chars(WIDTH, '*');

  return 0;
}

void print_chars(int n_chars, char character)
{
  for (int i = 0; i <= WIDTH; i++)
     printf("%c", character);
  printf("\n");
}

void print_at_center(int star_number, char content[])
{
  print_space(star_number, content);
  printf("%s", content);
  print_space(star_number, content);
  printf("\n");
}

void print_space(int star_number, char content[])
{
  for (int i = 0; i < ((star_number - strlen(content)) / 2); i++)
    printf(" ");
}
