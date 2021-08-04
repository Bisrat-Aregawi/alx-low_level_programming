#include "main.h"

/**
 * clear_bit - Function clears bits at given index
 * @n: Pointer to a number
 * @index: Index at which to clear bits
 * Return: 1 when successful, 0 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if (*n == 0 && index > 0)
		return (-1);
	if (*n & (1 << index))
		*n ^= (1 << index);
	return (1);
}
