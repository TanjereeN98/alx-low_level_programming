#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 *@s: input parameter
 */

void print_rev(char *s)
{
	int i;

	while (s[i])
		i++;
	for (i -= 1 ; i != 0 ; i--)
		_putchar(s[i]);

	_putchar('\n');
}
