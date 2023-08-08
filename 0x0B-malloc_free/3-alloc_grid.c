#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates and initializes a 2D grid of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 * Return: A pointer to the allocated 2D grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid, w, h;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	h = 0;

	while (h < height)
	{
		grid[h] = (int *)malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			while (h >= 0)
			{
				free(grid[h]);
				h--;
			}
			free(grid);
			return (NULL);
		}
		w = 0;

		while (w < width)
		{

			grid[h][w] = 0;
			w++;
		}
		h++;
	}
	return (grid);
}
