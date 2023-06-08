#include "main.h"

/**
 * wildcmp - compares two strings recursively and
 * checks if they can be considered identical.
 * @s1: the first string to comapare.
 * @s2: the second string to compare, may contain the special character '*'.
 *
 * Return: 1 if the string can be considered identical, 0 otherwise.
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*' && *(s2 + 1) == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) == 1)
			return (1);

		return (wildcmp(s1 + 1, s2));
	}

	return (0);
}
