#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: the number
 * @index: index of the number starting of 0
 * Return: value of the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result = 0;

	if (n == 0 && index == 0)
		return (0);
	if (n >> index == 0 || index > 63)
		return (-1);
	result = (n >> index) & 1;
	return (result);
}
