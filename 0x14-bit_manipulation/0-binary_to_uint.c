#include "main.h"

/**
 * binary_to_uint - converts a binary to an uint.
 * @b: binary number as a string.
 *
 * Return: converted number, or 0 if b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		number <<= 1;
		if (*b++ == '1')
			number += 1;
	}

	return (number);
}
