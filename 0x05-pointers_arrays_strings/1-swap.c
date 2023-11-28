#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: int
 * @b: int
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
