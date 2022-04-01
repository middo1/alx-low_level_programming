#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: number of argument
 * @argv: values
 * Return: 0 
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", argv[0]);
	return (0);
}
