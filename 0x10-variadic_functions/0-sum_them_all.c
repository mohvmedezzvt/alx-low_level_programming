#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of all its parameters.
 *
 * @n: the numbers of parameters to sum.
 * @...: a variable number of parameters to sum.
 *
 * Return: the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int value = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value += va_arg(args, unsigned int);
	}

	va_end(args);
	return (value);
}
