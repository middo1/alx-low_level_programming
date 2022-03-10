#include <stdio.h>

/**
* main - entry point
* Return: always 0
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
int sa = sizeof(a);
int sb = sizeof(b);
int sc = sizeof(c);
int sd = sizeof(d);
int se = sizeof(e);

printf("%d", sa);
printf("%d", sb);
printf("%d", sc);
printf("%d", sd);
printf("%d", se);
}
