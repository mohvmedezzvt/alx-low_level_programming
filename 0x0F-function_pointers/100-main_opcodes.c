#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 upon successful execution,
 *         or the corresponding exit code in case of an error.
 */
int main(int argc, char **argv)
{
	int num, i;
	unsigned char *main_address;

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

	main_address = (unsigned char *)main;
	for (i = 0; i < num; i++)
		printf("%02x ", main_address[i]);

	printf("\n");

	return (0);
}
