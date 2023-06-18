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
	unsigned long int n1 = 1, n2 = 2, n;

	printf("%lu, %lu", n1, n2);
	for (i = 3; i <= 98; i++)
	{
		n = n1 + n2;
		printf(", %lu", n);
		n1 = n2;
		n2 = n;
	}
	printf("\n");
	return (0);
}
