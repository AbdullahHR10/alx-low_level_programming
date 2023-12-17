#include "variadic_functions.h"
#define PRINT_NIL_IF_NULL(format) ((format == NULL) ? \
		(printf("(nil)\n"), 1) : 0)

/**
 * print_all - Prints anything
 * @format:  list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	char *s;
	const char *ptr = format;

	while (PRINT_NIL_IF_NULL(format));
	va_start(args, format);
	while (*ptr != '\0')
	{
		c = *ptr;
		switch (c)
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
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		ptr++;
		if (*ptr != '\0' && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(args);
}
