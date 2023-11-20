#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

