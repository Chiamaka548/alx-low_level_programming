#include "main.h"

/**
 * free_grid - allocates a grid, makes space and frees space
 * @grid: takes in width of grid
 * @height: takes in height of grid
 *
 * Return: fee grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
