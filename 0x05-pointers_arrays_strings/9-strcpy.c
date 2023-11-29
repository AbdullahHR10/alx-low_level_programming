#include "main.h"

/**
 * _strcpy - opies the string pointed to by src, including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: buffer pointer
 * @src: string pointer
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	char temp;

	if (src[0] == '\0')
	{
		return (dest);
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		temp = src[i];
	}
	return (dest);
}
