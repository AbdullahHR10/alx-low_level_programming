#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: char
 * Return: 0
 */

char *cap_string(char *str)
{
	int i;
	int nothing;

	i = 0;
	nothing = 1;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (nothing || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
					str[i - 1] == ',' || str[i - 1] == ';' ||
					str[i - 1] == '.' || str[i - 1] == '!' ||
					str[i - 1] == '?' || str[i - 1] == '"' ||
					str[i - 1] == '(' || str[i - 1] == ')' ||
					str[i - 1] == '{' || str[i - 1] == '}') {
				str[i] -= 32;
			}
			nothing = 0;
		}
		else {
			nothing = 1;
		}
		i++;
	}
	return (str);
}
