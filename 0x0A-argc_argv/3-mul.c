#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiplies two numbers
 * @argc: an int
 * @argv: an array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	int num1 = atoi(argv[1]);
        int num2 = atoi(argv[2]);
        int r = num1 * num2;

	if (argc > 2)
	{
		printf("%d\n", r);
	}

	return (0);
}
