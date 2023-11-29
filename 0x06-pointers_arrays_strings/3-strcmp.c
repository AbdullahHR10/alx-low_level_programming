#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: char
 * @s2: char
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, c;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (c = 0; s2[c] != '\0'; c++)
	{
	}
	if (i > c)
	{
		return (-i);
	}
	if (c > i)
	{
		return (-c);
	}
	else
	{
		return (0);
	}
}
