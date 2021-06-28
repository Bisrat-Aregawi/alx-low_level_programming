#include "holberton.h"

/**
 * _puts - Function prints a string
 * @str: string passed to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (*(str + i))
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
