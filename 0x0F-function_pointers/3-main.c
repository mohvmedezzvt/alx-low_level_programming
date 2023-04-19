#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point.
 *
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments passed to the program.
 *
 * Return: 0 if successful, 98, 100, 99 on error.
*/
int main(int argc, char *argv[])
{
	int int1, int2, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int1 = atoi(argv[1]);
	int2 = atoi(argv[3]);

	if (int2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	f = get_op_func(argv[2]);

	if (f == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	result = f(int1, int2);
	printf("%d\n", result);

	return (0);
}
