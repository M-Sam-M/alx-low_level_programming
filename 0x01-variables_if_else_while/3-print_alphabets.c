#include <stdio.h>

/*
 * main = Prints the alphabet in lowercase and then in uppercase
 */

int main(void)
{
  char low_alpha = 'a';
  char upper_alpha = 'A';

  while (low_alpha <= 'z')
    {
      putchar(low_alpha);
      low_alpha++;
    }
  while (upper_alpha <= 'Z')
    {
      putchar(upper_alpha);
      upper_alpha++;
    }
  putchar('\n');
  return (0);
}
