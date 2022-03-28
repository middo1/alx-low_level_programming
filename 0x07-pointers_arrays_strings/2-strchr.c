#include "main.h"
/**
 * _strchr - entry point
 * @s: pointe to string
 * @c: character
 * Return: first occurrence of the char c
 */
char *_strchr(char *s, char c)
{
unsigned int i;
	char *tmp;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (s[i] == c)
		{
			tmp = (s + i);
			return (tmp);
		}
	}
	return (NULL);
}
