#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: ascii code for the character that will be checked.
 *
 * Return: 1 if c is a digit and 0 if c is otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


/**
 * _strlen - returns the length of a string.
 * @s: a pointer for the string.
 *
 * Return: The length of the string entered.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}


/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string will be printed.
 *
 * Return: Void.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}


/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: the pointer will copied to it.
 * @src: the pointer will be copied to dest.
 *
 * Return: characters copied.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}


/**
 * _atoi - Empty function.
 * @s: string.
 *
 * Return: integer
 */
int _atoi(char *s)
{
	/* Empty one */
}
