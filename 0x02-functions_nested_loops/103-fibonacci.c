#include <stdio.h>
/**
 * main - Entry point
 * finds and prints the sum of the even-valued terms,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long i;
	unsigned long n1 = 0, n2 = 1, n;

	for (i = 0; i < 4000000; i++)
	{
		n = n1 + n2;
		if (n % 2 == 0)
		{
			printf("%lu", n);
			if (i == 4000000)
				printf("\n");
			else
				printf(", ");
		}
	}
	return (0);
}
