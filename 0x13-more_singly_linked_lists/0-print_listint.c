#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Function prints all elements of passed linked list
 * @h: Pointer to first Node in the linked list
 *
 * Return: Number of nodes in list @h
 */
size_t print_listint(const listint_t *h)
{
	size_t nodeQty;

	if (h != NULL)
		printf("%d\n", h->n);
	else
		return (0);

	nodeQty = 1 + print_listint(h->next);
	return (nodeQty);
}
