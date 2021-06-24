#include "holberton.h"

/**
 * print_line - Function that prints underscore
 * n number of times.
 * @n: how much _ is to be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	putchar('\n');
}
