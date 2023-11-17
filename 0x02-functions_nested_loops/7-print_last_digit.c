#include "main.h"

/**
 * print_last_digit - Prints the value of the last digit
 * @i: int
 * Return: 1
 */

int print_last_digit(int i)
{
	int c;

	if (i > 0)
	{
		c = i % 10;
		_putchar(c + '0');
	}
	else if (i < 0)
	{
		i = -i;
		c = i % 10;
		_putchar(c + '0');
	}
	else
	{
		c = 0;
		_putchar('0');
	}
	return (c);
}
