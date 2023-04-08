#include "main.h"
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
