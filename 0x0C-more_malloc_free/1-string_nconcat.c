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
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	int i = strlen(s1);
	int j = strlen(s2);
	char *ptr;

	if (n >= j)
	{
		n = j;
	}
	int c = i + n + 1;

	ptr = malloc(c);
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, s1);
	strncpy(ptr, s2, n);
	ptr[c - 1] = '\0';
	return (ptr);

	free(ptr);
}
