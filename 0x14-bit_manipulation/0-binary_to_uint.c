#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: the coverted number or
 * 0 if there is one or more chars in the string b that is not 0 or 1
 * or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal;

	decimal = 0;
	if (b == NULL || *b == '\0')
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		decimal = decimal * 2 + (b[i] - '0');
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
	}
	return (decimal);
}
