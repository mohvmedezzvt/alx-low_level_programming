#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: name of the new dog.
 * @age: age of the new dog.
 * @owner: owner of the new dog.
 *
 * Return: Pointer to the new dog,
 * or NULL if the function fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_length = 0, owner_length = 0, i;
	dog_t *new_dog;

	/* Get length each of them */
	while (name[name_length])
		name_length++;
	while (owner[owner_length])
		owner_length++;

	/* Allocating memory for the new dog structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocating memory for the name and owner strings */
	new_dog->name = malloc(sizeof(char) * (name_length + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (owner_length + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	/* Copying name and owner strings to the allocated memory */
	for (i = 0; i <= name_length; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i <= owner_length; i++)
		new_dog->owner[i] = owner[i];

	/* Setting the age value of the new dog */
	new_dog->age = age;

	/* Returning the pointer to the new dog */
	return (new_dog);
}
