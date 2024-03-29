#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: multidimensional array of integers
 * @height: height of the grid
 * Return: No return
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid != NULL || height != 0)
	{

		for (x = 0; x < height; x++)
		{
			free(grid[x]);
		}
		free(grid);
	}
}
