#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long n1 = 1, n2 = 2, n;
	int i;

	printf("%lld, %lld, ", n1, n2);
	for (i = 0; i < 50; i++)
	{
		n = n1 + n2;
		n1 = n2;
		n2 = n;
		printf("%lld", n);
		if (i < 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
