#include "main.h"
<<<<<<< HEAD
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
=======

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string
 * Return: no return.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
>>>>>>> 56db9bde02d01587e3116c9f9b0592b47d605bf1
}
