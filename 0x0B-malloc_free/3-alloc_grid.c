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
	int *ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(width * height * sizeof(width));
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
		for (j = 0 ; j < width ; j++)
			ptr[i][j] = 0;
	return (ptr);
}
