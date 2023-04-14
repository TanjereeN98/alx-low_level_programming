#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: lowest number
 * @max: maxmimum number
 * Return: returning pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = min;
	int j = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(((max - min) + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for ( ; i <= max ; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
