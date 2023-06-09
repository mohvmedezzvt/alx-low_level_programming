#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: Arguments count.
 * @argv: Arguments vector.
 *
 * Return: Always 0 (in Success).
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);

	return (0);
}
