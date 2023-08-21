#include "main.h"

/**
 * *_strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte.
 *
 * @dest: the src string will be appended to it.
 * @src: the string will be appended to dest.
 *
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}


/**
 * *_strncat - concatenates two strings.
 * @dest: Adding to it that src points to.
 * @src: Adding it to dest.
 * @n: The number of bytes will be added from src to dest.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}
	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}


/**
 * *_strncpy - copies a string.
 * @dest: the text will be added to it the src.
 * @src: the text will be added to dest.
 * @n: number of bytes will be added.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}


/**
 * _strcmp - compares two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: Positive number if s1 greater than s2,
 * ------- Negative number if s1 smaller than s2,
 * ------- 0 if s1 equals to s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}


/**
 * *_memset - fills memory with a constant byte.
 * @s: n bytes of the memory area pointed to it.
 * @b: the constant byte.
 * @n: the bytes of the memory area pointed to by s.
 *
 * Return: the new elements.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
