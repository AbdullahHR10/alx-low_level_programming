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
	int i, size;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	a = malloc(sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < 50; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
