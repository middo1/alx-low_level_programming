#include "main.h"
/**
 * _puts_recursion - Entry point
 * @s: pointer to string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
	}
	if (*(s + 1) != '\0')
	{
		_puts_recursion(s + 1);
	} else
		_putchar('\n');
}
