#include "main.h"
/**
 * print_alphabet_x10 - prints the lowercase alphabet ten times,
 * each on a new line
 *
 * This function loops through the lowercase alphabet ten times,
 * printing each letter on a new line using the _putchar function.
 * Each iteration of the outer
 * loop is separated by a newline character.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
