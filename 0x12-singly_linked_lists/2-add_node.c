#include "lists.h"

/**
 * add_node - Function adds a new node to passed list
 * @head: Pointer to pointer of structure of type 'list_t'
 * @str: Name holding string
 *
 * Return: Pointer to head of the linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *localNode;
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
	/* have 'localNode' point to head at first (i.e. NULL)*/
	localNode->next = *head;

	/* setup '*head' so that it is no longer NULL */
	*head = localNode;

	/* return the node at the top of the list */
	return (localNode);
}
