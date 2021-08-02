#include "lists.h"

/**
 * get_nodeint_at_index - Function gets nodes at a certain poisition
 * @head: Pointer to first node
 * @index: Position of the node counting from 0 (i.e. from first node)
 *
 * Return: Pointer to Node at @index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Initialize a local index */
	unsigned int idx = 0;
	/* Begin traversing the list */
	while (head != NULL)
	{
		/*
		 * If 'idx' reaches 'index' terminate loop immediately,
		 * otherwise traverse the list incrementing 'idx'.
		 */
		if (idx != index)
			head = head->next, idx++;
		else
			break;
	}
	/*
	 * return the node where the loop executed 'break' or
	 * return the last node's null pointer in the case the
	 * node doesn't exist.
	 */
	return (head);
}
