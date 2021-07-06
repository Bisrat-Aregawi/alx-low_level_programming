#include "holberton.h"

/**
 * set_string - Function sets the valueof a pointer to a char
 * @s: Pointer to the pointer passed
 * @to: Pointer of string to change address of
 *
 * Return: Void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
