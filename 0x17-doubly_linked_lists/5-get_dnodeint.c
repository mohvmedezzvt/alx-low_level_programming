#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the node at a specified index
 * of a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: The index of the desired node (starting from 0).
 *
 * Return: If the index is within the valid range and the node is found,
 *        returns a pointer to the corresponding node. Otherwise, returns NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t idx = 0;
	dlistint_t *current;

	current = head;
	while (current != NULL)
	{
		if (idx == index)
			return (current);

		idx++;
		current = current->next;
	}

	return (NULL);
}
