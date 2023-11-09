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

	for (i = 0; i < n; ++i)
	{
		value = va_arg(args, int);
		printf("%d", value);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
