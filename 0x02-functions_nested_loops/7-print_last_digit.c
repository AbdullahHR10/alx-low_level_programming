#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @r: the number to print the last digit from
 * Return: the value of the last digit
 */

int print_last_digit(int r)
{
	int a;
	if (r < 0)
		r *= -1;
	a = r % 10;
	if (a < 0)
		a *= -1;
	_putchar(a + '0');
	return (a);
}
