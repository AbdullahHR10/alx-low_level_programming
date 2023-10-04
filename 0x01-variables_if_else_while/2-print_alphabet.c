#include <stdio.h>

/**
* main - prints lowercase alphabet
*
* Return: - always 0
*/
int main(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz ";
int i;
for (i = 0; i < 26; i++)
{
putchar(alphabet[i]);
}
return (0);
}
