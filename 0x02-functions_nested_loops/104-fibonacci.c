#include <stdio.h>
/**
 * main - Entry point
 * a program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int n1 = 1, n2 = 2, n;

	printf("%ld, %ld, ", n1, n2);
	for (i = 1; i <= 96; i++)
	{
		n = n1 + n2;
		n1 = n2;
		n2 = n;
		printf("%ld", n);

		if (i == 96)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
