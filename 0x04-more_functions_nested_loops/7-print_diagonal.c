#include "main.h"

/**
  * print_diagonal -  a function that draws a diagonal line on the terminal.
  * @n: input parameter
  */

void print_diagonal(int n)
{
	int x, y;

	if (n == 0)
		_putchar('\n');
	else
	{
	for (x = 1 ; x <= n ; x++)
	{
		_putchar('\\');
		_putchar('\n');
	if (x == 0)
		_putchar(' ');
	else
	{
	for (y = 0 ; y < x ; y++)
		_putchar(' ');
	}
	}
	}
	_putchar('\n');
}
