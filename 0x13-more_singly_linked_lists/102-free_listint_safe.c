#include "lists.h"

/**
 * free_listint_safe - Function frees circular and non-circular lists
 * @h: Pointer to pointer holding address of first node
 * Return: The size of list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_qty = 0, free_count = 0;
	listint_t *local_head1 = *h, *local_head2 = *h;
	listint_t *dlist_head = NULL;

	if (*h == NULL)
		return (node_qty);
	while (local_head1 != NULL)
	{
		if (data_is_here(dlist_head, local_head1->n))
			break;
		add_nodeint(&dlist_head, local_head1->n);
		node_qty++;
		local_head1 = local_head1->next;
	}
	free_count = node_qty;
	while (local_head2 != NULL)
	{
		listint_t *temp = local_head2;

		if (node_qty == 1)
		{
			free(local_head2);
			break;
		}
		node_qty--;
		local_head2 = local_head2->next;
		free(temp);
	}
	*h = NULL;
	free_data_list(dlist_head);
	return (free_count);
}
