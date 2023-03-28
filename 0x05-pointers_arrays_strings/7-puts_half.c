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

	if (len % 2 == 1)
	{	k = (len - 1) / 2;
		k += 1;
	}
	else
		k = len / 2;

	for (; k < len ; k++)
		_putchar(str[k]);
	_putchar('\n');
}
