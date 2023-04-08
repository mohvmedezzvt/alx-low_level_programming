#include "main.h"

/**
 * *_strncpy - copies a string.
 * @dest: the text will be added to it the src.
 * @src: the text will be added to dest.
 * @n: number of bytes will be added.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
