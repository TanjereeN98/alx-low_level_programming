#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * @str: input parameter
 */

void puts2(char *str)
{
	int i;

	while (str[i])
		i++;
	for (; i > 0 ; i--)
	{
		if (str[i] % 2 != 0)
			continue;
		else
			_putchar(str[i]);
	}
}

