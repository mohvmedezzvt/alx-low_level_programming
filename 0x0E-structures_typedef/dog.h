#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Poppy
 * @name: the dog name.
 * @age: the dog age.
 * @owner: the dog owner.
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H_ */
