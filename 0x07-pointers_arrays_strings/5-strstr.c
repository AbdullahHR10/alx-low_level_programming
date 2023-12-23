#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: the main string
 * @needle: substring
 * Return: a pointer to the substring or NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	const char *h, *n;

	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}
	for (; *haystack != '\0'; haystack++)
	{
		h = haystack;
		n = needle;
		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
