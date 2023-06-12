#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str.
 * @str: the string will be duplicated.
 *
 * Return: a pointer to the new string if duplicating success,
 * NULL if str == NULL or if insufficient memory was available.
*/
char *_strdup(char *str)
{
	int len = 0, i = 0;
	char *duplicated;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		len++;
		i++;
	}

	duplicated = (char *)malloc(sizeof(char) * (len + 1));
	if (duplicated == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		duplicated[i] = str[i];

	duplicated[i] = '\0';
	return (duplicated);
}
