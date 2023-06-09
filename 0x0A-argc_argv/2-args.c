#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: Arguments count.
 * @argv: Arguments Vector.
 *
 * Return: Always 0 (in Success).
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
