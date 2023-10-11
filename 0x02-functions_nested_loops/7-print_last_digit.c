#include "main.h"

/**
 * print_last_digit : Prints the last digit of a number
 * @r: the number to print the last digit from
 * Return: the value of the last digit
 */

int print_last_digit(int r)
{
	if (r < 0)
		r = r * -1;
	_putchar((r %10) + '0');
	return(r %10);
}
