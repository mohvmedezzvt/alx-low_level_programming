#include "lists.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to be measured.
 *
 * Return: the length of s.
*/
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer to the head of the list.
 * @str: string to be added to the new node.
 *
 * Return: the address of the new element.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	if (!head || !str)
		return (NULL);

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);

	ptr->str = strdup(str);
	if (!ptr->str)
	{
		free(ptr);
		return (NULL);
	}

	ptr->len = _strlen(ptr->str);
	ptr->next = NULL;
	if (!*head)
	{
		*head = ptr;
		return (ptr);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = ptr;
	return (ptr);
}
