#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the input number
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d", i);
			printf(",");
			printf(" ");
		}
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d", i);
			printf(",");
			printf(" ");
		}
	}
	printf("98\n");
}
