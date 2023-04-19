#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - calls a function on each element of an integer array.
 *
 * @array: a pointer to the integer array.
 * @size: the number of the elements in the array.
 * @action: a pointer to a function that i want to use.
 *
 * Return: Void.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
