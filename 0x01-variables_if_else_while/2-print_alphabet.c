#include <stdio.h>

/*
 * main = Prints the the entire alphabet in lowercase
 */

int main(void)
{
  char low_alpha = 'a';

  while (low_alpha <= 'z')
    {
      putchar(low_alpha);
      low_alpha++;
    }
  putchar('\n');
  return (0);
}
