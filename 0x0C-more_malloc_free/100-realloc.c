#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: a pointer to the memory previously allocated.
 * @old_size: the size in bytes of the allocated space for ptr.
 * @new_size: the new size in bytes of the new memory block.
 *
 * Return: Pointer to the reallocated memory block,
 * NULL if new_size is 0 and ptr is not NULL, or if the allocation fails.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	size_t i;
	void *new_ptr;
	unsigned char *s, *d;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = (void *)malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	s = (unsigned char *)ptr;
	d = (unsigned char *)new_ptr;
	for (i = 0; i < ((new_size > old_size) ? old_size : new_size); i++)
		d[i] = s[i];

	free(ptr);
	return (new_ptr);
}
