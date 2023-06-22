#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry point of the calculator program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always 0 (indicating successful execution).
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	f = get_op_func(argv[2]);
	if (!f || argv[2][1])
	{
		printf("Error");
		exit(99);
	}

	result = f(num1, num2);
	printf("%d\n", result);

	return (0);
}
