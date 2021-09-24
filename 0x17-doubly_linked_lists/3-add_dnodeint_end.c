#include "lists.h"

/**
 * add_dnodeint_end - Function inserts node at the end of doubly linked list
 * @head: Pointer to first node in doubly linked list
 * @n: Data to store in created node
 *
 * Return: Address of new node Null if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *localNode, *traverser = *head;

	localNode = malloc(sizeof(dlistint_t));
	if (localNode == NULL)
	{
		while (*head != NULL)
		{
			dlistint_t *temp = *head;

			*head = (*head)->next;
			free(temp);
		}
		exit(EXIT_FAILURE);
	}
	localNode->n = n, localNode->next = NULL;
	if (*head == NULL)
	{
		*head = localNode;
		localNode->prev = NULL;
		return (localNode);
	}
	while (traverser->next != NULL)
		traverser = traverser->next;
	localNode->prev = traverser;
	traverser->next = localNode;

	return (localNode);
}
