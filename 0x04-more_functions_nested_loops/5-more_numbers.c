#include "main.h"
/**
 * more_numbers - Entry point
 */
void more_numbers(void)
{
	int x, n;

	n = 0;
	while (n < 10)
	{
		for (x = 0; x < 15 ; x++)
		{
			if (x >= 10)
			{
				_putchar(x / 10 + '0');
			}
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
		n++;
	}
}
