#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list.
 * @head: double pointer to the head of the list.
 * @index: index of the node to delete.
 *
 * Return: 1 if successful, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int idx;

	/* empty list */
	if (*head == NULL)
		return (-1);

	/* delete first node */
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	prev = *head;
	current = prev->next;

	for (idx = 1; current != NULL && idx < index; idx++)
	{
		prev = current;
		current = current->next;
	}

	/* found the node to delete */
	if (idx == index && current != NULL)
	{
		prev->next = current->next;
		free(current);
		return (1);
	}

	/* node not found */
	return (-1);
}
