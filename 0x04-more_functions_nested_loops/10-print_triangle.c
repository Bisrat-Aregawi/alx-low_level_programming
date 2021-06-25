#include "holberton.h"

/**
 * print_triangle - Function prints #tags in a trianglular fashion
 * @size: number of steps of triangle pixel
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - (i + 1); j++)
			{
				_putchar(32);
			}
			for (k = 0; k < size - j; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
