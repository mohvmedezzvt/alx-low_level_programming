#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array.
 *
 * @array: a pointer to the integer array to be searched.
 * @size: the number of elements in the array.
 * @cmp: is a pointer to the function to be used to compare values.
 *
 * Return: the index of the first matching element in the array,
 * if the search value isn't found, the function returns -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
