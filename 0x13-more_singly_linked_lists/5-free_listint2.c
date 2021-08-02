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
	listint_t *tempNode1, *tempNode2;

	tempNode1 = *head;
	while (tempNode1 != NULL)
	{
		tempNode2 = tempNode1;
		tempNode1 = tempNode1->next;
		free(tempNode2);
	}
	*head = NULL;
}
