#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: An Integer that will extracted from it the last number.
 *
 * Return: The number Extracted.
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last = last * -1;
	return (last);
}
