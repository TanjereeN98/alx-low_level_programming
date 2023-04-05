#include "main.h"

/**
 * calculate_square - function to calculate the number square root
 * @n: input number
 * @guess: initial guess
 *
 * Return: returns the number square root of -1 if it doesn't have one
 */
int calculate_square(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (calculate_square(n, guess + 1));
}

/**
 * _sqrt_recursion - function to find the square root
 * @n: input number
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (calculate_square(n, 0));
}
