#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0 && i != 0)
		{
			printf("FizzBuzz");
			if (i != 100)
			_putchar(' ');
		}
		else if (i % 3 == 0 && i != 0)
		{
			printf("Fizz");
			if (i != 100)
			_putchar(' ');
		}
		else if (i % 5 == 0 && i != 0)
		{
			printf("Buzz");
			if (i != 100)
			_putchar(' ');
		}
		else
		{
			if (i != 0)
			printf("%d", i);
			if (i != 100)
			_putchar(' ');
		}
	}
	return (0);
}
