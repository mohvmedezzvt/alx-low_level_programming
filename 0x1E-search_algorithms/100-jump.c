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
	size_t i, left, right, jump;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);
	left = 0;
	right = jump;

	while (right < size)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] <= value && array[right] >= value)
			break;
		left = right;
		right += jump;
	}

	if (right >= size)
		right = size - 1;

	for (i = left; i <= right; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	return (-1);
}
