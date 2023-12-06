#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it with a specific char
 * @size: size of array
 * @c: char
 * Return: ptr to array or NULL if failed
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	char *str;
	unsigned int i;

	ptr = (char *)malloc(sizeof(char) * 3);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		c = str[i];
	}
	str[i] = '\0';
	free(ptr);
	return (ptr);
}
