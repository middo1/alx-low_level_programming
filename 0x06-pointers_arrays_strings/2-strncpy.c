#include "main.h"
/**
 * _strncpy - Entry point
 * @dest: first string
 * @src: second string
 * @n: number of char to copied from the src to the dest
 * Return: string that has been copied into
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; src[i] != '\0';)
		++i;
	for (j = 0; j < n; ++j)
	{
		dest[j] = src[j];
		if (j >= i)
		{
			dest[j] = '\0';
			break;
		}
	}
	return (dest);
}
