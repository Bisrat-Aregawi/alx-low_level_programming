#include "main.h"

/**
 * set_bit - Function sets bit at @index to 1
 * @n: Pointer to unsigned long integer
 * @index: Index of bit to change to 1
 * Return: 1 for success, 0 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if ((*n & (1 << index)) == 0)
		*n = *n | (1 << index);
	return (1);
}
