#include "main.h"

/**
 * print_rev - prints a string, in reverse.
 * @s: The pointer for the string will be printed.
 *
 * Return: Void.
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (len > 0)
	{
		s--;
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
