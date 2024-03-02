#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	char alpha[27] = "abcdefghijklmnopqrstuvwxyz";
	char alphaB[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; alpha[i] != '\0'; i++)
	{
		putchar(alpha[i]);
	}
	for (i = 0; alphaB[i] != '\0'; i++)
	{
		putchar(alphaB[i]);
	}
	putchar('\n');
	return (0);
}
