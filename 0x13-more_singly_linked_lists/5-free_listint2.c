#include "lists.h"

/**
 * free_listint2 - Function frees allocated memory from the action of
 * appension to the end of a linked list passed
 * @head: Pointer to pointer to first Node in list
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	/* Declare a local node to store rather disapearing addresses */
	listint_t *prevNode;

	/* Check if 'head' itself is not NULL */
	if (!head)
		return;
	/* Traverse with '*head' until '*head' becomes NULL */
	while (*head != NULL)
	{
		/* Copy current state of first node */
		prevNode = *head;
		/* Step one node ahead */
		*head = (*head)->next;
		/* Free previous node */
		free(prevNode);
	}
}
