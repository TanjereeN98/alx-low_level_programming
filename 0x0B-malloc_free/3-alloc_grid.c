#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function that returns a pointer to 2D array of integers.
 * @width: first input
 * @height: 2nd input
 * Return: ptr if success or NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (j = 0 ; j < i ; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
