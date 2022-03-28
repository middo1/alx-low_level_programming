#include "main.h"
/**
 * _memcpy - Entry point
 * @dest: destination of copy
 * @src: source of copy
 * @n: number of bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest)
}