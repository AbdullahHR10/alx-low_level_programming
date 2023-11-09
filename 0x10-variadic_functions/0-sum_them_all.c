#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * Sum_them_all - Returns the sum of all its parameters
 * @n: const unsigned int
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	int value;
	int i;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	va_list args;
	va_start(args, n);
	for (i = 0; i < n; ++i)
	{
		value = va_arg(args, int);
		sum += value;
	}
	va_end(args);
	return (sum);
}
