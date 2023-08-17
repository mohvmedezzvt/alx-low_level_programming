#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list to be freed.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
