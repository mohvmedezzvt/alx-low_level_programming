#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list.
 * @head: pointer to a pointer to the head of the list.
 * @str: string to be stored in the new node.
 *
 * Return: pointer to the newly added node, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
