#include <stdio.h>
#include <string.h>

/**
 * main - Entry point.
 * @argc: arguments count.
 * @argv: arguments vector.
 *
 * Return: 0.
*/
int main(int argc, char *argv)
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);
	if (num <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	return (0);
}
