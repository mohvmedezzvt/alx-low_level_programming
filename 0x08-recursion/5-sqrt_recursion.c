#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural sqrt of a number.
 * @n: the number to calculate the square root of.
 *
 * Return: the natural sqrt of the number,
 * -1 if the number does not have a natural sqrt.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_recursion_helper(n, 1, n));
}

/**
 * _sqrt_recursion_helper - Helper function to calculate the sqrt recursively.
 * @n: the number to calculate the sqrt of.
 * @start: the start of the search space range.
 * @end: the end of the search space range.
 *
 * Return: the sqrt of the number within the specified search space range,
 * -1 if the sqrt is not found within the range.
*/
int _sqrt_recursion_helper(int n, int start, int end)
{
	long int mid;

	if (start > end)
		return (-1);

	mid = (start + end) / 2;
	if (mid * mid == n)
		return (mid);
	else if (mid * mid > n)
		return (_sqrt_recursion_helper(n, start, mid - 1));
	else
		return (_sqrt_recursion_helper(n, mid + 1, end));
}
