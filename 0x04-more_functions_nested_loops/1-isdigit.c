#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: ascii code for the character that will be checked.
 *
 * Return: 1 if c is a digit and 0 if c is otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
