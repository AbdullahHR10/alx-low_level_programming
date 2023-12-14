#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: bit pointer
 * @index: location of a value of a bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	long int i;

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		if (i == index)
		{
			*n = *n | (1 << i);
			return (1);
		}
	}
	return (-1);
}
