#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number
 * @argv: values
 * Return: 0 if successful else 1
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	} else 
	{
		printf("%d\n", atoi(*(argv + 1)) * atoi(*(argv +2)));
		return (0);
	}
}
