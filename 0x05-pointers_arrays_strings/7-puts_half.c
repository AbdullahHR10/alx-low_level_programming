#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: String to be printed
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i, n, length;

	for (length = 0; str[length] != '\0'; length++)
	{
	}
	n = length - 1 / 2;
	for (i = 0; i < n; i++)
		_putchar(str[i]);
	_putchar('\n');
}
