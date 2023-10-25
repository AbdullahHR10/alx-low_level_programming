#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: - char to be length checked
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
