#include "lists.h"

/**
 * list_len - Function returns the number of elements in a linked list
 * @h: Pointer to a structure object
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	int elem_cnt;

	elem_cnt = 0;
	while (h != NULL)
		h = h->next, elem_cnt++;
	return (elem_cnt);
}
