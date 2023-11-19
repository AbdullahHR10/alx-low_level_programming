#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs
 * @d: ptr
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	free(d);
}
