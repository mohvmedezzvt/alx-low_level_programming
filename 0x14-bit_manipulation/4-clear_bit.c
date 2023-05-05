#include "main.h"

/**
 * clear_bit - clears the bit at a given index in an unsigned long int.
 * @n: a pointer to the unsigned long int.
 * @index: the index of the bit to clear.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((*n & (1 << index)) > 0)
		*n = *n ^ (1 << index);

	return (1);
}
