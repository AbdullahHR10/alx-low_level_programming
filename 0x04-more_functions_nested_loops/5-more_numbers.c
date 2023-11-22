#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 * Return: Nothing
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		if (i > 9)
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
