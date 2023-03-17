#include <stdio.h>
/**
 * main - Entry point
 * prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 7; i++)
	{
		for (j = i + 1; j < 8; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(' ');
			for (k = j + 1; k < 9; k++)
			{
				for (l = k + 1; k < 10; l++)
				{
					putchar(k + '0');
					putchar(j + '0');
					if (i != 6 && j != 7 && k != 8 && l != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
