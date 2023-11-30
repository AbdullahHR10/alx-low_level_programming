#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @s: string
 * Return: s
 */

char *string_toupper(char *s)
{
	int i;

	if (s == NULL)
	{
		return (s);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
	}
	return (s);
}
