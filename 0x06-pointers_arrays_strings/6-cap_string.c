#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: char
 * Return: 0
 */

char *cap_string(char *str)
{
	int i;
	int newword;

	i = 0;
	newword = 1;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (nothing || str[i - 1] == ' ' || str[i - 1] == '\t' ||
					str[i - 1] == '\n' ||
					str[i - 1] == ',' || str[i - 1] == ';' ||
					str[i - 1] == '.' || str[i - 1] == '!' ||
					str[i - 1] == '?' || str[i - 1] == '"' ||
					str[i - 1] == '(' || str[i - 1] == ')' ||
					str[i - 1] == '{' || str[i - 1] == '}') {
				str[i] = str[i] - 'a' + 'A';
			}
			newword = 0;
		}
		else
		{
			newword = 1;
		}
		i++;
	}
	return (str);
}
