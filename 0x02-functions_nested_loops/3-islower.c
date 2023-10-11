#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: is the char to be checked
 * Return: 1 if it's a lowercase letter, 0 if it's an uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
