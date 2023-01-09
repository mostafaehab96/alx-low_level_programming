#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - allocates a two dimensional array of integers in heap
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: a pointer to the grid
 */
int **alloc_grid(int width, int height)
{
	int row;
	int col;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);
	for (row = 0; row < height; row++)
	{
		grid[row] = (int *) malloc(sizeof(int) * width);
		if (grid[row] == NULL)
		{
			free(grid);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
		{
			grid[row][col] = 0;
		}
	}

	return (grid);
}

