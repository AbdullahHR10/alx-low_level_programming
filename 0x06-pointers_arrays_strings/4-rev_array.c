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
	int c ;

	j = n - 1;
	i = 0;

	while (i < j)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;

		i++;
		j--;
	}
}
