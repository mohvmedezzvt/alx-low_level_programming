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
	int i;
	int fibonacci_list[50];

	fibonacci_list[0] = n1;
	fibonacci_list[1] = n2;

	for (i = 2; i < 50; i++)
	{
		fibonacci_list[i] = fibonacci_list[i - 1] + fibonacci_list[i - 2];
	}
	for (i = 0; i < 49; i++)
	{
		printf("%d, ", fibonacci_list[i]);
	}
	printf("%d\n", fibonacci_list[49]);
	return (0);
}
