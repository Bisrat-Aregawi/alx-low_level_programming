#ifndef _LISTS_H_
#define _LISTS_H_

/**
 * struct list_s - Singly linked list
 * @str: String - (malloc'ed string)
 * @len: Length of the string
 * @next: Points to the next node
 *
 * Description: Signly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

#include <stdio.h>
#include <stddef.h>

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /* _LISTS_H_ */
