#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: An integer of the number that will computed.
 *
 * Return: a number that computed from n.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
