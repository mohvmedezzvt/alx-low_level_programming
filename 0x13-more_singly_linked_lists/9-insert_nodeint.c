#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the head of a listint_t linked list.
 * @idx: the index of the list where the new node should be added.
 * @n: integer to be stored in the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *current = *head;
	size_t i = 0;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;

	if (current == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = current->next;
	current->next = newnode;

	return (newnode);
}
