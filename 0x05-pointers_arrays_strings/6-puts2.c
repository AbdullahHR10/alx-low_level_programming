#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
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
 * puts2 - Prints every other character of a string
 * @str: char
 * Return: 0
 */

void puts2(char *str)
{
	int i, c;

	c = _strlen(str);

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		if (str[i + 1] != '\0')
		i++;
	}
	_putchar('\n');
}
