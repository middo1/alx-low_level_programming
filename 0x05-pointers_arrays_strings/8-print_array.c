#include <stdio.h>
#include "main.h"
/**
 * print_array - reverses a string.
 * @a: input array.
 * @n: length of array
 */
void print_array(int *a, int n)
{
	int count = 1, i;

	while (count >= 0)
	{
		if (a[count] == a[-1])
			break;
		count++;
	}
	for (i = 0; i <= (n - 1); i++)
	{
		if (a[i] == a[n - 1])
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	putchar('\n');
}
