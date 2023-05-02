#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: a pointer to a pointer to the first node of the list.
 * @n: the integer value to be stored in the new node.
 *
 * Return: a pointer to the new node, or NULL if the function fails.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (!head)
		return (NULL);

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
