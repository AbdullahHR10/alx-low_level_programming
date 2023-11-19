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
		if (d->name == NULL || d->owner == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("Name: %s\nAge: %lf\nOwner: %s\n", d->name, d->age, d->owner);
		}
	}
}
