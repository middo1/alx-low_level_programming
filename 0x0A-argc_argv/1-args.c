#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of argument
 * @argv: values entered
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int res;

	for (res = 0; argv[res] != NULL && res < argc; res++)
		;
	printf("%d\n", res - 1);
	return (0);
}
