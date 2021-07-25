#include "lists.h"

/**
 * print_list - Function prints all elements of a 'list_t' data type list
 * @h: Pointer to a structure object
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	int elem_cnt;

	elem_cnt = 0;
	while (h != NULL)
	{
		(h->str) ? printf("[%u] %s\n", h->len, h->str) :
			printf("[0] (nil)\n");
		h = h->next;
		elem_cnt++;
	}
	return (elem_cnt);
}
