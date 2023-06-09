#include "main.h"

/**
 * *_strncat - concatenates two strings.
 * @dest: Adding to it that src points to.
 * @src: Adding it to dest.
 * @n: The number of bytes will be added from src to dest.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}
	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
