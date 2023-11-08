#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
void call_back(char *name)
{
	_putchar(name);
}
