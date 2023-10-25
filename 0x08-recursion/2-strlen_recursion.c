#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: String
 * @i: Int
 * Return: length of i
 */

int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s == 0)
	{
		return(0);
	}
	_putchar(*s);
	i++;
	_puts_recursion(s + 1);
}
