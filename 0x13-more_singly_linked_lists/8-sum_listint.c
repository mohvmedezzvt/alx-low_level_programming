#include "lists.h"

/**
 * sum_listint - computes the sum of all the data (n) of a linked list.
 * @head: pointer to the head of the linked list.
 *
 * Return: the sum of all the data in the linked list,
 * or 0 if the list is empty.
*/
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	unsigned int sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
