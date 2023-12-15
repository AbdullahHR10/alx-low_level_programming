#include "main.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of strings
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, sum, value, value2;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	for (i = 1; i < argc - 1; i++)
	{
		value = atoi(argv[1]);
		value2 = atoi(argv[2]);
	}
	sum = value * value2;
	printf("%d\n", sum);
	return (sum);
}
