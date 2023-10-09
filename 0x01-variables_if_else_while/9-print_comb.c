#include <stdio.h>

/*
 * main = Prints all possible combinations of single-digit numbers
 */

int main(void)
{
  int single_digit = 0;

  while (single_digit <= 9)
    {
      putchar(48 + single_digit);
      single_digit++;
      putchar(',');
      putchar(' ');
    }
  putchar('\n');
  return (0);
}
