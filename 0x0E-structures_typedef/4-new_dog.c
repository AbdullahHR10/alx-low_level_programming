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
	int name_l;
	int owner_l;

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
	name_l = strlen(name);
	owner_l = strlen(owenr);
	newdog->name = (char *)malloc(sizeof(char) * name_l);
	newdog->owner = (char *)malloc(sizeof(char) * owner_l);

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
