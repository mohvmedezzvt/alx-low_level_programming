#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL.
 * @head: pointer to the head of the linked list.
 *
 * Return: Nothing.
*/
void free_listint2(listint_t **head)
{
	listint_t *current = *head, *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	if (*head != NULL)
		*head = NULL;
}
