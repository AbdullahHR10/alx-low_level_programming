#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: NULL if str = NULL, otherwise a pointer
 */


char *_strdup(char *str)
{
	char *s = NULL;
	unsigned int i;

	if (*str == NULL)
	{
		return (NULL);
	}

	s = (char *)malloc(sizeof(str))
		return (s);
}
