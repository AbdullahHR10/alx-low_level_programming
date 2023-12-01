#include "main.h" 
#include <stdlib.h>
/**
 * _puts_recursion - Prints a string
 * @s: string
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	int i;

	if (s == NULL)
	{
		_putchar('\n');
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
