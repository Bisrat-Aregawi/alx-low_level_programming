#include "holberton.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size to allocate using malloc
 *
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
