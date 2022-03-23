#include "main.h"
/**
 * _strncat - Entry point
 * @dest: first string
 * @src: second strinhg
 * @n: number of char to be concatenated to first string from the second string
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0';)
		++i;
	for (j = 0; src[j] != '\0';)
		++j;
	if (n < 1024)
	{
		for (j = 0; j < n; ++j, ++i)
		{
			dest[i] = src[j];
		}
	} else
	{
		for (j = 0 ; src[j] != '\0'; ++j, ++i)
		{
			dest[i] = src[j];
		}
	}
	return (dest);
}
