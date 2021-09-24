#include "lists.h"

/**
 * dlistint_len - Fuction returns number of nodes in doubly linked list
 * @h: Pointer to first node in list
 *
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elem_cnt = 0;

	while (h != NULL)
		elem_cnt++, h = h->next;
	return (elem_cnt);
}
