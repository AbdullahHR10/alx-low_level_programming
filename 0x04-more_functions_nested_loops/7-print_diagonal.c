#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: line length
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
	{
		_putchar('\\');
		_putchar('\n');
		for (c = 0; c < i; c++)
		{
			if (i != n)
			{
				_putchar(' ');
			}
		}
	}
}
