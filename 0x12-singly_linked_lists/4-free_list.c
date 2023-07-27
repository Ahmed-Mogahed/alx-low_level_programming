#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @h: list_t list to be freed
 */
void free_list(list_t *h)
{
	list_t *temp;

	while (h)
	{
		temp = h->next;
		free(h->str);
		free(h);
		h = temp;
	}
}
