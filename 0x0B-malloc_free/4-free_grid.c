#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the grid
 * @grid: pointer to 2D grid
 * @height: rows to be freed
 * Return: nothing
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
