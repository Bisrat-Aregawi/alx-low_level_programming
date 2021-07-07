#include "holberton.h"

/**
 * _strlen_recursion - Function returns length of a string
 * @s: String to be measured
 *
 * Return: Length of @s
 */
int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
		return (0);
	length = 1 + _strlen_recursion(s + 1);
	return (length);
}
