#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: a pointer to the first node of the list to be freed.
 *
 * Return: Void.
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
