#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need
 *    to flip to get from one number to another.
 * @n: the number
 * @m: target number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, i = 0;
	unsigned long int temp, xor;

	xor = n ^ m;
	for (x = 63 ; x >= 0 ; x--)
	{
		temp = xor >> x;
		if (temp & 1)
			i++;
	}
	return (i);
}
