#include "main.h"

/**
 * _puts_recursion -  a function that prints a string, followed by a new line.
 * @s: input string
 */

void _puts_recursion(char *s)
{
	if (!*s)
		_putchar('\n');
	else

		_putchar(*s);
		s++;
		_puts_recursion(s);
}
