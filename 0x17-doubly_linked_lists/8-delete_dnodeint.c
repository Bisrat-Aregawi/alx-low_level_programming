#include "lists.h"

/**
 * delete_dnodeint_at_index - Function removes nodes at given index
 * @head: Pointer to first node in list
 * @index: Index of node to get ri of
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t position = 0;
	dlistint_t *traverser = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = traverser->next;
		if (traverser->next != NULL)
			traverser->next->prev = NULL;
		free(traverser);
		return (1);
	}
	while (traverser != NULL)
	{
		if (position == index)
			break;
		position++, traverser = traverser->next;
	}
	if (traverser == NULL)
		return (-1);
	traverser->prev->next = traverser->next;
	traverser->next->prev = traverser->prev;
	free(traverser);
	return (1);
}
