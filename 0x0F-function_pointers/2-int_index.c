#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: int
 * @size: int
 * @cmp: function
 * Return: -1 if no element matchs, -1 if  size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
	}
	if (result != 0)
	{
		return (i);
	}
	return (-1);
}
