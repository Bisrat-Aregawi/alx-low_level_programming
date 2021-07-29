#include "lists.h"

/**
 * add_node_end - Function adds (at the bottom) a new node to passed list
 * @head: Pointer to pointer of structure of type 'list_t'
 * @str: Name holding string
 *
 * Return: Pointer to the new node added at the bottom
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *localNode;
	list_t *currNode;
	char *localStr;
	/* allocate and check memory for 'localNode' */
	localNode = malloc(sizeof(list_t));
	if (localNode == NULL)
		exit(1);
	/* allocate and check memory for 'localStr' */
	localStr = malloc(strlen(str) + 1);
	if (localStr == NULL)
	{
		free(localNode);
		exit(1);
	}
	/* duplicate 'str' & have localStr point to the duplicate */
	localStr = strdup(str);
	/* load everything onto 'localNode' */
	localNode->str = localStr;
	localNode->len = strlen(localStr);
	/* have 'localNode' point to NULL (always last node)*/
	localNode->next = NULL;
	/*
	 * if initial addition, then assign '*head' value of 'localNode'
	 * if not, then traverse the list and append 'localNode' to last
	 */
	if (*head == NULL)
		*head = localNode;
	else
	{
		currNode = *head;
		while ((currNode)->next != NULL)
			currNode = currNode->next;
		currNode->next = localNode;
	}
	/* return last node */
	return (localNode);
}
