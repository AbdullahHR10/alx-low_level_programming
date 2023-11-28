#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 * @s: char
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i, c;

	c = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		c = i;
	}
	for (i = 0; c >= i; c--)
	{
		if (s[c] != '\0')
		_putchar(s[c]);
	}
	_putchar('\n');
}
