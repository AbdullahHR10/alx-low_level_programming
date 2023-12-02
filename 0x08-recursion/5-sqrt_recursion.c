#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: int
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	else
	{
		return (sqrthelper(n, i));
	}
}

/**
 * sqrt_helper - a helper to find the square root
 * @i: int
 * @n: int
 * Return: i if success -1 if not
 */

int sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);

	}
	else
	{
		return (sqrthelper(n, i + 1));
	}
}
