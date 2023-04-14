#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates mmemory for array
 * @nmemb: number of elements
 * @size: size of bytes for each element
 * Return: returns pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(i);
	if (ptr == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		((int *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
