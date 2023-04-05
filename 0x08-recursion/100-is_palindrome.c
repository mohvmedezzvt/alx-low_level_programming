#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome ot not.
 * @s: the string to check.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, 0, is_palindrome_strlen(s) - 1));
}

/**
 * is_palindrome_strlen - Gets the string length.
 * @s: the string to git his length.
 *
 * Return: the string length.
 */
int is_palindrome_strlen(char *s)
{
	int len = 0;

	if (*s != '\0')
		len += is_palindrome_strlen(s + 1) + 1;

	return (len);
}

/**
 * is_palindrome_checker - checker to determine if the string is a palindrome or not.
 * @s:
 * @first: 
 * @last: 
 * @remainder: 
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome_helper(char *s, int left, int right)
{
	if (left >= right)
		return (1);
	else if (s[left] == s[right])
		return is_palindrome_helper(s, left + 1, right - 1);
	else
		return (0);
}
