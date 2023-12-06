#include "main.h"
#include <stdlib.h>
#include <string.h>
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

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ptr = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
