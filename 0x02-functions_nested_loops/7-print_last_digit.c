#include "main.h"

/**
  * print_last_digit - a function that prints the last digit of a number.
  * @i: input parameter
  * Return: 0
  */

int print_last_digit(int i)
{
	int a;

	if (i < 0)
		i = -i;
	a = i % 10;

	if (a < 0)
		_putchar(-a + '0');
	else
		_putchar(a + '0');
}
