#include "dog.h"
#include <string.h>

/**
 * init_dog - a function that initialize a variable of type struct dog.
 * @d: struct dog pointer.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner to the dog.
 *
 * Return: Void.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
