#include "lists.h"

/**
 * sum_listint - Function sums all numbers stored in the linked list passed
 * @head: Pointer to first node of the linked list
 *
 * Return: Sum of numbers in the list, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
		sum += head->n, head = head->next;
	return (sum);
}
