#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to return it's square root.
 *
 * Return: the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - calculates the natural square root of a number recursively.
 * @n: the number to calculate its square root.
 * @v: the value to increment and test for a square root.
 *
 * Return: the natural square root of a number,
 * or -1 if the number doesn't have a natural square root.
 */
int _sqrt_helper(int n, int v)
{
	if (v * v == n)
		return (v);
	if (v * v < n)
		return (_sqrt_helper(n, v + 1));

	return (-1);
}
