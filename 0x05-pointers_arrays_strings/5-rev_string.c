#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: the string will be reversed pointer.
 *
 * Return: Void.
 */
void rev_string(char *s)
{
	int i = 0, len = 0;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
