#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: the number to calculate the factorial of.
 *
 * Return: the factorial of the number.
*/
int factorial(int n)
{
	if (n >= 1)
		return (n * factorial(n - 1));
	else if (n == 0)
		return (1);
	else
		return (-1);
}
