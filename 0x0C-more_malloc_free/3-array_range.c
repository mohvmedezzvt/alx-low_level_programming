#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates a new array of integers containing all values
 * between the given min and max (inclusive), orederd from min to max.
 *
 * @min: The minimum value to include in the array.
 * @max: The maximum value to include in the array.
 *
 * Return: A pointer to the newly created array,
 * or NULL if the allocation failed or min > max.
 */
int *array_range(int min, int max)
{
	int *result;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	result = malloc(size * sizeof(int));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		result[i] = min;
		min++;
	}

	return (result);
}
