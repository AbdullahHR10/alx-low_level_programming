#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 0 && i != 10)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
