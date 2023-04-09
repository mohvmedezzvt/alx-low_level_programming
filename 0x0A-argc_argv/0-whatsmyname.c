#include <stdio.h>

/**
 * main - Prints the name of the program.
 *
 * @argc: the number of arguments passed to the program.
 * @argv: an array of strings containing the arguments passed to the program.
 *
 * Return: 0 indicating successful program execution.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
