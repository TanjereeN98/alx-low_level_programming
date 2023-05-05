#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at idx
 * @n: pointer to the number
 * @index: index of the bit
 * Return: -1 if error or 1 if succed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n & (~(1 << index)));
	return (1);
}
