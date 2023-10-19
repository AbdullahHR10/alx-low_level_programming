#include "main.h"

/**
 * _isdigit - checks for a digit between 0 - 9
 * @c: to be checked
 * Return: 1 if c is a digit, else 0
 */

int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
