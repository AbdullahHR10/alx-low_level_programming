#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: an int
 * @argv: an array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void)*argv[0];
	printf("%d\n", argc);

	return (0);
}
