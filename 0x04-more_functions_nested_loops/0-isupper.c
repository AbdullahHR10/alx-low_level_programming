#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: char to be checked
 * Return: 1 if c is uppercase, 0 if c is lowercase
 */

int _isupper(int c)
{
	if (c < 'A' && c > 'Z')
    {
    return (1);
    }
    else
    {
    return (0);
    }
}
