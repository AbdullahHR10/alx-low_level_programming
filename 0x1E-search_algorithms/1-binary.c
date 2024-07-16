#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * Using the Binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The index where value is located
 * If value is not present in array or if array is NULL, return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, middle, index, i;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		middle = low + (high - low) / 2;
		index = array[middle];
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		if (index < value)
			low = middle + 1;
		else if (index > value)
			high = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
