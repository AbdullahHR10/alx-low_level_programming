#include "main.h"

/**
 * print_last_digit - Prints the value of the last digit
 * @i: int
 * Return: Value of last digit
 */

int print_last_digit(int i)
{
	int c;

	if (i > 0)
	{
		c = ((i % 10) + '0');
		_putchar(c);
	}
	else if (i < 0)
	{
		i = i - 1;
		c =((i % 10) + '0');
		_putchar(c);
	}
	else
	{
		_putchar('0');
	}
	return (c);
}
