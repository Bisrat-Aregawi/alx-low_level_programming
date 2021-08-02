#include "lists.h"

/**
 * pop_listint - Function removes first node from provided list
 * @head: Pointer to pointer of first Node
 *
 * Return: Content of deleted node of type 'int'
 */
int pop_listint(listint_t **head)
{
	/* create a container for the value of first node */
	int lone_n;
	/* setup a temporary pointer to copy address of first node */
	listint_t *remNode;

	/* copy first 'n' to 'lone_n' before destroying its container node */
	lone_n = (*head)->n;
	/* store pointer to first node in remNode */
	remNode = *head;

	/* advance '*head' one step ahead */
	*head = (*head)->next;
	/* free the memory of detached first node fro the heap */
	free(remNode);

	return (lone_n);
}
