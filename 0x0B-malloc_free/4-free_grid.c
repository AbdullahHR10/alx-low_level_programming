#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid by alloc_grid function
 * @grid: grid
 * @height: height
 * Return: Nothing
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
