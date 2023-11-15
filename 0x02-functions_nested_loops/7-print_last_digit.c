#include "main.h"

/**
 * print_last_digit - Prints the value of the last digit
 * @i: int
 * Return: Value of last digit
 */

int print_last_digit(int i)
{
	if (i < 0)
	{
		i = i * -1;
	}
	_putchar((i % 10) + '0');
	return (i);
}
