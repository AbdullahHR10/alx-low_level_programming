#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * Return: -1 if y is lower than 0
 */

int _pow_recursion(int x, int 
{
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y-1));
}
