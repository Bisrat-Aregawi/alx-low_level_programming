#include "lists.h"
/**
 * reverse_listint - Function reverses given linked list
 * @head: Pointer to pointer of first node in list
 * Return: Pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	/* Declare two pointers to hold rather disapearing addresses */
	listint_t *prevNode, *nextNode;
	/* Initialize them to 'NULL' to ease edge case handling */
	prevNode = NULL, nextNode = NULL;
	/* Traverse list & at each traversal manipulate pointers */
	while ((*head)->next != NULL)
	{
		/* If just at node at index 0 */
		if (prevNode == NULL && nextNode == NULL)
		{
			/* Store address of next node */
			nextNode = (*head)->next;
			/* Store address of current node */
			prevNode = *head;
			/* Make current node be like the last node */
			(*head)->next = NULL;
			/* Point head to next to its current node */
			(*head) = nextNode;
		}
		/* If not at the begining node (until the end) */
		else
		{
			/* Store address of next node */
			nextNode = (*head)->next;
			/* Make current node point to its behind */
			(*head)->next = prevNode;
			/* Make laging node come to current position */
			prevNode = *head;
			/* Point head to next to its current node */
			*head = nextNode;
		}
	}
	/*
	 * Handle the last node's link to point it to its previous node
	 * (while is unable to do this step without an
	 * error or a nested conditional)
	 */
	(*head)->next = prevNode;
	/* Return the address of reversed linked list's first node */
	return (*head);
}
