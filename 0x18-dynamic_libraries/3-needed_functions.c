#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @dest: the memory area will copied to it.
 * @src: the memory area will copied to dest.
 * @n: the number of bytes from memory area.
 *
 * Return: The copied and signed characters.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}


/**
 * *_strchr - locates a character in a string.
 * @s: a pointer to the string to search.
 * @c: the character to search for.
 *
 * Return: a pointer to the first occurrence of the character in the string,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}


/**
 * _strspn - gets the length of a prefix substring.
 * @s: a pointer to the string will be checked.
 * @accept: a pointer to the string containing the characters to match.
 *
 * Return: the length of the initial segment of the string s
 * that consists entirely of characters from the string accept,
 * if no characters from accept are found in s returns 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				len++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (len);
		}
		s++;
	}
	return (len);
}


/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: the pointer to the string to be checked.
 * @accept: the pointer to the string containing the character to match.
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}


/**
 * *_strstr - locates a substring.
 * @haystack: pointer to the string to be checked.
 * @needle: pointer to the string containing the characters to match.
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
