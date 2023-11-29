#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: pointer
 * @src: pointer
 * @n: amount of chars copied
 * Return: a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; && n > 0; j++, n--)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
