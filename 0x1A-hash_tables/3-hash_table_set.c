#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to which the key-value pair will be added.
 * @key: The key to add (cannot be an empty string).
 * @value: The value associated with the key (can be an empty string).
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	size_t index;
	hash_node_t *new_node, *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = NULL;
	if (ht->array[index] != NULL)
	{
		current = ht->array[index];
		new_node->next = current;
	}
	ht->array[index] = new_node;
	return (1);
}
