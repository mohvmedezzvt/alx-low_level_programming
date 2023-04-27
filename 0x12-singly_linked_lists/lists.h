#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>

/**
 * struct list_t - structure has three members.
 * @str: a pointer to a string that contains the data stored in the node.
 * @len: an integer that specifies the length of the string.
 * @next: a pointer to the next node in the list.
*/
typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);

#endif /* LISTS_H */
