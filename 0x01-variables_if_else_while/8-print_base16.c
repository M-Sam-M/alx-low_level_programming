#include <stdio.h>

/*
 * main = Prints all the numbers of base 16 in lowercase
 */

int main(void)
{
  int base10 = 0;
  char base16 = 'a';

  while (base10 <= 9)
    {
      putchar(48 + base10);
      base10++;
    }
  while (base16 <= 'f')
    {
      putchar(base16);
      base16++;
    }
  putchar('\n');
  return (0);
}
