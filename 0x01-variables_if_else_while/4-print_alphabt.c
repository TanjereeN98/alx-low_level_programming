#include<stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)

{
	char c;

	c = 'a';

	do {
		putchar(c);
		c++;
	} while (c != 'q' || c != 'e');

	putchar('\n');
	return (0);
}
