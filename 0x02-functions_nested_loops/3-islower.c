#include "main.h"
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
