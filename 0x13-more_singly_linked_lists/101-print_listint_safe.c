#include "lists.h"

/**
 * print_listint_safe - Function prints contents of linked lists
 * @head: Pointer to pointer holding address of first node
 * Return: Number of Nodes in the list, 98 otherwise
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_qty = 0;
	const listint_t *local_head;
	listint_t *dlist_head;

	dlist_head = NULL;
	if (head == NULL)
		return (node_qty);
	while (head != NULL)
	{
		if (data_is_here(dlist_head, head->n))
		{
			local_head = head;
			break;
		}
		add_nodeint(&dlist_head, head->n);
		printf("[%p] %d\n", (void *)head, head->n);
		node_qty++;
		head = head->next;
	}
	free_data_list(dlist_head);
	if (head != NULL)
		printf("-> [%p] %d\n", (void *)local_head, local_head->n);
	return (node_qty);
}

/**
 * data_is_here - Function searches 'locNode' data for duplicates
 * @list: Pointer to linked list first node of type 'datalist_t'
 * @num: Number to search inside @list
 *
 * Return: 1 if number exists, 0 otherwise
 */
int data_is_here(listint_t *list, int num)
{
	while (list != NULL)
	{
		if (list->n == num)
			return (1);
		list = list->next;
	}
	return (0);
}

/**
 * free_data_list - Function frees the temporary data list created
 * @d_head: Pointer to first node of type 'datalist_t'
 *
 * Return: void
 */
void free_data_list(listint_t *d_head)
{
	while (d_head != NULL)
	{
		listint_t *temp = d_head;

		d_head = d_head->next;
		free(temp);
	}
}
