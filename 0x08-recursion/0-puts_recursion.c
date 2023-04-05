#include "main.h"

/**
 * _puts_recursion -  a function that prints a string, followed by a new line.
 * @s: input string
 */

void _puts_recursion(char *s)
{
	if (!*s)
		_putchar('\n');
	while (*s)
		_putchar(*s);
		s++;
}
