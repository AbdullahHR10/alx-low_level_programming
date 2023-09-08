#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the last digit of n
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n");
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is 0\n");
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n");
	}
	return (0);
}
