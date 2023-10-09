#include <stdio.h>

/*
 * main = Prints all single digit numbers of base 10 starting from 0
 */

int main(void)
{
  int base10 = 0;

  while (base10 <= 9)
    {
      putchar(48 + base10);
      base10++;
    }
  putchar('\n');
  return (0);
}
