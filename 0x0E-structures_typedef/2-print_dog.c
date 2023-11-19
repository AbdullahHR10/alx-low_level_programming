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
		if (d->name == NULL && d->owner == NULL)
		{
			printf("Name: (nil)\nAge: %f\nOwner: (nil)\n", d->age);
		}
		else if (d->owner == NULL)
		{
			printf("Name: %s\nAge: %f\nOwner: (nil)\n", d->name, d->age);
		}
		else
		{
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
		}
	}
}
