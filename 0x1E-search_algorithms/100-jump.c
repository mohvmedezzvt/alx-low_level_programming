#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using the
 * Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, jump;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);
	i = 0;
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (i + jump > size)
		{
value_found:
			printf("Value found between indexes [%lu] and [%lu]\n", i, i + jump);
			for (j = i; j <= i + jump && j < size; j++)
			{
				printf("Value checked array[%lu] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
		else if (array[i] <= value && array[i + jump] >= value)
			goto value_found;
		i += jump;
	}

	return (-1);
}
