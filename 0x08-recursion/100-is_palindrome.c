#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome or not.
 * @s: the string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
*/
int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, 0, is_palindrome_strlen(s) - 1));
}

/**
 * is_palindrome_strlen - calculates the length of a string recursively.
 * @s: the string to calculate the length of.
 *
 * Return: the length of the string.
*/
int is_palindrome_strlen(char *s)
{
	int len = 0;

	if (*s != '\0')
		len += is_palindrome_strlen(s + 1) + 1;

	return (len);
}

/**
 * is_palindrome_helper - recursive helper function to check for palindrome.
 * @s: the string to be checked.
 * @left: the left index of the current substring.
 * @right: the right index of the current substring.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
*/
int is_palindrome_helper(char *s, int left, int right)
{
	if (left >= right)
		return (1);
	else if (s[left] == s[right])
		return (is_palindrome_helper(s, left + 1, right - 1));
	else
		return (0);
}
