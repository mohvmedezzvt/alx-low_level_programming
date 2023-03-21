#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n1 = 1, n2 = 2, n;
	int i;

	for (i = 0; i < 50; i++)
	{
		n = n1 + n2;
		n1 = n2;
		n2 = n;
		printf("%lu", n);
		if (i < 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
