#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc
 * @nmemb: int
 * @size: int
 * Return: NULL if nmemb or size = 0 or if malloc fails, return a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total;
	void *i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total = nmemb * size;

	i = malloc(total);
	if (i == NULL)
	{
		return (NULL);
	}
	memset(i, 0, total);

	return (i);
}
