#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @n: number of bytes to be filled
 * @b: constant byte
 * @s: pointer to a memory area
 * Return: a pointer to the memory area (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (s - n);
}
