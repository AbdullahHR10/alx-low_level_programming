#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: string
 * @src: string
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		_putchar(dest[i]);
	}
	for (i = 0; src[i] != '\0'; t++)
	{
		_putchar(src[i]);
	}
	return (dest);
}
