#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * in a listint_t list.
 * @head: pointer to the head of the linked list.
 * @idx: index of the list where the new node should be added.
 * @n: value to store in the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head, *new;
	unsigned int index = 0;

	while (current && index < idx - 1)
	{
		current = current->next;
		index++;
	}

	if (index != idx - 1)
		return (NULL);

	if (idx == 0 || !current)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);

		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = current->next;
	current->next = new;
	return (new);
}
