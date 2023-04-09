#include <stdio.h>
#include <stdlib.h>

/**
 * Mulriplies two integers passed as command-line argumens and prints the result.
 * Uses the atoi function from the standard library to cinvert the arguments to integers.
 *
 * @argc: the number of command-line arguments, including the name of the program.
 * @argv: an array of strings containing the command-line arguments.
 *
 * Return: 0 if the program runs successfully, 1 if an error occurs.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
