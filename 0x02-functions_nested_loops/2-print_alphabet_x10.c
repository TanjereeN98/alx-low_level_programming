#include "main.h"

/**
  * print_alphabet_x10 - a function that prints 10 times the alphabet
  * Return: 0
  */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char y;

		for (y = 'a' ; y <= 'z' ; y++)
			_putchar(y);
		_putchar('\n');

		i++;
	}
}
