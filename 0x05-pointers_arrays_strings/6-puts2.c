#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: String to be printed
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0', str[i + 1] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
