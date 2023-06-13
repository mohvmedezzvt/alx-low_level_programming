#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by my alloc_grid function.
 * @grid: the 2 dimentional grid pointer.
 * @height: Rows Number for the 2 dimentional grid that will be freed.
 *
 * Return: Nothing (Void).
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = height; i >= 0; i--)
		free(grid[i]);

	free(grid);
}
