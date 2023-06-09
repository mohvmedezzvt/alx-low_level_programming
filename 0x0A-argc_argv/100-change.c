#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: Arguments count
 * @argv: Arguments vector
 *
 * Return: 0 on Success, 1 on failure.
*/
int main(int argc, char *argv[])
{
	int num, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num <= 0)
	{
		printf("0");
		return (0);
	}
	while (num >= 25)
	{
		num = num - 25;
		coins++;
	}
	while (num >= 10)
	{
		num = num - 10;
		coins++;
	}
	while (num >= 5)
	{
		num = num - 5;
		coins++;
	}
	while (num >= 2)
	{
		num = num - 2;
		coins++;
	}
	while (num >= 1)
	{
		num = num - 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
