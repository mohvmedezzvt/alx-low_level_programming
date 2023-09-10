#include "hash_tables.h"

/**
 * hash_djb2 - Hashes a given string using the DJB2 hash algorithm.
 * @str: A pointer to an unsigned character array (string) to be hashed.
 *
 * Return: The calculated hash value as an unsigned long integer.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
