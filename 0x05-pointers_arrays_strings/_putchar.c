#include <unistd.h>

/**
 * _putchar - writes a single character to the standard output
 *
 * @c: the character to write
 *
 * Return: On success, returns the character written as an unsigned char.
 *         On failure, returns -1 and sets errno appropriately.
 */
void _putchar(char c)
{
	return (write(1, &c, 1));
}
