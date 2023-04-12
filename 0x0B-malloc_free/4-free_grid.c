#include "main.h"
#include <stdio.h>

/**
 * free_grid - frees a 2D grid previously created by alloc_grid.
 *
 * @grid: pointer to the 2D array of integers.
 * @height: height of the grid.
 *
 * Return: Void.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
