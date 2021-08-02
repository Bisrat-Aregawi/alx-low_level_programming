#include "lists.h"

/**
 * print_listint - Function prints all elements of passed linked list
 * @h: Pointer to first Node in the linked list
 *
 * Return: Number of nodes in list @h
 */
size_t print_listint(const listint_t *h)
{
	size_t nodeQty;

	nodeQty = 0;
	while (h != NULL)
		nodeQty++, printf("%d\n", h->n), h = h->next;
	return (nodeQty);
}
