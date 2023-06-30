#include "lists.h"

/**
 * print_list - prints the elements of a linked list
 * @h: a pointer to the head of the linked list
 *
 * Return: the number of elements in the linked list
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t elements = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);

		current = current->next;
		elements++;
	}

	return (elements);
}
