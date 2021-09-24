#include "lists.h"

/**
 * sum_dlistint - Function returns the sum of all data in list
 * @head: Pointer to first node in list
 *
 * Return: Sum of all data in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head != NULL)
			sum += head->n, head = head->next;
	}
	return (sum);
}
