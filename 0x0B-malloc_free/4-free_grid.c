#include "holberton.h"

/**
 * free_grid - Function will free 2d array created by 3-alloc_grid
 * @grid: 2D array created by 3-alloc_grid
 * @height: Number of rows of that 2D array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
