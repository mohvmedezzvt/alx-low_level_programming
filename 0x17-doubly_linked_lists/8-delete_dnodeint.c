#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a specific index
 * in a doubly linked list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if the index is invalid.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	size_t idx = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && idx < index)
	{
		current = current->next;
		idx++;
	}

	if (current == NULL)
		return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
