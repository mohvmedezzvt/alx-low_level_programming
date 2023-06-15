#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: the number of elements.
 * @size: the size per each element.
 *
 * Return: a pointer to space allocated.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t i;
	unsigned char *ptr;
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = (void *)malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	ptr = (unsigned char *)array;
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (array);
}
