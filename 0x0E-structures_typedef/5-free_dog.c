#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: ptr
 * Return: NULL
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d);

	d = NULL;

}
