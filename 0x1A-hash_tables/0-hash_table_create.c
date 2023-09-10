#include "hash_tables.h"

/**
 * hash_table_create - Create a new hash table with a given size.
 * @size: The size of the hash table.
 *
 * Return: A pointer to the newly created hash table, or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	memset(table->array, 0, sizeof(hash_node_t *) * size);

	return (table);
}
