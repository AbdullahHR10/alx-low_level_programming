#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: string
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i, n;

	if (str[0] == '\0')
	{
		return;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	n = (i - 1) / 2;
	for (n = n + 1; n < i; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
