#include "holberton.h"

/**
 * _strchr - Function returns first occurence of a character
 * @s: String to be examined
 * @c: Character to be located in @s
 *
 * Return: Pointer to first occurence of @c
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			break;
	} while (*s++);
	return (s);
}
