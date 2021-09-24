#include "lists.h"

/**
 * insert_dnodeint_at_index - Function inserts node at given index
 * @h: Pointer to first node of list
 * @idx: Index to insert the created node
 * @n: Content of node
 *
 * Return: Address of new node created
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t position = 0;
	dlistint_t *traverser = *h;

	if (idx < position)
		exit(EXIT_FAILURE);
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (traverser->next != NULL)
	{
		if (position == idx - 1)
			break;
		position++, traverser = traverser->next;
	}
	if (idx - 1 == position)
	{
		dlistint_t *newNode = malloc(sizeof(dlistint_t));

		if (newNode == NULL)
		{
			linked_list_freeier(h);
			exit(EXIT_SUCCESS);
		}
		newNode->n = n;
		newNode->next = traverser->next, newNode->prev = traverser;
		traverser->next = newNode;
		if (newNode->next != NULL)
			newNode->next->prev = newNode;
		return (newNode);
	}
	return (NULL);
}

/**
 * linked_list_freeier - Function frees list passed
 * @h: Pointer to first node
 *
 * Return: void
 */
void linked_list_freeier(dlistint_t **h)
{
	while (*h)
		linked_list_freeier(&(*h)->next), free(*h);
}
