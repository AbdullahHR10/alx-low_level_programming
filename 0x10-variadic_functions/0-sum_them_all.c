#include "main.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: number of arguments
 * Return: the sum of parameters, or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, c;
	va_list (args, n);

	if (n = 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		c += va_arg(args, int);
	}
	va_end(args);
	return (c);
}
