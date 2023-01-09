#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional array of integers
 * @grid: the grid to be freed
 * @height: the height of the grid
 */

void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
	{
		free(grid[row]);
	}
	free(grid);
}
