#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: number
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int i, bit, c;

	c = 0;
	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit == 1)
		{
			c = 1;
		}
		if (c == 1)
		{
			_putchar(bit + '0');
		}
	}
}
