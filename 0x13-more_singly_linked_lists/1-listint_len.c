#include "lists.h"

/**
 * listint_len - counts the number of nodes in a listint_t list.
 * @h: a pointer to the first node of the list.
 *
 * Return: the number of nodes in the list.
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
