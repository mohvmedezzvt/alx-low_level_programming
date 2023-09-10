#include "hash_tables.h"

/**
 * key_index - Gets the index of a key in the hash table array.
 * @key: The key for which to calculate the index.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	size_t hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
