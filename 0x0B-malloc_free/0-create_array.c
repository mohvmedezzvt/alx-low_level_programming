#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the will be created size.
 * @c: the character will be initializes to the array.
 *
 * Return: NULL if size == 0 or on failed,
 * a pointer to the array in success.
*/
char *create_array(unsigned int size, char c)
{
	size_t i;
	char *array;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
