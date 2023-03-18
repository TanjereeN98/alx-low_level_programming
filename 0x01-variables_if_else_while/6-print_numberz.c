#include<stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)

{
	int a;

	for (a = 0 ; a <= 9 ; a++)
		putchar(48 + a);

	putchar('\n');
	return (0);
}
