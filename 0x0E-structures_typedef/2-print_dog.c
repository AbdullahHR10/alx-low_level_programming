#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: ptr to stuct
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge : %d\nOwner: %s\n", name, age, owner);
	}
