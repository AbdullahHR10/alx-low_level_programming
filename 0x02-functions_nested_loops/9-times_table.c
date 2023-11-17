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
			if (c < 10)
			{
				_putchar(c + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else if (c >= 10)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
