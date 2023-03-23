#include "main.h"

/**
  * print_triangle - a function that prints a triangle.
  * @size: input parameter
  * Return:
  */

void print_triangle(int size)
{
	int x, y, k, z;

	if (size <= 0)
		_putchar('\n');
	else if (size == 1)
	{
		_putchar('#');
		_putchar('\n');
	}
	else
	{
	for (x = 1 ; x <= size ; x++)
	{
		k = size - x;
		for (y = 0 ; y < k  ; y++)
			_putchar(' ');
		z = x
		for ( ; z > 0 ; z--)
			_putchar('#');
		_putchar('\n');
	}
	}
}

