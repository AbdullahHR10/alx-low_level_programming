#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: char
 * @src: char
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int c;
	int t;
	int b;

	for (i = 0; dest[i] != '\0'; i++)
	for (c = 0; src[c] != '\0'; c++)
	t = c + i;

	for (b = 0; b < c; b++)
	{
		dest[i + 1] = src[i];
	}
	dest[t] = '\0';

	return (dest);
}
