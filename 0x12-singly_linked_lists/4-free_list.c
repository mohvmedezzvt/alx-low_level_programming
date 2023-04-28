#include "lists.h"

/**
 * free_list - frees a linked list.
 * @head: the head of the list.
 *
 * Return: Void.
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;

		free(temp->str);
		free(temp);
	}
}
