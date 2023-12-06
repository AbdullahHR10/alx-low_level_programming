#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: NULL if str = NULL or if memory failed, otherwise a ptr to string
 */
char *_strdup(char *str)
{
	int i;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = (char *)malloc(sizeof(char) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
