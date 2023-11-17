#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 * Return: 0
 */

void jack_bauer(void)
{
	int i, m;

	for (i = 0; i < 24; i++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
	return (0);
}
