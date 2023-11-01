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
    if (argc < 3) {
        printf("Error: Not enough arguments\n");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    if (num1 == 0 || num2 == 0) {
        printf("Error: Invalid input\n");
        return 1;
    }

    int r = num1 * num2;
    printf("%d\n", r);

    return 0;
}
