#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line.
 * @n: Starting Number.
 * Return: Void.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; n++)
		{
			if (i == 98)
				printf("%d", i);
			else
				printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i >= 98; n--)
		{
			if (i == 98)
				printf("%d", i);
			else
				printf("%d, ", i);
		}
	}
	printf("\n");
}
