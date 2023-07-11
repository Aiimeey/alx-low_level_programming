#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - Allocates a 2D grid of integers
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: Pointer to the allocated 2D grid,
 *         or NULL if width or height is negative or if memory allocation fails
 */
int **alloc_grid(int width, int height)
{
	int **p, j, i;

	if (width < 0 || height < 0)
		return (NULL);

	p = malloc(height * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			return (NULL);
		}

		for (j = 0; j < width; j++)
			p[i][j] = 0;

	}
	return (p);
}
