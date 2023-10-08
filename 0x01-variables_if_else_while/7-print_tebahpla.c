#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet[26] = "zyxwvutsrqponmlkjihgfedcba";
int i;
for (i = 0; i < 26; i++)
{
putchar(alphabet[i]);
}
utchar('\n');
return (0);
}
