#include "main.h"

/**
 * reverse_array - Reverses an array
 * @a: array
 * @n: size of array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	if (n == 0)
	{
		return;
	}
	for (i = 0; i < n; i++, n--)
	{
		temp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = temp;
	}
}
