#include "main.h"

/**
 * print_times_table - print the n times table
 * @n: int
 * Return: Nothing
 */

void print_times_table(int n)
{
	int i, j, c;
	
	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			c = i * j;
			if (j == 0)
			{
				_putchar('0');
			}
			if (c < 10 && j != 0)
			{
				if (j <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
			}
			else if (c >= 10 && c < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else if (c > 99)
			{
				_putchar(',');
				_putchar((c / 100) + '0');
				_putchar((c / 10) % 10 + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
