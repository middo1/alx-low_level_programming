#include "main.h"

/**
 * puts2 - reverses a string.
 * @str: input string.
 */
void puts2(char *str)
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

	for (i = 0; i <= (count - 1); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(s + i));
		}	
	}
	_putchar('\n');
}
