#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
  *alloc_grid - Entry point
  *Description: a function that fills memory with a constant byte.
  *@width: parameter one
  *@height: parameter two
  *Return: 0 (success)
  */
int **alloc_grid(int width, int height)
{
	int **grid;
	int w, h;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	while (h < height)
	{
		grid[h] = (int *)malloc(width * sizeof(int));
		++h;
		if (grid[h] == NULL)
		{
			while (w < h)
			{
				free(grid[w]);
				++w;
			}
			free(grid);
			return (NULL);
		}
		while (w < width)
		{
			grid[h][w] = 0;
			++w;
		}
	}
	return (grid);
}
