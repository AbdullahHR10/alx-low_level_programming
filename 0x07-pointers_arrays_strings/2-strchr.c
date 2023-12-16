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
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
