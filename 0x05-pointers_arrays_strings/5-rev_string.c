#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, c;
	char b;

	if (s == '\0')
	{
		_putchar('\n');
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		c = i;
	}
	for (i = 0; c > i; c--, i++)
	{
		b = s[i];
		s[i] = s[c];
		s[c] = b;
	}
}
