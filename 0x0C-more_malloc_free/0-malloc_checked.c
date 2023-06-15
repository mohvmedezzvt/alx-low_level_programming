#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: the number of bytes to allocate.
 *
 * Return: pointer to allocated space.
*/
void *malloc_checked(unsigned int b)
{
	void *pointer;

	if (!b)
		exit(98);

	pointer = (void *)malloc(b);
	if (pointer == NULL)
		exit(98);

	return (pointer);
}
