#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long n1 = 0, n2 = 1, n;

	for (i = 0; i < 50; i++)
	{
		n = n1 + n2;
		printf("%lu", n);
		n1 = n2;
		n2 = n;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
