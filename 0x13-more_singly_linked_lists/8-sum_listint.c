#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: the head of a listint_t linked list.
 *
 * Return: the sum of all the data (n) of a listint_t linked list,
 * 0 if the list is empty.
*/
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	size_t sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
