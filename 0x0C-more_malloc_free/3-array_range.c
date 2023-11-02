#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: int
 * @max: int
 * Return: pointer, if min > max or if malloc fails return NULL
 */

int *array_range(int min, int max)
{
	if (min > max)
	{
		return (NULL);
	}
	int size;
	
	size = max - min + 1;

	int *ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}
	size_t i;

	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
