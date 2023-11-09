#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: char
 * @n: const unsigned int
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
}
