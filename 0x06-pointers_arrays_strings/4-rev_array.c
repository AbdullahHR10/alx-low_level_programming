#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: int
 * @n: int
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	j = n - 1;
	i = 0;

	while (i <= j)
	{
		a[i] = a[j];
		i++;
		j--;
	}
}
