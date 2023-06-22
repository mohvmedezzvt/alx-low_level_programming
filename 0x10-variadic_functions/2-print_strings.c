#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints a variable number of strings,
 * separated by a given separator.
 * @separator: The separator string to be printed between the strings.
 * @n: The number of strings to be printed.
 * @...: The variable arguments representing the strings.
 *
 * Return: Void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (!s)
			printf("(nil)");
		else
			printf("%s", s);

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
