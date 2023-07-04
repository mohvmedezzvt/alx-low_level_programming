#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the head of the listint_t linked list.
 * @index: the index of the node i should return.
 *
 * Return: the nth node of a listint_t linked list,
 * NULL if the node does not exist.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	size_t i = 0;

	while (current != NULL)
	{
		current = current->next;
		i++;
		if (i == index)
			return (current);
	}

	return (NULL);
}
