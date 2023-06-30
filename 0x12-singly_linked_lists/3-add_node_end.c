#include "lists.h"

/**
 * add_node_end - add a new node to the end of a linked list
 * @head: pointer to the head of the linked list
 * @str: string to be stored in the new node
 *
 * Return: pointer to the updated head of the linked list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *current;

	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->len = strlen(str);
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		current->next = newnode;
	}

	return (*head);
}
