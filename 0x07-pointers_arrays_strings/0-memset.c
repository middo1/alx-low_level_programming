#include "main.h"
/**
 * _memset - Entry point
 * @s: set
 * @b: byte
 * @n: number of byte to replaces
 * Return:pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *ptr = (char *)s;

	for (i = 0; i < n ; i++)
	{
		*(ptr + i) = b;
	}
	return (ptr);
}
