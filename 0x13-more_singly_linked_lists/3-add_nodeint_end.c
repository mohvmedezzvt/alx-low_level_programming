#include "lists.h"

/**
 * add_nodeint_end - add a new node to the end of a linked list
 * @head: pointer to the head of the linked list
 * @n: integer to be stored in the new node
 *
 * Return:  the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *current;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		current->next = newnode;
	}

	return (*head);
}
