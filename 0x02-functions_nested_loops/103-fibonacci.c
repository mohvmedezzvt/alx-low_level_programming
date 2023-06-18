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
	int n1 = 1, n2 = 2, n, sum = 0;

	while (n1 <= 4000000)
	{
		if (n1 % 2 == 0)
			sum += n1;

	n = n1 + n2;
	n1 = n2;
	n2 = n;
	}

	printf("%d\n", sum);
	return (0);
}
