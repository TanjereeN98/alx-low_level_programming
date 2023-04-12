#include <stdlib.h>
#include "main.h"
/**
 * free_grid - functionthat frees a 2 dimensional grid previously created
 * @grid: the 2D int array
 * @height: number of rows in the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
