#include "holberton.h"

/**
 * _memset - Function sets array values accordingly
 * @s: Array to manipulate
 * @b: Byte value to enter in @s
 * @n: Number of times @b should be entered in @s
 *
 * Return: Pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
