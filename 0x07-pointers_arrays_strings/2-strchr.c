#include "main.h"
/**
 * _strchr - entry point
 * @s: pointe to string
 * @c: character
 * Return: first occurrence of the char c
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s+i);
		}
	}
	if (*(s + 1) == c)
		return (s + i);
	return ('\0');
}
