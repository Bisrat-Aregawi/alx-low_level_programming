#include "holberton.h"

/**
 * _memcpy - Function copies values from source address
 * to destination address.
 * @dest: Destination array to print into
 * @src: Source array to copy from
 * @n: number of values to copy from @src
 *
 * Return: Pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
