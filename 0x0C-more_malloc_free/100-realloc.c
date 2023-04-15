#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 *
 * @ptr: Pointer to the memory previously allocated with a call to malloc.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: If new_size > old_size, the added memory should not be initialized.
 * If new_size == old_size, don't do any thing and return ptr.
 * If ptr is NULL, then the call is equvalent to malloc(new_size),
 * for all values of old_size and new_size.
 * If new_size is equal to zero, and ptr is not NULL.
 * then the call is equivalent to free(ptr). Return NULL.
 * Otherwise, return a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;
	char *old_p, *new_p;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	old_p = ptr;
	new_p = new_ptr;
	for (i = 0; i < old_size && i < new_size; i++)
		new_p[i] = old_p[i];

	free(ptr);

	return (new_ptr);
}
