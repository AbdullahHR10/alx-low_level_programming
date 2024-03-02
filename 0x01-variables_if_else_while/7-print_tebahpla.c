#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	char alpha[27] = "zyxwvutsrqponmlkjihgfedcba";

	for (i = 0; alpha[i] != '\0'; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
