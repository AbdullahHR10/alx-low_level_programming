#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The Number which it's last digit to be printed
 *
 * Return: Last digit of a number
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	if (n = -2147483648)
		return (8);
	_putchar(n % 10 + '0');
	return (n % 10);
}
