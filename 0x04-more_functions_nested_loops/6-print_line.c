#include "main.h"

/**
 * print_line Draws a straight line in the terminal
 * @n: in
 * Return: nothing
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('_');
	}
	_putchar('\n');
}
