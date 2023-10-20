#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: int to be drawn
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			for (c = -1; c < i; c++)
				{
					_putchar(' ');
				}
		}
		_putchar('\n');
	}
}
