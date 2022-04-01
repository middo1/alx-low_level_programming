#include <stdio.h>
/**
 * main - Entry point
 * @argc: number
 * @argv: values
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
