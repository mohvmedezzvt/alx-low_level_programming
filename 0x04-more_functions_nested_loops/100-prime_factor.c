#include <stdio.h>
#include <math.h>

int is_prime(long int n)
{
	long int i;

	if (n < 2)
		return (0); /*Not Prime*/

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return (0); /*Not Prime*/
		}
	}
	return (1); /*Prime*/
}

int main(void)
{
	long int n = 612852475143;
	long int factor = 2;
	long int largest_factor = 1;

	while (n > 1 && factor <= sqrt(n))
	{
		if (n % factor == 0 && is_prime(factor))
		{
			largest_factor = factor;
			n = n / factor;
		}
		else
		{
			factor++;
		}
	}

	if (n > largest_factor && is_prime(n))
	{
		largest_factor = n;
	}

	printf("%ld\n", largest_factor);
	return (0);
}
