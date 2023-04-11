#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates array of char and initializes it with a specific char
 * @size: size of the allocation in memory
 * @c: the character
 * Return: retunrs NULL if size == 0 or if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(98);
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		ptr[i] = c;
	return (ptr);
}
