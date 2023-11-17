#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: Nothing
 */

void times_table(void)
{
	int i, j, c;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			c = i * j;
			if (j == 0)
			{
				_putchar('0');
			}
			if (c < 10 & j != 0)
			{
				if (j <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
			}
			else if (c >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
