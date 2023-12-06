#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure, ptr that contains contents of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr;

	ptr = (char *)malloc(sizeof(char) * strlen(s1));
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		s1[i + j] = s2[j];
	}
	s1[i + j] == '\0';
	return (ptr);
}
