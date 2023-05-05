#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at idx
 * @n: pointer to the number
 * @index: index of where to set
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((*n) | (1 << index));
	return (1);
}
