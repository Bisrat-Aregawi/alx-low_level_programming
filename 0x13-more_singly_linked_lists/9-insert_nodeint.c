#include "lists.h"
/**
 * insert_nodeint_at_index - Function inserts nodes at given index
 * @head: Pointer to pointer of first node
 * @idx: Index to insert newly created node
 * @n: Content of newly created node
 * Return: Address of newly created node, NULL if allocation fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* Initialize local index to keep track of traversal */
	unsigned int local_idx = 0;
	/* Declare traverser node for looping purposes */
	listint_t *traverser;
	/* Declare new node to be inserted at 'idx' */
	listint_t *newNode;
	/* Initialize 'traverser' to the begining of list */
	traverser = *head;
	/* Iterate through list and stop at one before 'idx' */
	while (traverser != NULL)
	{
		/* If at one before 'idx', break loop, if not traverse */
		if (local_idx < (idx - 1))
		{
			traverser = traverser->next;
			local_idx++;
		}
		else
			break;
	}
	/* If reached end of list but still idx is big?, return NULL */
	if (traverser == NULL && local_idx < idx)
		return (NULL);
	/* Allocate and check memory for newNode */
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	/* Assign data to data section of the node */
	newNode->n = n;
	/* If asked to insert at the beginning manipulate '*head' */
	if (idx == 0)
		newNode->next = *head, *head = newNode;
	/* If anywhere other than beginning manipulate 'traverser' */
	else
		newNode->next = traverser->next, traverser->next = newNode;
	/* Return newly created node */
	return (newNode);
}
