#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees dogs
 * @d: ptr
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return (NULL);
	}
	free(d);

	*d = NULL;
}
