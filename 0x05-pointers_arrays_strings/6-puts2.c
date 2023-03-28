#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * @str: input parameter
 */

void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len])
		len++;
	for (i = 0; len > i ; i++)
	{
		if (str[i] % 2 != 0)
			continue;
		else
			_putchar(str[i]);
	}
	_putchar('\n');
}

