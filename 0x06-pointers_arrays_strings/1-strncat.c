#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @n: int
 * @dest: char
 * @src: char
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dlength;
	int slength;

	dlength = 0;
	slength = 0;

	while (dest[dlength] != '\0')
	{
		dlength++;
	}
	while (slength < n && src[slength] != '\0')
	{
		slength++;
	}

	for (i = 0; i < dlength && i < n; i++)
	{
		dest[dlength + i] = src[i];
	}
	dest[dlength + i] = '\0';

	return (dest);
}
