#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints any type of data.
 *
 * @format: string containing the types of arguments to be printed.
 *
 * Return: Void.
*/
void print_all(const char * const format, ...)
{
	char *s;
	va_list args;
	int j = 0, accepted;

	va_start(args, format);
	while (format && format[j])
	{
		accepted = 0;
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				accepted = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				accepted = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				accepted = 1;
				break;
			case 's':
				s = va_arg(args, char *);
				accepted = 1;
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
		}

		if (format[j + 1] && accepted)
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(args);
}
