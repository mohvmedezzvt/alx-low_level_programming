#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number in which to set the bit.
 * @index: The index of the bit to set.
 *
 * Return: 1 if the bit was set successfully, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n | mask;
	return (1);
}
