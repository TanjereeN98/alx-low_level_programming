#include "main.h"

/**
  * more_numbers - function that prints 10 times number 0 -14
  * Return:
  */

void more_numbers(void)
{
	int i, j;

	j = 0;
	while (j < 10)
	{
		for (i = 0; i < 10 ; i++)
			_putchar(i + '0');
		_putchar('\n');
		i++;
	}
}

