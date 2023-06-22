#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Prints anything based on the format provided.
 * @format: A string containing the format specifiers.
 *          - 'c' for char
 *          - 'i' for integer
 *          - 'f' for float
 *          - 's' for char *
 *          Any other character is ignored.
 *          If the char * is NULL, it prints "(nil)".
 *          Each value is separated by a comma and space.
 *
 * Return: Void.
 */
void print_all(const char * const format, ...)
{
	int i = 0, accepted;
	char *s;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		accepted = 0;

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				accepted = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				accepted = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				accepted = 1;
				break;
			case 's':
				s = va_arg(args, char *);
				accepted = 1;
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
		}
		if (format[i + 1] && accepted)
			printf(", ");

		i++;
	}
	printf("\n");
	va_end(args);
}
