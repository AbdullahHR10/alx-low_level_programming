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
		if (d->name == NULL)
		{
			printf("Name : (nil)");
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)");
		if (d->age == 0)
		{
			printf("Age : (nil)");
		}
		else
		{
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
		}
	}
}
