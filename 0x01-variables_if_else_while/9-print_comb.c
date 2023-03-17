#include <stdio.h>
/**
 * main -Entry point
 * prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		for (j = i - 1; j < i + 1; j++)
		{
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
