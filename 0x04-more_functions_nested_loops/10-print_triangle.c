#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Size of the triangle
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j <  size - i - 1; j++)
				_putchar(' ');
			for (j = 0; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
