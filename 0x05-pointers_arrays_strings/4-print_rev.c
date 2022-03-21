#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
      int n;
      for (n = 0; s != '\0'; )
      {
            n++;
      }

      for (n--; s != '\0'; n--)
      {
            _putchar(s[n]);
      }
      _putchar('\n')
}
