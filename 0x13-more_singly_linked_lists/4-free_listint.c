#include "lists.h"

/**
 * free_listint - Function frees allocated memory form the action of
 * appension to the end of a linked list passed
 * @h: Pointer to first node in linked list
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *tempNode;

	while (head != NULL)
	{
		tempNode = head;
		head = head->next;
		free(tempNode);
	}
}
