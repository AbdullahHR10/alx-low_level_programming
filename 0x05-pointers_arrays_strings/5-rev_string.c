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
 * rev_string - Reverses a string
 * @s: char
 * Return: 0
 */

void rev_string(char *s)
{
	int i, c, j;
	char v;

	c = _strlen(s);

	for (i = c - 1, j = 0; i > j; i--, j++)
	{
		v = s[i];
		s[i] = s[j];
		s[j] = v;
	}
}
