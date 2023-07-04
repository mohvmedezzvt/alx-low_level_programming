#include "lists.h"

/**
 * print_listint - prints the elements of a linked list../a
 * @h: a pointer to the head of the linked list.
 *
 * Return: the number of elements in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t elements = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		elements++;
	}

	return (elements);
}
