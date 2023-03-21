#include "main.h"

/**
  * print_last_digit - a function that prints the last digit of a number.
  * @i: input parameter
  * Return: 0
  */

int print_last_digit(int i)
{
	if (i < 0)
		return (_abs(i) % 10);
	else
		return (i % 10);
}
