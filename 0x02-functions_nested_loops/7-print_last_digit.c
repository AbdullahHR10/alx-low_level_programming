#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @i: int
 * Return: last digit of a number
 */

int print_last_digit(int i)
{
	int j;

	if (i > 0 || i == 0)
	{
		j = i % 10;
		_putchar(j + '0');
	}
	else if (i < 0)
	{
		i = -i;
		j = i % 10;
		_putchar(j + '0');
	}
	return (j);
}
