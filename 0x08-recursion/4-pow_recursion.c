#include "main.h"

/**
 * _pow_recursion - a function to returns value of x raised to power of y
 * @x: first number that will be raised to power of y
 * @y: number of the power multiplication
 *
 * Return: x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
}	return ('\n');
