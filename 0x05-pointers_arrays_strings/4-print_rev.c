#include "main.h"
#include <stddef.h>

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
	for (i = 0; c >= i; c--)
	{
		if (s[c] != NULL)
		_putchar(s[c]);
	}
	_putchar('\n');
}
