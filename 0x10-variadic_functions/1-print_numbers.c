#include "variadic_functions.h"

/**
 * print_numbers - Print numbers
 * @separator: string to be printed between numbers
 * @n: number of arguments
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int c;
	va_list args;

	va_start (args, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(args, int);
		printf("%d", c);
		if (separator != NULL)
		{
			printf("%s", seprator);
		}
	}
	_putchar('\n');
	va_end (args);
}
