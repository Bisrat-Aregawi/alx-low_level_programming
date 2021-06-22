#include "holberton.h"

/**
 * print_last_digit - A function to print last digit passed to it
 * @n: The number to be examined
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int integer;

	integer = n % 10;

	if (integer < 0)
	{
		_putchar((integer * (-1)) + '0');
		return (integer * (-1));
	}
	_putchar(integer + '0');
	return (integer);
}
