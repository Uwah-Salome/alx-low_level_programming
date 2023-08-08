#include <stdio.h>
#include <stdlib.h>


/**
  *free_grid - Entry point
  *Description:  function that frees a 2 dimensional grid 
  * previously created by your alloc_grid
  *@grid: parameter one
  *@height: parameter two
  *Return: 0 (success)
  */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}
    while (i < height)
    {
        free(grid[i]);
	i++;
    }
    free(grid);
}
