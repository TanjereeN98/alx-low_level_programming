#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 *@s: input parameter
 */

void print_rev(char *s)
{
	int i;

	while (*s++)
		i++;
	for (; i != 0 ; i--)
		_putchar(*s);

	_putchar('\n');
}
