#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: string to be analyzed
 * @accept: string containing chars to match
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] != '\0' && accept[i] != '\0' &&
			s[i] == accept[i])
	{
		i++;
	}
	return (i);
}
