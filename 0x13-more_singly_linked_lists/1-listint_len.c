#include "lists.h"

/**
 * listint_len - Function keeps track of number of nodes in linked list passed
 * @h: Pointer to first Node in the linked list
 *
 * Return: Number of nodes in list @h
 */
size_t listint_len(const listint_t *h)
{
	size_t nodeQty = 0;

	while (h != NULL)
		nodeQty++, h = h->next;
	return (nodeQty);
}
