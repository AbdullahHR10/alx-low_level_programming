#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: pointer to the located char
 * @c: char to be located
 * Return: a pointer to the char (s), or NULL if char was not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
	}
	return (NULL);
}
