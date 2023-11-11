#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function to free a 2 dimensional grid.
 *
 * @grid: A pointer to the 2D grid to be freed.
 * @height: The height (number of rows) of the grid.
 * Return: void
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
