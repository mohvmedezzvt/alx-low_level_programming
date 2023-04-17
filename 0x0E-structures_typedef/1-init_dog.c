#include <stdlib.h>
#include "dog.h"
#include "main.h"

/**
 * init_dog - Inintializes a variable of type struct dog.
 *
 * @d: Pointer to the struct dog.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner of the dog.
 *
 * Return: Void.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
