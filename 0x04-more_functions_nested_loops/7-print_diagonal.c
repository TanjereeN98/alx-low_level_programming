#include "main.h"

/**
  * print_diagonal -  a function that draws a diagonal line on the terminal.
  * @n: input parameter
  */

void print_diagonal(int n)
{
	int x, y;

	for (x = 1 ; x <= n ; x++)
	{
		_putchar('\\');
		_putchar('\n');
	for (y = 0 ; y < x ; y++)
		_putchar(' ');
	}
	_putchar('\n');
}
