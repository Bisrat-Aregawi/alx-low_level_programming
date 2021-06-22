#include <stdio.h>
#include "holberton.h"

/**
 * print_sign - Function that returns sign
 * @n: number to be examined
 *
 * Return: 1 if positive, -1 if negative and 0 if otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
