#include "main.h"
/**
 * _strlen - Entry point
 * @s:str that its char are to be counted
 * return:the len of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return i;
}
