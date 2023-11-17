#include "main.h"

/**
 * print_to_98
 * @n: int
 * Return: nothing
 */

void print_to_98(int n)
{
	int i;
	for (i = n; i <= 98; i++)
	{
		if (i < 10)
		{
			_putchar('0' + i);
			_putchar(',');
			_putchar(' ');
		}
		if (i >= 10)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
