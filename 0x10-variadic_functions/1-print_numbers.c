#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * @separator: string to be printed between numbers
 * @n: number of arguments
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int c;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(args, int);
		printf("%d", c);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
