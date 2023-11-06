#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * @d: ptr
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

int main(void)
{
	struct dog mydog;

	init_dog(&mydog, "Rusty", 2.5, "Kyo");

	printf("The name of my dog is %s\n", mydog.name);
	printf("The age of my dog is %lf\n", mydog.age);
	printf("The owner of the dog is %s\n", mydog.owner);
}