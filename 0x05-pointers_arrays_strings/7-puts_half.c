#include "main.h"

/**
 * puts_half -  a function that prints half of a string
 * @str: input parameter
 */

void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len])
		len++;

	if (len % 2 == 0)
		for (i = len / 2 ; i < len ; i++)
			_putchar(str[i]);
	else
		for (i = (len / 2) - 1 ; i < len ; i++)
			_putchar(str[i]);
}
