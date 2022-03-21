#include "main.h"

/**
 * puts_half  - reverses a string.
 * @str: input string.
 */
void puts_half(char *str)
{
	int count = 0, i;
	char *s;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}
	s = str;
	if (count % 2 == 0)
	{
		for (i = 0; i <= (count - 1); i++)
		{
			if (i >= count/2)
			{
				_putchar(*(s + i));
			}
		}
		_putchar('\n');
	} else
	{
		for (i = 0; i <= (count -1); i++)
		{
			if (i > ((count - 1)/2))
			{
				_putchar(*(s + i));
			}
		}
		_putchar('\n');
	}
}
