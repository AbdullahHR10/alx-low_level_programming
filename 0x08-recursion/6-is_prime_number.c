#include "main.h"

/**
 * prime_helper - helps to check if n is prime or not
 * @n: int
 * @i: int
 * Return: function
 */
int prime_helper(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (prime_helper(n, i + 1));
	}
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number
 * @n: int
 * Return: 1 if n is prime , 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_helper(n, 2));
	}
}
