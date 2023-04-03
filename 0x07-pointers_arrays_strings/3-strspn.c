#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: a pointer to the string will be checked.
 * @accept: a pointer to the string containing the characters to match.
 *
 * Return: the length of the initial segment of the string s
 * that consists entirely of characters from the string accept,
 * if no characters from accept are found in s returns 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				len++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (len);
		}
		s++;
	}
	return (len);
}
