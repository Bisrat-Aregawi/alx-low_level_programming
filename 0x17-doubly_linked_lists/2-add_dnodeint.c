#include "lists.h"

/**
 * add_dnodeint - Function adds node at the beginning
 * @head: Pointer to first node in doubly linked list
 * @n: Data to insert
 *
 * Return: Address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *localNode;

	localNode = malloc(sizeof(dlistint_t));
	if (localNode == NULL)
	{
		while (*head != NULL)
		{
			dlistint_t *temp;

			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
		exit(EXIT_FAILURE);
	}
	localNode->n = n;
	localNode->prev = NULL;
	if (*head == NULL)
	{
		localNode->next = NULL;
		*head = localNode;
	} else
	{
		localNode->next = *head;
		(*head)->prev = localNode;
		*head = localNode;
	}
	return (localNode);
}
