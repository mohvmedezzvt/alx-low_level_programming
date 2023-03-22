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
	int i;
	long int n1 = 1, n2 = 2, n, sum = 0;

	for (i = 1; i <= 33; i++)
	{
		if (n2 % 2 == 0)
		{
			sum += n2;
		}

		n = n1 + n2;
		n1 = n2;
		n2 = n;
	}
	printf("%ld\n", sum);
	return (0);
}
