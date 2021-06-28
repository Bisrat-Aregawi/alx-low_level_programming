#include "holberton.h"

/**
 * rev_string - Function reverses passed string
 * @s: string pointer passed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, length;

	i = 0;
	length = 0;

	while (*(s + i))
	{
		length++;
		i++;
	}
	for (i = 0; i < length / 2; i++)
	{
		char c = *(s + i);
		*(s + i) = *(s + length - i - 1);
		*(s + length - i - 1) = c;
	}
}
