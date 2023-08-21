#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _islower - Checks whether the input character is a lowercase letter or not.
 * It returns 1 if the input character is a lowercase letter,
 * and 0 otherwise.
 *
 * @c: An integer representing the ASCII value of a character.
 *
 * Return: 1 if the input character is a lowercase letter.
 * ------- 0 if the input character is not a lowercase letter.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}


/**
 * _isalpha - Checks for alphabetic character.
 *
 * @c: An integer representing the ASCII value of a character.
 *
 * Return: 1 if the input character is a letter.
 * ------- 0 if the input character is not a letter.
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		return (1);
	else
		return (0);
}


/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: An integer of the number that will computed.
 *
 * Return: a number that computed from n.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}


/**
 * _isupper - checks for uppercase character.
 * @c: ascii code for the character will be checked.
 *
 * Return: 1 if Uppercase and 0 if otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
