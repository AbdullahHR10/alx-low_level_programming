#include "main.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of strings
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	UNUSED(argv);

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argc);
	}
	return (0);
}
