#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another
 * @n: number
 * @m: another number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int c = n ^ m;

	while (c != 0)
	{
		count = count + (c & 1);
		c = c >> 1;
	}
	return (count);
}
