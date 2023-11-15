#include "main.h"

/**
 * print_last_digit - Prints the value of the last digit
 * @i: int
 * Return: Value of last digit
 */

int print_last_digit(int i)
{
	if (i >= 0)
	{
		_putchar((i % 10) + '0');
	}
	else
	{
		i = i * -1;
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
	return (i);
}
