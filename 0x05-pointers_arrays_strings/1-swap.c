#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @*a: to be swapped
 * @*b: to be swapped
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
