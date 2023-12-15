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
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if ((*argv[i] >= 'a' && *argv[i] <= 'z') || (*argv[i] >= 'A' && *argv[i] <= 'Z'))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
