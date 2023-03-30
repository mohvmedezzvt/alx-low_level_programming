#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers.
 * @n: the number of elements to swap.
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
