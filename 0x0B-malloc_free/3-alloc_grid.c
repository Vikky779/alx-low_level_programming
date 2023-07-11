#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: columns
 * @height: rows
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **grid, r, c;

	if (width < 1 || height < 1)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (!grid)
	{
		free(grid);
		return (NULL);
	}

	for (r = 0; r < height; r++)
	{
		grid[r] = (int *)malloc(width * sizeof(int));

		if (!grid[r])
		{
			while (r)
			{
				free(grid[r]);
				r--;
			}
			free(grid);
			return (NULL);
		}
		for (c = 0; c < width; c++)
			grid[r][c] = 0;
	}
	return (grid);
}
