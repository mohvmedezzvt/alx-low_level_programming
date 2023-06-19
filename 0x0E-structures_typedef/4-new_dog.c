#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 *
 * Return: pointer to the new_dog structure.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	size_t name_len, owner_len;

	name_len = strlen(name) + 1;
	owner_len = strlen(owner) + 1;

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = (char *)malloc(name_len);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strncpy(new_dog->name, name, name_len);

	new_dog->age = age;

	new_dog->owner = (char *)malloc(owner_len);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strncpy(new_dog->owner, owner, owner_len);

	return (new_dog);
}
