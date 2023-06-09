#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that adds positive numbers.
 * @argc: Arguments count.
 * @argv: Arguments vector.
 *
 * Return: 0 on Success, 1 if error occured.
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;
	size_t j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (atoi(&argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
