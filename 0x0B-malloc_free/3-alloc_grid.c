#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: Null if any int is 0, otherwise return a pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width < 0 || height < 0)
	{
		return (NULL);
	}
	arr = (int **)malloc(height * sizeof(int));
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
	}
	if (arr[i] == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
