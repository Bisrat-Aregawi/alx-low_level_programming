#include "holberton.h"

int length(char *);

/**
 * _print_rev_recursion - Function prints string in reverse using recursion
 * @s: String to reverse-print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
