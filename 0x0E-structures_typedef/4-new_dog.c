#include <stdio.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	int j;

	if (name == NULL || owner == NULL)
	{
		return NULL;
	}
	
	dog_t *newdog = (dog_t *)malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}
	newdog->name = (char *)malloc(sizeof(name)+1);
	newdog->owner = (char *)malloc(sizeof(owner)+1);

	if (newdog-> name == NULL || newdog-> owner == NULL)
	{
		free(newdog);
		return (NULL);
	}
	return (newdog);
}
