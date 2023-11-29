#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
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
		if (str[i] == '\0')
		{
			break;
		}
	}
	_putchar('\n');
}
