#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @n: pointer to the list_t list to print
 * Return: number of nodes printed
 */

size_t print_list(const list_t *n)
{
 size_t i = 0;

 while (n)
 {
 if (!n->str)
 printf("[0] (nil)\n");
 else
 printf("[%u] %s\n", n->len, n->str);
 n = n->next;
 i++;
 }

 return (i);
}
