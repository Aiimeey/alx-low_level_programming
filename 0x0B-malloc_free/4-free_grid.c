#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees the memory allocated for a 2D grid.
 * @grid: Pointer to the 2D grid.
 * @height: Height of the grid.
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
