#include <stdio.h>

/**
 *
 */

void _puts(char *str)
{
    int i = (int)strlen(str);

	for (i = strlen(str); i != '\0'; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
