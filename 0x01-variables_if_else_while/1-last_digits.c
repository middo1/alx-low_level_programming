#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio>
/* betty style doc for function main goes there */
/**
 * main - Entry point\
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
		printf("Last digit of %d is %d is greater than 5", n, n % 10);
	else if (n % 10 < 6 && n % 10 > 0)
		printf("Last digit of %d is %d is less than 6 and not 0", n, n % 1);
	else 
		printf("Last digit of %d is %d is 0", n, n % 10);

	return (0);
}
