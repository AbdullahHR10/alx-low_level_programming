#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it with a char
 * @size: int
 * @c: char
 * Return: Null if size = 0, otherwise it returns a
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a = NULL;

	if (size == 0)
	{
		return (NULL);
	}
	if (size != 0)
	{
		a = (char *)malloc(size * sizeof(char));
		if (a != NULL)
		{
			for (i = 0; i < size; i++)
			{
				a[i] = *c;
			}
		}
	}
	return (a);
}
