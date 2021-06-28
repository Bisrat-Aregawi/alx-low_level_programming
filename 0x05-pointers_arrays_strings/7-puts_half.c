#include "holberton.h"

/**
 * puts_half - Function prints the second half of passed string
 * @str: string to be trimmed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, length;

	i = 0;
	length = 0;

	while (*(str + i))
	{
		length++;
		i++;
	}
	for (i = (length % 2) ? (length / 2) + 1 : length / 2; i < length; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
