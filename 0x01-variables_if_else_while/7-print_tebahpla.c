#include <stdio.h>

/*
 * main = Prints the lowercase alphabet in reverse
 */

int main(void)
{
  char revlow_alpha = 'z';

  while (revlow_alpha >= 'a')
    {
      putchar(revlow_alpha);
      revlow_alpha--;
    }
  putchar('\n');
  return (0);
}
