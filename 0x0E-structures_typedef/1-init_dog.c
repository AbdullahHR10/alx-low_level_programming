#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * struct dog - Stuct that contains info about dogs
 * @d: ptr to struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog;

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
