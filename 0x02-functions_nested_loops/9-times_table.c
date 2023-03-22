#include "main.h"

/**
  * times_table -  a function that prints the 9 times table, starting with 0.
  * Return: 0
  */

void times_table(void)
{
	int i = 0;

	while (i < 11)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		int y = 1;

		while (y < 10)
		{
			_putchar('0' + i * y);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			y++;
		}
		i++;
	}
}
