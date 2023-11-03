#include "main.h"

/**
 * print_rev - prints a string in reverse
 * _strlen - caluclates str length
 * @s: char
 * Return: 0
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
