#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: decimal number to convert.
 *
 * Return: Void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) == mask)
		{
			i = 1;
			_putchar('1');
		}
		else if (i)
			_putchar('0');

		mask >>= 1;
	}
}
