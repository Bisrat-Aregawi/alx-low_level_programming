#include "holberton.h"

/**
 * print_rev - Function prints strings in reverse
 * @s: The string to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, length;

	i = 0;
	length = 0;

	while (*(s + i))
	{
		length++;
		i++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
