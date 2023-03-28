#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: the string will be printed it's second half.
 *
 * Return: Void.
 */
void puts_half(char *str)
{
	int start, i, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	start = len / 2;

	if (len % 2 != 0)
		start++;

	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
