#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i;
	int c;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c < 10; c++)
		{
			n = c * i;
			if (c == 0)
			{
				_putchar(n + '0');
			}
			if (n < 10 && c != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			}
			else if (n > 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
