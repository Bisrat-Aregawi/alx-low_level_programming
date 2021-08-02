#include "lists.h"

/**
 * insert_nodeint_at_index - Function inserts nodes at given index
 * @head: Pointer to pointer of first node
 * @idx: Index to insert newly created node
 * @n: Content of newly created node
 *
 * Return: Address of newly created node, NULL if allocation fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* Initialize a local index for comparison */
	unsigned int local_idx = 0;
	/* Initialize a copy of head to store its address for traversal */
	listint_t *local_head;
	/* Initialize node to hold new contents and be positioned at 'idx' */
	listint_t *newNode;

	/* Copy address of first node to 'local_head' */
	local_head = *head;
	/* Allocate and check memory for 'newNode' */
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	/* Insert new values to 'newNode' */
	newNode->n = n;
	/* Traverse list until the point where we insert 'newNode' */
	while (local_head != NULL)
	{
		if (local_idx != (idx - 1))
			local_head = local_head->next, local_idx++;
		else
			break;
	}
	/* Have 'newNode' point to (local_idx + 1) indexed node */
	newNode->next = local_head->next;
	/* Have (local_idx) indexed node point to 'newNode' */
	local_head->next = newNode;

	/* Return new node inserted */
	return (newNode);
}
