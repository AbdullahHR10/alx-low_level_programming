#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints everything
 * @c: char
 * @i: int
 * @f: float
 * @s: char *
 * @format: format
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	int i;
	va_list args;
	char *str;

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start (args, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (i > 0 && format[i - 1] != '\0')
		{
			printf(", ");
		}

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				{
					str = va_arg(args, char *);
					if (str == NULL)
						printf("(nil)");
					else
						printf("%s", str);
				}
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
