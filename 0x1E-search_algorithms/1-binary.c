#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * Using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: The value to search for
 *
 * Return: The index where value is located,
 * Or -1 if value is not present in array, or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, i,  middle;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		middle = low + (high - low) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			low = middle + 1;
		else
			high = middle - 1;

	}
	return (-1);
}
