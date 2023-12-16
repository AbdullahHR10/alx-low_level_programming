#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: contains the copy
 * @src: memory to be copied
 * @n: number of bytes to be copied
 * Return: a pointer to the copied memory (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
