#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Poppy
 * @name: the dog name.
 * @age: the dog age.
 * @owner: the dog owner.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_H_ */
