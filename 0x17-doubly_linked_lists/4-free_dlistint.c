#include "lists.h"

/**
 * free_dlistint - Function frees a doubly linked list
 * @head: Pointer to first node in list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		while (head != NULL)
		{
			dlistint_t *temp = head;

			head = head->next;
			free(temp);
		}
	}
}
