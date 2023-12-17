#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *c;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(args, char *);
		printf("%s", c);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
