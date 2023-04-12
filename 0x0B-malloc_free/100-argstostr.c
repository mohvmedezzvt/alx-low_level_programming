#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program.
 *
 * @ac: the number of arguments.
 * @av: an array of pointers to the arguments.
 *
 * Return: if ac == 0, av == NULL, or the function fails, NULL is returned.
 * otherwise, a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j;
	int len = 0;
	int total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][len])
			len++;

		total_len += len + 1;
	}

	str = malloc(sizeof(char) * total_len);

	if (str == NULL)
		return (NULL);

	for (i = 0, total_len = 0; i < ac; i++, total_len++)
	{
		for (j = 0; av[i][j]; j++, total_len++)
			str[total_len] = av[i][j];

		str[total_len] = '\n';
	}

	str[total_len] = '\0';

	return (str);
}
