#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: a pointer to the head of the linked list.
 *
 * Return:  the number of elements in a linked listint_t list.
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t elements = 0;

	while (current != NULL)
	{
		current = current->next;
		elements++;
	}

	return (elements);
}
