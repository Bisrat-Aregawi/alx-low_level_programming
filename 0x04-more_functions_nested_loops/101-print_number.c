#include "holberton.h"
/**
 * print_number - Function that prints numbers passed to it
 * @n: Number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int i, j, copy, length, multi;

	copy = n;
	length = 0;
	if (n < 0)
	{
		_putchar(45);
		n *= -1;
		copy *= -1;
	}
	while (copy > 0)
	{
		copy = copy / 10;
		length++;
	}
	if (n == 0)
	{
		_putchar(48);
	} else
	{
		for (i = length; i > 0; i--)
		{
			multi = 1;
			for (j = 0; j < i - 1; j++)
			{
				multi *= 10;
			}
			_putchar(((n / multi) % 10) + 48);
		}
	}
}
