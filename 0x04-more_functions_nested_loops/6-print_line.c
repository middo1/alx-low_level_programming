#include "main.h"
/**
 * print_line - Entry point
 * @n: the number of times that _ is printed
 */
void print_line(int n)
{	
	if (n > 0)
	{
		int m;

		for (m = 1 ; m <= n ; m++ )
		{
			_putchar('_');
		}
		_putchar('\n');
	} else
	{
		_putchar('\n');
	}
}
