#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: double pointer to the head of the list.
 *
 * Return: the head node's data, or 0 if the list is empty.
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nvalue;

	if (!head || !*head)
		return (0);

	temp = *head;
	*head = temp->next;
	nvalue = temp->n;

	free(temp);
	return (nvalue);
}
