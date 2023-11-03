#include <stdio.h>

/**
 * main - prints numbers from 1 - 100
 * Return: 0
 */

int main()
{
	int c;
	
	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0)
		{
			printf("Fizz ");
		}
		if (c % 5 == 0)
		{
			printf("Buzz ");
		}
		if (c % 3 == 0 && c % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		if (c % 3 != 0 && c % 5 != 0)
		{
			printf("%d ", c);
		}
	}
}
