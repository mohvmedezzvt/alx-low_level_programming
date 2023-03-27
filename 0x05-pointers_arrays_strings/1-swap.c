#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: 1st integer to swap.
 * @b: 2nd integer to swap.
 *
 * Return: Void.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
