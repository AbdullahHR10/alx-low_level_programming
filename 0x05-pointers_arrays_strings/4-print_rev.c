#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 * @s: char
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i, c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = i;
	}
	for (i = 0; c >= 0; c--)
	{
		if (s[c] != '\0')
		_putchar(s[c]);
	}
	_putchar('\n');
}
