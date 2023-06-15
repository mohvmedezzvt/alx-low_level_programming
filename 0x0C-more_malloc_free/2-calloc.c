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
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = (void *)malloc(size * nmemb);
	if (array == NULL)
		return (NULL);

	return (array);
}
