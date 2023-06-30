#include "lists.h"

/**
 * list_len - counts the number of elements in a linked list
 * @h: a pointer to the head of the linked list
 *
 * Return: the number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t elements = 0;

	while (current != NULL)
	{
		elements++;
		current = current->next;
	}

	return (elements);
}
