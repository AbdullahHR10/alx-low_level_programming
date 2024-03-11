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

	for (i = 0; str[i] != '\0';)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
