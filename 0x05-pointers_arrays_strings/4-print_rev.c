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

	if (s == NULL)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; s[i] != '\0'; i++)
	{
		c = i;
	}
	for (i = 0; c >= i; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
	}
}
