#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: always 0
 */

void more_numbers(void)
{
	int i;
	int c;

	for (i = 0; i < 14; i++;)
	{
		for (c = 0; c < 14; c++)
		{
			_putchar((c) + '0');
			_putchar('\n');
		}
	}
}
