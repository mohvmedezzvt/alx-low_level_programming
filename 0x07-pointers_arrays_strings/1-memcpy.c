#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @dest: the memory area will copied to it.
 * @src: the memory area will copied to dest.
 * @n: the number of bytes from memory area.
 *
 * Return: The copied and signed characters.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
