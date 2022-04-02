#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number
 * @argv: vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int res, term;

	res = 0;
	if (argc < 2 || atoi(*(argv + 1)) == 0)
	{
		printf("Error\n");
		term = 1;
	} else
	{
		int val = atoi(*(argv + 1));
		while (val > 0)
		{
			if (val  >= 25)
			{
				val -= 25;
				res += 1;
				continue;
			} else if (val  >= 10 && val < 25)
			{
				val -= 10;
				res += 1;
				continue;
			} else if (val >= 5 && val < 10)
			{
				val -= 5;
				res += 1;
				continue;
			} else if (val >= 2 && val < 5)
			{
				val -= 2;
				res += 1;
				continue;
			} else 
			{
				res += 1;
				val -= 1;
				continue;
			}
			term = 0;
		}
	}
	if (term == 0)
		printf("%d\n", res);
	return (term);
}
