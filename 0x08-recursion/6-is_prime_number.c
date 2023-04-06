#include "main.h"

/**
 * testing_prime - looping to check if the number is prime
 * @m: the number that will be checked
 * @i: iterative numbner to check with
 *
 * Return: 1 if prime and 0 if not
 */

int testing_prime(int m, int i)
{
	if (i == 1)
		return (1);
	else if (m % i == 0)
		return (0);
	else
		return (testing_prime(m, i - 1));
}

/**
 * is_prime_number -  a function to check if the number is prime
 * @n: the number that will be tested
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	testing_prime(n, n - 1);
	return ('\n');
}


