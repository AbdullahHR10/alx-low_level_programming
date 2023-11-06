#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	newdog = (dog_t *)malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}
	newdog->name = (char *)malloc(strlen(name) + 1);
	newdog->owner = (char *)malloc(strlen(owner) + 1);

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = strcpy(newdog->name, name);
	newdog->owner = strcpy(newdog->owner, owner);

	newdog->age = age;

	return (newdog);
}
