#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The input string.
 *
 * Description:
 * This function calculates and returns the length of the input string 's'.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}

/**
 * print_rev - Prints a string in reverse order.
 * @s: The input string to be printed in reverse.
 *
 * Description:
 * This function takes a string 's' and prints its characters in reverse order.
 *
 * Return: None.
 */

void print_rev(char *s)
{
	int i, c;

	i = _strlen(s);

	for (c = i - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
