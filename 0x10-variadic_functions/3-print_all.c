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
	int i = 0;
	char *s;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		if (i != 0 && (format[i] == 'c' || format[i] == 'i' ||
				   format[i] == 'f' || format[i] == 's'))
			printf(", ");

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
					printf("(nil)");
				else
					printf("%s", s);
				break;
		}

		i++;
	}

	printf("\n");
	va_end(args);
}
