#include "main.h"

/**
 * _strspn - Entry point
 * @s: first string
 * @accept: second string
 * Return: result
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res, i ,j;

	for (i = 0 ; *(s + i) != '\0' ; i++)
	{
		for (j = 0; *(accept + j) != '\0' ; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				res += 1;
				break;
			}
		}
		if (*(s + i) != *(accept + j))
		{
			break;
		}
	}
	return (res);
}
