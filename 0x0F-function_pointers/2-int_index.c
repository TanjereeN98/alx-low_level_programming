#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: the array we will iterate through
 * @size: size of the array
 * @cmp: pointer to the compare function
 * Return: returns -1 if no matches or the number of matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j = 0;

	if (size <= 0)
		return (-1);
	for (i = 0 ; i < size ; i++)
		if (cmp(array[i]))
			j++;
	if (j == 0)
		return (-1);
	return (j);
}
