#include<stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)

{
	int a, b, c;

	for (a = '0' ; a <= '7' ; a++)
	{
	for (b = a + 1 ; b <= '8' ; b++)
	{
	for (c = b + 1 ; c <= '9' ; c++)
	{
	if ((a != b) && (a != c) && (b != c))
	{
	putchar(a);
	putchar(b);
	putchar(c);
	if (a == '7' && b == '8' && c == '9')
	putchar('\n');
	else
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}
	return (0);
}
