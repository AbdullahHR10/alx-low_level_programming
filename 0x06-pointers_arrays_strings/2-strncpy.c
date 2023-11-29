#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: string
 * @src: string
 * @n: int
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (src[0] == '\0')
	{
		return (0);
	}
	for (i = 0; src[i] != '\0' && n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}