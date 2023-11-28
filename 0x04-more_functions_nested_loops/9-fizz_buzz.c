#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			if (i != 100)
			putchar(' ');
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i != 100)
			putchar(' ');
		}
		else
		{
			if (i != 0)
			printf("%d", i);
			if (i != 100)
			putchar(' ');
		}
	}
	return (0);
}
