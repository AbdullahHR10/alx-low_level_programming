#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: char
 * @s2: char
 * @n: int
 * Return: NULL if it fails, otherwise a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t c;
	size_t i;
	size_t j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = strlen(s1);
	j = strlen(s2);

	if (n >= j)
	{
		n = j;
	}
	c = i + n + 1;

	ptr = malloc(c);
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, s1);
	strncat(ptr, s2, n);
	ptr[c - 1] = '\0';
	return (ptr);
}
