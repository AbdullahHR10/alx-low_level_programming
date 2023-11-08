#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function of an array
 * @array: int
 * @size: unsigned int
 * @action: int
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size - 1; i++)
	{
		action(array[i]);
	}
}
