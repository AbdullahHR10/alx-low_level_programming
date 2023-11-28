#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			if (i != 99)
			putchar(' ');
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			if (i != 99)
			putchar(' ');
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i != 99)
			putchar(' ');
		}
		else
		{
			printf("%d", i);
			if (i != 99)
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
