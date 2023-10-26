#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: int
 * Return: the square root of n, -1 if n doesn't have a square root
 */

int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return (-1);
    }
    return (n / _sqrt_recursion(n));
}	
