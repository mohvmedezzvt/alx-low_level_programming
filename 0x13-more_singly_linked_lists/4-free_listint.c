#include "lists.h"

/**
 * free_listint - Free a linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: Nothing.
*/
void free_listint(listint_t *head)
{
	listint_t *current = head, *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
