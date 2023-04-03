#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: n bytes of the memory area pointed to it.
 * @b: the constant byte.
 * @n: the bytes of the memory area pointed to by s.
 *
 * Return: the new elements.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
