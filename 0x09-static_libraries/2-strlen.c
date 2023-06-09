#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: a pointer for the string.
 *
 * Return: The length of the string entered.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
