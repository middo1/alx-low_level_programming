#include "main.h"
/**
 * _print_rev_recursion - Entry point
 * @s: pointer to string
 */
void _print_rev_recursion(char *s)
{
	int count, i = 0;
	for (count = 0; *(s + count) != '\0'; count++)
		;
	if (*s != '\0' && count > 0)
	{
		i++;
		_putchar(*s);
	}
	_print_rev_recursion(s + (count - 1));
}
