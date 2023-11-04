#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: char
 * @src: char
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int dlength;
	int slength;
	int totallength;

	while (dest[dlength] != '\0')
	{
		dlength++;
	}
	while (src[slength] != '\0')
	{
		slength++;
	}
	totallength = dlength + slength;

	for (i = 0; i < slength; i++)
	{
		dest[dlength + i] = src[i];
	}
	dest [totallength] = '\0';

	return (dest);
}
