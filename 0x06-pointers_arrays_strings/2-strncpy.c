#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: char
 * @src: char
 * @n: int
 * Return: always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
