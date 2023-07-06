#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int.
 * @b: is pointing to a string of 0 and 1 charachters.
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1,
 * b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		number = number * 2 + (b[i] - '0');
	}

	return (number);
}
