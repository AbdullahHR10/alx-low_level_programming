#include "main.h"

/**
 *
 */

void _puts(char *str)
{
    int i =  _strlen(str);

	for (i = _strlen(str); i != '\0'; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
