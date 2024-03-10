#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 * @s: String to be printed
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i = _strlen(s);

	while (i != 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}
