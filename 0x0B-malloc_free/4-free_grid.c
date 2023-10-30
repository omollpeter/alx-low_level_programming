#include "main.h"

/**
 * free_grid - Frees used grid from memory
 * @grid: Grid to free
 * @height: Number of rows in the grid
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
