#include "lists.h"

/**
 * delete_nodeint_at_index - Function removes node at provided index position
 * @head: Pointer to pointer of first node in list
 * @index: Index at which to remove node from
 *
 * Return: 1 if deletion is successful, -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* Initialize a local index for comparision */
	unsigned int local_idx = 0;
	/* Declare a 'traverser' and 'obsolete node' */
	listint_t *traverser, *obslNode;

	/* Initialize traverser to first node in the list */
	traverser = *head;

	/* If no linked list is passed return -1 */
	if (*head == NULL)
		return (-1);
	/*
	 * If index is 0, then move 'head' a step ahead and
	 * free previous node and return 1
	 */
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(traverser);
		return (1);
	}
	/* Traverse list until one before 'index' */
	while (traverser != NULL)
	{
		if (local_idx != (index - 1))
			traverser = traverser->next, local_idx++;
		else
			break;
	}
	/* Reached the end and index is still big?, then return -1 */
	if (index >= local_idx && traverser->next == NULL)
		return (-1);
	/* Asign 'obsolete node' the next indexed node to free later */
	obslNode = traverser->next;
	/* Make traverser point to one above 'obsolete node' */
	traverser->next = traverser->next->next;
	/* Free dangling node (i.e. obsolete node) */
	free(obslNode);
	/* return 1 */
	return (1);
}
