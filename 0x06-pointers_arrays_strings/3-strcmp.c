#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: char
 * @s2: char
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
        int i, c;

        for (i = 0; s1[i] != '\0'; i++)
        {
        }
        for (c = 0; s2[c] != '\0'; c++)
        {
        }
        if (*s1 > *s2)
        {
            return (1);
        }
        if (*s2 > *s1)
        {
            return (-1);
        }
        else
        {
            return (0);
        }
}
