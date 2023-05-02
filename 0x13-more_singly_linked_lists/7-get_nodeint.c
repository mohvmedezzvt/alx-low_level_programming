#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the linked list.
 * @index: index of the node to return.
 *
 * Return: pointer to the nth node, or NULL if it doesn't exist.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int currenti = 0;

	while (current)
	{
		if (currenti == index)
			return (current);

		current = current->next;
		currenti++;
	}

	return (NULL);
}
