#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: ascii code for the character will be checked.
 *
 * Return: 1 if Uppercase and 0 if otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
