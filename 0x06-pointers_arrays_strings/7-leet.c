#include "main.h"
/**
 * leet - Entry point
 * @a:string
 * Return:*
 */
char *leet(char *a)
{
	char lets[8];

	lets[4] = {'a', 'A'};
	lets[3] = {'e', 'E'};
	lets[0] = {'o', 'O'};
	lets[7] = {'t', 'T'};
	lets[1] = {'l', 'L'};
	
	int pos, count;

	for (pos = 0; a[pos] != '\0' ; pos++)
	{
		for (count = 0; count < 8; count++)
		{
			if (lets[count][0] == a[pos] || lets[count][1] == a[pos])
			{
				a[pos] = count;
			}
		}
	}
	return (a);
}





