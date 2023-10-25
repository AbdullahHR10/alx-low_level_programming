#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: int
 * Return factorial of number, if n < 0 return -1
 */
int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	return n * (factorial(n-1);
}
