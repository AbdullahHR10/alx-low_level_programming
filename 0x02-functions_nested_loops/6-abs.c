#include "main.h"

/**
 * main - Entry point
 * @i: int
 * Return: Value of last digit
 */

int _abs(int i)
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
	return (i)
}
