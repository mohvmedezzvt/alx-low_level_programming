#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings up to n bytes.
 *
 * @s1: the first string.
 * @s2: the second string.
 * @n: the maximum number of bytes to concatenate from s2.
 *
 * Return: a pointer to a newly allocated string containing s1
 * followed by the first n bytes of s2, or NULL on failure.
 * the returned string is null-terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	char *ptr;
	unsigned int len1 = 0, len2 = 0;
	char *s1_start = s1;
	char *s2_start = s2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*s1_start)
	{
		len1++;
		s1_start++;
	}

	while (*s2_start)
	{
		len2++;
		s2_start++;
	}

	if (n >= len2)
		n = len2;

	s3 = malloc((len1 + n + 1) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	ptr = s3;
	while (*s1)
		*ptr++ = *s1++;

	while (n-- > 0 && *s2)
		*ptr++ = *s2++;

	*ptr = '\0';

	return (s3);
}
