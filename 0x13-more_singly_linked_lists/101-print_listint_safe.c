#include "lists.h"

int data_is_here(datalist_t *, int);

/**
 * print_listint_safe - Function prints contents of linked lists
 * @head: Pointer to pointer holding address of first node
 * Return: Number of Nodes in the list, 98 otherwise
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_qty = 1;
	const listint_t *local_head;
	datalist_t *dlist_head, *dlist0;

	dlist_head = NULL;
	while (head != NULL)
	{
		if (data_is_here(dlist_head, head->n))
		{
			local_head = head;
			break;
		}
		dlist0 = malloc(sizeof(datalist_t));
		if (dlist0 == NULL)
			exit(98);
		dlist0->num = head->n;
		dlist0->next = dlist_head;
		dlist_head = dlist0;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
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
int data_is_here(datalist_t *list, int num)
{
	while (list != NULL)
	{
		if (list->num == num)
			return (1);
		list = list->next;
	}
	return (0);
}
