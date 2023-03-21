#include "main.h"
/**
 * print_sign - Checks and print the sign of a number.
 *
 * @n: An Integer number.
 *
 * Return: 1 if the integer n is positive number.
 * ------ (-1) if the integer n is negative number.
 * ------- 0 if the integer n is Zero number.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
