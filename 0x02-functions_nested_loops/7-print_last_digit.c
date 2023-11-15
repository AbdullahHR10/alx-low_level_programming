#include "main.h"

/**
 * print_last_digit - Prints the value of the last digit
 * @i: int
 * Return: Value of last digit
 */

int print_last_digit(int i)
{
	int l;

	if (i < 0)
	{
		l = i * -1;
	}
	_putchar((l % 10) + '0');
	return (l);
}
