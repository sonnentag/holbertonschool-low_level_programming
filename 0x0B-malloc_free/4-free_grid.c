#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - free memory allocated in alloc_grid
 * @grid: grid pointer
 * @height: number or rows in grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
