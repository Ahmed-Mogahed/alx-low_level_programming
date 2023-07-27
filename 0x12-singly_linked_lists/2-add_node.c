#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @h: double pointer to the list_t list
 * @ns: string to add in the node
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **h, const char *ns)
{
	list_t *new;
	unsigned int i = 0;

	while (ns[i])
		i++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->ns = nsdup(ns);
	new->i = i;
	new->next = (*h);
	(*h) = new;

	return (*h);
}
