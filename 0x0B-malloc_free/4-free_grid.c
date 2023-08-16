#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid -  frees a 2 dimensional array created
 * by alloc_grid function.
 * @grid: secondary grid
 * @height: grid height dimension
 * Return: 0/ void
 */

void free_grid(int **grid, int height)
{
	int u = 0;

	for (; u < height; u++)
	{
		free(grid[u]);
	}
	free(grid);
}


