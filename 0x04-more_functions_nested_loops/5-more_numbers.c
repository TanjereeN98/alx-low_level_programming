#include "main.h"

/**
  * more_numbers - function that prints 10 times number 0 -14
  * Return:
  */

void more_numbers(void)
{
	int i, j;
	unsigned int k;

	j = 0;
	while (j < 10)
	{
	for (i = 0; i < 10 ; i++)
		_putchar(i + '0');
	for (k = 4131211101 ; k != 0; k /= 10)
		_putchar((k % 10) + '0');
	_putchar('\n');
	j++;
	}
}

