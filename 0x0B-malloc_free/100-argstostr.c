#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: Arguments Count.
 * @av: Arguments Vector.
 *
 * Return: a pointer to a new string, or NULL if it fails.
*/
char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	char *concatenated;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
	}

	concatenated = (char *)malloc(sizeof(char) * (len + 1));
	if (concatenated == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concatenated[len] = av[i][j];
			len++;
		}
		concatenated[len] = '\n';
		len++;
	}
	concatenated[len] = '\0';
	return (concatenated);
}
