#include "holberton.h"

/**
 * puts2 - Function prints every other character of string.
 * @str: string provided for disection.
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, length;

	i = 0;
	length = 0;

	while (*(str + i))
	{
		length++;
		i++;
	}

	for (i = 0; i < length; i += 2)
	{
		if (*(str + i))
			_putchar(*(str + i));
		else
			break;
	}
	_putchar('\n');
}
