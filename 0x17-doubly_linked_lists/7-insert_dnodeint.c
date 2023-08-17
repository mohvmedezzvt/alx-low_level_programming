#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * in a doubly linked list.
 * @h: Pointer to a pointer to the head of the doubly linked list.
 * @idx: Index at which the new node should be inserted.
 * @n: Value to be assigned to the 'n' field of the new node.
 *
 * Return: Address of the new node, or NULL if insertion fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	size_t index = 0;

	if (h == NULL)
		return (NULL);

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	current = *h;
	while (current != NULL)
	{
		if (index == idx - 1)
		{
			new->next = current->next;
			new->prev = current;
			if (current->next != NULL)
				current->next->prev = new;
			current->next = new;
			return (new);
		}
		current = current->next;
		index++;
	}

	free(new);
	return (NULL);
}
