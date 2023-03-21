#include "main.h"

/**
  * print_last_digit - a function that prints the last digit of a number.
  * @i: input parameter
  * Return: 0
  */

int print_last_digit(int i)
{
	if (i < 0)
	{
		int y;
		
		y = i * -1;
		return (y % 10);
	}
	else
		return (i % 10);
}
