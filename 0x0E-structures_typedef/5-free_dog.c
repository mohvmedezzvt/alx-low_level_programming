#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs.
 * @d: the struct pointer to free.
 *
 * Return: Void.
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
