#include "lists.h"

/**
 * free_list - Function frees allocated memory after appending to the end
 * the linked list
 * @head: Pointer to first element in the linked list (type list_t)
 *
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *prevNode = head;

		head = head->next;
		free(prevNode->str);
		free(prevNode);
	}
}
