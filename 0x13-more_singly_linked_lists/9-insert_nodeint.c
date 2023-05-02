#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head, *new;
	unsigned int index = 0;

	if (!current)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = current;
		current = new;
		return (new);
	}

	while (index < idx - 1)
	{
		if (!current)
		{
			free(new);
			return (NULL);
		}
		current = current->next;
		index++;
	}
	new->next = current->next;
	current->next = new;

	return (new);
}
