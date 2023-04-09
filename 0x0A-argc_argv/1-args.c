#include <stdio.h>

/**
 * main - prints the number of the arguments passed to the program.
 *
 * @argc: the number of arguments passed to the program.
 * @argv: an array of strings containing the arguments passed to the program.
 *
 * Return: 0 indicating successful program execution.
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
