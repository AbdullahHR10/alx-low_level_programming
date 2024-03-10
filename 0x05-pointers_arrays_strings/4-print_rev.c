#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string to calculate the length of
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

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
