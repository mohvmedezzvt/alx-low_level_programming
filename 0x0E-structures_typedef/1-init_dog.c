#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 *
 * @d: pointer to struct dog.
 * @name: pointer to name string.
 * @age: the dog's age.
 * @owner: pointer to owner string.
 *
 * Return: Void.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
