#include "main.h" 
#include <stdlib.h>
/**
 * _puts_recursion - Prints a string
 * @s: string
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
