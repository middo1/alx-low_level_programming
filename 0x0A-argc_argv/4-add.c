#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number
 * @argv: values
 * Return: 0 of successful else 1
 */
int main(int argc, char **argv)
{
	int i, sum = 0;
	int term;

	i = 1;
	while (i < argc && term == 0)
	{
		if (atoi(*(argv + i)) == 0)
		{
			term = 1;
			printf("Error\n");
		} else
		{
			sum += atoi(*(argv + i));
			i++;
			term = 0;
		}
	}
	if (term == 0)
		printf("%d\n", sum);
	return (term);
}
