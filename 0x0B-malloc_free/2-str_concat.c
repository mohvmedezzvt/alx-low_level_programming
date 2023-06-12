#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: NULL on failure, pointer points to a newly
 * allocated space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated.
*/
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, j;
	char *concatenated;

	if (s1 == NULL)
		s1[0] = ' ';

	if (s2 == NULL)
		s2[0] = ' ';

	i = 0;
	while (s1[i])
	{
		len1++;
		i++;
	}

	i = 0;
	while (s2[i])
	{
		len2++;
		i++;
	}

	concatenated = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < len2; j++)
		concatenated[i + j] = s2[j];

	concatenated[i + j] = '\0';
	return (concatenated);
}
