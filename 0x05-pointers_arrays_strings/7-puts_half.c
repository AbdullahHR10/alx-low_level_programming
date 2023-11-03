#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: - char to be length checked
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * puts_half - Prints half of a string
 * @str: char
 * Return: 0
 */

void puts_half(char *str)
{
	int i, l, c;

	l = _strlen(str);

	if (l % 2 == 0)
	{
		c = l / 2;
	}
	else
	{
		c = (l - 1) / 2;
	}
	for (i = c; str[i - 1] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
