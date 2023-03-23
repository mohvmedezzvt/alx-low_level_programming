#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size: the size of the triangle.
 *
 * Return: Void.
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size - 1)
			{
				printf(" ");
			}
			else
			{
				printf("#");
			}
		}
		printf("\n");
	}
}
