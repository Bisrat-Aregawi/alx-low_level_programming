#include "lists.h"

/**
 * get_dnodeint_at_index - Function returns nth node from list
 * @head: Pointer to first node in list
 * @index: Index of node required
 *
 * Return: Node at index @index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t position = 0;

	while (head != NULL)
	{
		if (position == index)
			return (head);
		position++, head = head->next;
	}
	return (NULL);
}
