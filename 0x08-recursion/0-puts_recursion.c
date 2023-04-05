#include "main.h"

/**
 * _puts_recursion -  a function that prints a string, followed by a new line.
 * @s: input string
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (!s[i])
		_putchar('\n');
	while (s[i])
	{
		_putchar(*(s + 1);
		i++;
	}
}
