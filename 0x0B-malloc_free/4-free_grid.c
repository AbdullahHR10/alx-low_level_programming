#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: int
 * @height: int
 * Return: always 0
 */

void free_grid(int **grid, int height)
{
	int i;
	if (grid == NULL || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	grid = NULL;

	return (void);
}
