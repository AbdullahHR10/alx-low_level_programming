#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: the main string
 * @needle: substring
 * Return: a pointer to the substring or NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (needle[j] == haystack[i] && needle[j + 1] == haystack[i + 1])
			{
				return (&needle[j]);
			}
		}
	}
	return (NULL);
}
