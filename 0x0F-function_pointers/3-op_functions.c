#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Returns the sum of a and b
 * @a: int
 * @b: int
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the diff of a and b
 * @a: int
 * @b: int
 * Return: diff of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of a and b
 * @a: int
 * @b: int
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the divison of a and b
 * @a: int
 * @b: int
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the divison of a and b
 * @a: int
 * @b: int
 * Return: remainder of the divsion of a and anb
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
