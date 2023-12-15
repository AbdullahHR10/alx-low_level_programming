#include "main.h"
#include <ctype.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of strings
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i + 1]) == 0)
		{
			printf("Error\n");
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}