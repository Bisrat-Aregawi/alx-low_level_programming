#include "main.h"

/**
 * get_bit - Function returns value of a bit at @index
 * @n: Number to be examined
 * @index: Index of a bit b/n significant bits (included)
 * Return: Value of bit at @index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	if (n == 0 && index > 0)
		return (-1);
	if (n & (1 << index))
		return (1);
	return (0);
}
