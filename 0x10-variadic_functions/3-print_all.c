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
    if (format == NULL)
    {
        printf("\n");
        return;
    }

    int i = 0;
    int printed = 0;
    va_list args;

    va_start(args, format);

    while (format[i] != '\0')
    {
        if (i > 0 && format[i - 1] != '\0' && printed)
            printf(", ");

        if (format[i] == 'c')
        {
            printf("%c", va_arg(args, int));
            printed = 1;
        }
        if (format[i] == 'i')
        {
            printf("%d", va_arg(args, int));
            printed = 1;
        }
        if (format[i] == 'f')
        {
            printf("%f", va_arg(args, double));
            printed = 1;
        }
        if (format[i] == 's')
        {
            char *str = va_arg(args, char *);
            if (str == NULL)
                printf("(nil)");
            else
                printf("%s", str);
            printed = 1;
        }

        i++;
    }

    printf("\n");

    va_end(args);
}

