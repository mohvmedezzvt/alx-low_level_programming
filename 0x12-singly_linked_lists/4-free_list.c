#include "lists.h"

/**
 * free_list - Free a linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: Nothing.
*/
void free_list(list_t *head)
{
	list_t *current = head, *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
