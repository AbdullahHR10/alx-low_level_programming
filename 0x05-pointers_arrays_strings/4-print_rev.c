#include "main.h"

/**
 *
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

void print_rev(char *s)
{
	int i;
	
	i =  _strlen(s);

	for (i = _strlen(s); i != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
