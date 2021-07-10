#include "holberton.h"

int digitCount(int);
/**
 * print_number - Function that prints numbers passed to it
 * @n: Number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int i, j, multi;

	if (n < 0)
		_putchar(45);
	if (n == 0)
		_putchar(48);
	else if (n == -1)
		_putchar(49);
	else
	{
		for (i = digitCount(n); i > 0; i--)
		{
			multi = 1;
			for (j = 0; j < i - 1; j++)
				multi *= 10;
			if (n < 0)
				_putchar((-1) * ((n / multi) % 10) + 48);
			else
				_putchar(((n / multi) % 10) + 48);
		}
	}
}

/**
 * digitCount - Function returns the number of digits of a number
 * @n: Number to be examined
 *
 * Return: Number of digits of @n
 */
int digitCount(int n)
{
	int length;

	length = 0;
	if (n < 0)
		n = (n + 1) * (-1);
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}
