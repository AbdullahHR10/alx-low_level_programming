#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - Function Selector
 * @S: char
 * Return: pointer to function
 */

int (*get_op_func(char *S))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	i = 0;
	while (ops[i].op)
	{
		of(*(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);
			i++;
	}
	printf("ERROR\n");

	exit(99);
}
