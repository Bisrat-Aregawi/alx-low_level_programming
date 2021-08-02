#include "lists.h"

/**
 * add_nodeint - Function adds new Nodes at the begining and
 * contents of those nodes are passed along with pointer to the head node
 * @head: Pointer to pointer to first Node in the list
 * @n: Content of new node of type 'const int'
 *
 * Return: Address of new node created, NULL if malloc fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
