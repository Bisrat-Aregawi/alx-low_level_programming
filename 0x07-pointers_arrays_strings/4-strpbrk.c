#include "holberton.h"

/**
 * _strpbrk - Function searches a string for any of a set of bytes
 * @s: String to be examined
 * @accept: String containing characters to be match
 *
 * Return: Pointer to byte that matches one of @s's chars
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (*(accept + i))
		{
			if (*(accept + i) == *s)
				return (s);
			i++;
		}
		s++;
	}
	return (NULL);
}
