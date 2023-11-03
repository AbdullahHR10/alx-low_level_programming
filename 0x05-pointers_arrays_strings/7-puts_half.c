#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: - char to be length checked
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * puts_half - Prints half of a string
 * @str: char
 * Return: 0
 */

#include <stdio.h>
#include <string.h>

void puts_half(char *str) {
    int length = _strlen(str);
    int start_index;

    if (length % 2 == 0) {
        start_index = length / 2;
    } else {
        start_index = (length - 1) / 2;
    }

    for (int i = start_index; i < length; i++) {
        _putchar(str[i]);
    }

    _putchar('\n');
}
