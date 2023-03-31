#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @r: the string will be encoded.
 *
 * Return: the encoded string.
 */
char *rot13(char *r)
{
	int i, j;
	char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; r[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (r[i] == alphabets[j])
			{
				r[i] = rot13[j];
				break;
			}
		}
	}
	return (r);
}
