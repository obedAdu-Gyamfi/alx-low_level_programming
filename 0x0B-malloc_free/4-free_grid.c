#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * free_grid - Entry point.
 *
 * Description: Function frees a 2 dimensional grid
 * previously created by alloc_grid function created
 * earlier.
 *
 * @grid: a pointer to a pointer parameter.
 * @height: a parameter.
 *
 * Return: Void
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
