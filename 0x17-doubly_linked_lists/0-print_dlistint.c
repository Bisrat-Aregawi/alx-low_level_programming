#include "lists.h"

/**
 * print_dlistint - function that prints all elements in a doubly inked list
 * @h: Pointer to first node in list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int elem_cnt = 0;

	while (h != NULL)
		printf("%d\n", h->n), elem_cnt++, h = h->next;
	return (elem_cnt);
}
