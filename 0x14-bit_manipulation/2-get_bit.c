#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: number
 * @index: location of a value of a bit
 * Return: value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	long int i;

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		if (i == index)
		{
			return ((n >> i) & 1);
		}
	}
	return (-1);
}
