#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints a variable number of numbers, separated by a given separator.
 * @separator: The separator string to be printed between the numbers.
 * @n: The number of numbers to be printed.
 *
 * Return: Void.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, unsigned int);
		printf("%d", num);

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
