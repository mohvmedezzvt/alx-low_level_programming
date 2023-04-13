#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and sets the memory to 0.
 *
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL if an error occurs.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *temp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	temp = ptr;
	for (i = 0; i < (nmemb * size); i++)
		temp[i] = 0;

	return (ptr);
}
