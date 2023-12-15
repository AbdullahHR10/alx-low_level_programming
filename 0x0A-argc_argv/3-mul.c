#include "main.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of strings
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc != 3)
	{
		return (1);
		printf("Error");
	}
	for (i = 0; i <= argc; i++)
	{
	}
	sum = argv[i] * argv[i - 1];
	printf("%d\n", sum);
	return (0);
}
