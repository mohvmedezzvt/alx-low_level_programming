#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int n, i;
	int fibonacci_list[50] = {n1, n2};

	for (i = 2; i < 50; i++)
	{
		n = n1 + n2;
		n1 = n2;
		n2 = n;
		fibonacci_list[i] = n;
	}
	for (i = 0; i < 49; i++)
	{
		printf("%d, ", fibonacci_list[i]);
	}
	printf("%d\n", fibonacci_list[49]);
	return (0);
}
