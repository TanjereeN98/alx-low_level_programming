#include<stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)

{
	int a, b;

	for (a = '0' ; a <= '8' ; a++)
	{
	for (b = a + 1 ; b <= '9' ; b++)
	{
	if (a != b)
	{
	putchar(a);
	putchar(b);
	if (a == '8' && b == '9')
	putchar('\n');
	else
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	return (0);
}
