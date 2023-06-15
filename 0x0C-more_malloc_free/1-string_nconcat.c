#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: numbers to concatenate from s2.
 *
 * Return: pointer to concatenated string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, len1 = 0, len2 = 0;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2] && len2 <= n)
		len2++;

	concatenated = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];
	for (j = 0; j <= len2; j++)
		concatenated[i + j] = s2[j];
	concatenated[i + j] = '\0';
	return (concatenated);
}
