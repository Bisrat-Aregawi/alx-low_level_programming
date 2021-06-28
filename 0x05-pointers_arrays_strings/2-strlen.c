#include "holberton.h"

/**
 * _strlen - Function that returns length of a string
 * @s: string to be examined
 *
 * Return: length of @s
 */
int _strlen(char *s)
{
	int i, length;

	i = 0;
	length = 0;

	while ((int)*(s + i))
	{
		length++;
		i++;
	}
	return (length);
}
