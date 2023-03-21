#include "main.h"

/**
  * print_sign - a function that prints the sign of a number.
  * @n: input parameter.
  * Return: returns 1 or 0 or -1.
  */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
