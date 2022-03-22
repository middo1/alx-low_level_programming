#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: to be copied to
 * @src: to be copied from
 * Return: char *dest
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (n >= 0)
	{
		*(dest + n) = *(src + n);
		if (*(dest + n) == '\0')
			break;
		n++;
	}
	return (dest);
}
