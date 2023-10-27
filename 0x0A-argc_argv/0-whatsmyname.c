#include <stdio.h>
#include "main.h"

/**
 * main - prints it's own name
 * @agrc: an int
 * @argv: an array
 * return: always 0
 */

int main(int argc, char* argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[argc * 0]);
	}
	return (0);
}
