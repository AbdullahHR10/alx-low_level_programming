#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first character
 * @str: string
 * Return: Nothing
 */

void puts2(char *str)
{
	int i;

	if (str[0] == '\0')
	{
		return;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
