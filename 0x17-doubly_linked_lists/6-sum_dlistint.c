#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all integer values in a linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: The sum of all integer values in the linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
