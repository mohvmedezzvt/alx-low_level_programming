#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: Minimum Number.
 * @max: Maximum Number.
 *
 * Return: integer pointer to the allocated array.
*/
int *array_range(int min, int max)
{
	int i, j, len = 0;
	int *array;

	if (min > max || min < 0)
		return (NULL);

	for (i = min; i <= max; i++)
		len++;

	array = (int *)malloc(sizeof(int) * (len + 1));
	if (array == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max; i++, j++)
		array[j] = i;

	return (array);
}
