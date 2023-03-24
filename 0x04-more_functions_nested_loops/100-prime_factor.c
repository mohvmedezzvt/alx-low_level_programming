#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number
 * 612852475143
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long n = 612852475143;
	long i, largest_factor;

	for (i = 2; i <= sqrt(n); i++)
	{
		while (n % i == 0)
		{
			largest_factor = i;
			n /= i;
		}
	}

	if (n > 1)
	{
		largest_factor = n;
	}

	printf("%ld\n", largest_factor);
	return (0);
}
