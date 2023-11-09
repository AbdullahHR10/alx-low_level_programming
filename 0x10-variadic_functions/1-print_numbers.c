#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * @separator: chat ptr
 * @n: const unsigned int
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int value;
	va_list args;
	va_start(args, n);

	if (separator == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; ++i)
	{
		value = va_arg(args, int);
		_putchar(value);
		if (separator != NULL && i < n - 1)
		{
			_putchar(separator);
		}
	}
	va_end(args);
	_putchar('\n');
}
