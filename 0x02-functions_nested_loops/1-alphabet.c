#include "holberton.h"

/**
 * print_alphabet - Function that prints alphabets
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	i = 0;

	while (i <= 25)
	{
		_putchar((i + 97));
		i++;
	}
	_putchar('\n');
}
