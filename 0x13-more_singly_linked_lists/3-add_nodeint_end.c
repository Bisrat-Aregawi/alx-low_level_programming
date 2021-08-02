#include "lists.h"

/**
 * add_nodeint_end - Function adds new Nodes at the end and contents
 * of those nodes are passed along with pointer to the head node
 * @head: Pointer to pointer to first Node in the list
 * @n: Content of new node of type 'const int'
 *
 * Return: Address of new node created, NULL if malloc fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *traverser;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n =  n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		traverser = *head;
		while (traverser->next != NULL)
			traverser = traverser->next;
		traverser->next = newNode;
	}
	return (newNode);
}
