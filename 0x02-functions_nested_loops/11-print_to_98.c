#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: starting point of printing
 *
 * Return: Nothing
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (i < 10)
				_putchar(i + '0');
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (i < 100)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else
			{
				_putchar(i / 100 + '0');
				_putchar((i / 10) % 10 + '0');
				_putchar(i % 10 + '0');
			}}}}
